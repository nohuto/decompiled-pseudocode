/*
 * XREFs of ProcLibTraceCoordinatedIdleStates @ 0x1C001E8A8
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001E5F0 (ProcLibTraceControlCallback.c)
 *     RegisterKernelCoordinatedStates @ 0x1C0030884 (RegisterKernelCoordinatedStates.c)
 *     UpdateKernelCoordinatedStates @ 0x1C0032194 (UpdateKernelCoordinatedStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001D90 (__security_check_cookie.c)
 */

void __fastcall ProcLibTraceCoordinatedIdleStates(char a1)
{
  unsigned int *v1; // rbx
  int *PoolWithTag; // rdi
  char *v4; // rsi
  const EVENT_DESCRIPTOR *v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // eax
  const EVENT_DESCRIPTOR *v10; // r12
  __int64 v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // r14
  unsigned int v17; // eax
  unsigned int v18; // r10d
  __int64 v19; // r9
  unsigned int *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r8
  char *v23; // rcx
  bool v24; // zf
  int v25; // eax
  int v26; // [rsp+38h] [rbp-59h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-51h] BYREF
  BOOL v29; // [rsp+44h] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-49h] BYREF
  int *v31; // [rsp+58h] [rbp-39h]
  __int64 v32; // [rsp+60h] [rbp-31h]
  BOOL *v33; // [rsp+68h] [rbp-29h]
  __int64 v34; // [rsp+70h] [rbp-21h]
  struct _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+78h] [rbp-19h]
  __int64 v36; // [rsp+80h] [rbp-11h]
  unsigned __int8 *p_Number; // [rsp+88h] [rbp-9h]
  __int64 v38; // [rsp+90h] [rbp-1h]
  unsigned int *v39; // [rsp+98h] [rbp+7h]
  __int64 v40; // [rsp+A0h] [rbp+Fh]
  char *v41; // [rsp+A8h] [rbp+17h]
  int v42; // [rsp+B0h] [rbp+1Fh]
  int v43; // [rsp+B4h] [rbp+23h]

  v1 = (unsigned int *)qword_1C00149A8;
  v28 = 0;
  v26 = 0;
  PoolWithTag = 0LL;
  v29 = 0;
  v4 = 0LL;
  ProcNumber = 0;
  if ( qword_1C00149A8 )
  {
    v5 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_COORDINATED_IDLE_STATES;
    if ( a1 )
      v5 = &PPM_ETW_GET_COORDINATED_IDLE_STATES_RUNDOWN;
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v5) )
    {
      PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 12LL * *v1, 0x72637250u);
      if ( !PoolWithTag )
        return;
      if ( *v1 )
      {
        v6 = v26;
        do
        {
          v7 = 56LL * v6;
          v8 = 3LL * v6;
          PoolWithTag[v8] = v1[v7 + 60];
          PoolWithTag[v8 + 1] = v1[v7 + 61];
          PoolWithTag[v8 + 2] = v1[v7 + 63];
          v6 = v26 + 1;
          v26 = v6;
        }
        while ( v6 < *v1 );
      }
      UserData.Ptr = (unsigned __int64)v1;
      *(_QWORD *)&UserData.Size = 4LL;
      v9 = *v1;
      v31 = PoolWithTag;
      v32 = 12 * v9;
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v5, 0LL, 2u, &UserData);
    }
    v10 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_COORDINATED_DEPENDENCY;
    if ( a1 )
      v10 = &PPM_ETW_GET_COORDINATED_DEPENDENCY_RUNDOWN;
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v10) )
    {
      v26 = 0;
      v11 = 0LL;
      if ( *v1 )
      {
        v12 = 0;
        do
        {
          v13 = v11;
          v11 = v1[56 * v12++ + 62];
          v26 = v12;
          if ( v13 >= (unsigned int)v11 )
            v11 = v13;
        }
        while ( v12 < *v1 );
      }
      v4 = (char *)ExAllocatePoolWithTag(PagedPool, 13 * v11, 0x72637250u);
      if ( v4 )
      {
        v14 = 0;
        v26 = 0;
        if ( *v1 )
        {
          v15 = 0;
          do
          {
            v16 = 56LL * v15;
            v28 = 0;
            if ( v1[v16 + 63] )
            {
              v17 = 0;
              do
              {
                v18 = 0;
                v19 = *(_QWORD *)&v1[v16 + 66] + 16LL * v17;
                v20 = (unsigned int *)(v19 + 4);
                if ( *(_DWORD *)(v19 + 4) )
                {
                  do
                  {
                    v21 = *(_QWORD *)(v19 + 8);
                    v22 = v18++;
                    v23 = &v4[13 * v22];
                    *v23 = *(_BYTE *)(v21 + 4 * v22);
                    *(_DWORD *)(v23 + 1) = *(unsigned __int8 *)(v21 + 4 * v22 + 1);
                    *(_DWORD *)(v23 + 5) = *(unsigned __int8 *)(v21 + 4 * v22 + 2);
                    *(_DWORD *)(v23 + 9) = *(unsigned __int8 *)(v21 + 4 * v22 + 3);
                  }
                  while ( v18 < *v20 );
                }
                v24 = *(_DWORD *)v19 == -1;
                v29 = *(_DWORD *)v19 != -1;
                if ( v24 )
                {
                  ProcNumber.Group = 0;
                  ProcNumber.Number = 0;
                }
                else
                {
                  KeGetProcessorNumberFromIndex(*(_DWORD *)v19, &ProcNumber);
                }
                UserData.Ptr = (unsigned __int64)&v26;
                *(_QWORD *)&UserData.Size = 4LL;
                v31 = (int *)&v28;
                v32 = 4LL;
                v33 = &v29;
                v34 = 4LL;
                p_ProcNumber = &ProcNumber;
                p_Number = &ProcNumber.Number;
                v36 = 2LL;
                v38 = 1LL;
                v39 = v20;
                v40 = 4LL;
                v25 = 13 * *v20;
                v41 = v4;
                v43 = 0;
                v42 = v25;
                EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v10, 0LL, 7u, &UserData);
                v17 = v28 + 1;
                v28 = v17;
              }
              while ( v17 < v1[v16 + 63] );
              v14 = v26;
            }
            v26 = ++v14;
            v15 = v14;
          }
          while ( v14 < *v1 );
        }
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x72637250u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x72637250u);
  }
}
