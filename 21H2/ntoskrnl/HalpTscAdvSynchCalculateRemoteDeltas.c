/*
 * XREFs of HalpTscAdvSynchCalculateRemoteDeltas @ 0x14039D024
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x14039CDE4 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x14039D254 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall HalpTscAdvSynchCalculateRemoteDeltas(
        __int64 *a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 *v6; // rdi
  __int64 v8; // rcx
  unsigned int *v10; // r14
  unsigned int v11; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  int *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  REGHANDLE v17; // r14
  int v19; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-61h] BYREF
  int v21; // [rsp+50h] [rbp-59h] BYREF
  __int64 v22; // [rsp+58h] [rbp-51h]
  unsigned int *v23; // [rsp+60h] [rbp-49h]
  __int64 v24; // [rsp+68h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-39h] BYREF
  int *v26; // [rsp+80h] [rbp-29h]
  __int64 v27; // [rsp+88h] [rbp-21h]
  __int64 *v28; // [rsp+90h] [rbp-19h]
  __int64 v29; // [rsp+98h] [rbp-11h]
  int *v30; // [rsp+A0h] [rbp-9h]
  __int64 v31; // [rsp+A8h] [rbp-1h]

  v6 = (__int64 *)HalpTscDeltas;
  v8 = HalpTscNopCycles;
  v23 = a3;
  v10 = a3;
  v22 = HalpTscNopCycles;
  v11 = 0;
  *a1 = 0LL;
  *a2 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  *a3 = CurrentPrcb->Number;
  if ( a6 )
  {
    v13 = (int *)v8;
    do
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v11 == CurrentPrcb->Number )
      {
        *v6 = 0LL;
        *v13 = 0;
      }
      else
      {
        v14 = HalpTscAdvSynchCalculateRemoteDelta(v11, (unsigned int)HalpTscRequestedIterations, v8 + 4LL * v11);
        *v6 = v14;
        if ( v14 < *a1 )
          *a1 = v14;
        v15 = *v6;
        if ( *v6 > *a2 )
        {
          *a2 = v15;
          *v10 = v11;
          v15 = *v6;
        }
        v16 = *v13;
        v24 = v15;
        v21 = v16;
        LODWORD(CurrentPrcb) = KeGetCurrentPrcb()->Number;
        v19 = (int)CurrentPrcb;
        v20 = v11;
        if ( HalpDiagnosticEventsRegistered )
        {
          v17 = HalpDiagnosticEventHandle;
          LOBYTE(CurrentPrcb) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT);
          if ( (_BYTE)CurrentPrcb )
          {
            v29 = 8LL;
            *(_QWORD *)&UserData.Size = 4LL;
            UserData.Ptr = (ULONGLONG)&v19;
            v27 = 4LL;
            v26 = (int *)&v20;
            v31 = 4LL;
            v28 = &v24;
            v30 = &v21;
            LOBYTE(CurrentPrcb) = EtwWriteEx(
                                    v17,
                                    &HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT,
                                    0LL,
                                    0,
                                    0LL,
                                    0LL,
                                    4u,
                                    &UserData);
          }
          v10 = v23;
        }
        v8 = v22;
      }
      ++v11;
      ++v13;
      ++v6;
    }
    while ( v11 < a6 );
  }
  return (char)CurrentPrcb;
}
