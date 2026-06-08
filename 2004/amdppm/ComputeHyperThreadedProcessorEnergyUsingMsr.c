/*
 * XREFs of ComputeHyperThreadedProcessorEnergyUsingMsr @ 0x1C0001560
 * Callers:
 *     <none>
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001860 (EnumerateNextDevice.c)
 *     ProcLibGetProcessorNumber @ 0x1C0001BF0 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall ComputeHyperThreadedProcessorEnergyUsingMsr(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // r12d
  int v6; // esi
  __int64 v7; // r13
  _QWORD *v8; // r10
  __int64 v9; // rbx
  unsigned __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // cc
  char v22; // [rsp+30h] [rbp-91h] BYREF
  __int16 v23; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int FirstSetLeftGroupAffinity; // [rsp+38h] [rbp-89h] BYREF
  int v25; // [rsp+3Ch] [rbp-85h] BYREF
  int v26; // [rsp+40h] [rbp-81h] BYREF
  int v27; // [rsp+48h] [rbp-79h]
  __int64 v28; // [rsp+50h] [rbp-71h] BYREF
  __int64 v29; // [rsp+58h] [rbp-69h] BYREF
  __int64 v30; // [rsp+60h] [rbp-61h]
  _QWORD v31[4]; // [rsp+68h] [rbp-59h] BYREF
  __int128 v32; // [rsp+88h] [rbp-39h] BYREF
  __int64 v33; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-21h] BYREF
  char *v35; // [rsp+B0h] [rbp-11h]
  __int64 v36; // [rsp+B8h] [rbp-9h]
  int *v37; // [rsp+C0h] [rbp-1h]
  __int64 v38; // [rsp+C8h] [rbp+7h]
  __int64 *v39; // [rsp+D0h] [rbp+Fh]
  __int64 v40; // [rsp+D8h] [rbp+17h]

  v5 = 0;
  v27 = a1;
  v30 = a5;
  v33 = 0LL;
  v6 = a1;
  v28 = 0LL;
  v31[0] = &qword_1C0013410;
  v31[1] = &qword_1C0013410;
  v32 = 0LL;
  v31[3] = 32LL;
  v7 = 0LL;
  FirstSetLeftGroupAffinity = 0;
  v31[2] = 0LL;
  if ( !(unsigned int)EnumerateNextDevice(v31, &v28) )
  {
    do
    {
      v9 = v28;
      if ( *(unsigned __int8 *)(v28 + 368) == v6 )
      {
        FirstSetLeftGroupAffinity = KeFindFirstSetLeftGroupAffinity(v28 + 1200);
        if ( FirstSetLeftGroupAffinity == *(_DWORD *)(v9 + 56) )
        {
          v11 = v9 + 1200;
          v12 = 0LL;
          v13 = 0LL;
          v14 = 0;
          KeInitializeEnumerationContextFromGroup(&v32, v11);
          if ( !(unsigned int)KeEnumerateNextProcessor(&FirstSetLeftGroupAffinity, &v32) )
          {
            do
            {
              v15 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + FirstSetLeftGroupAffinity);
              v16 = *(_QWORD *)(v15 + 360);
              v17 = *(_QWORD *)(v16 + 128);
              v18 = *(unsigned int *)(v16 + 32);
              if ( v13 < v17 || v13 == v17 && v5 < (unsigned int)v18 )
              {
                v13 = *(_QWORD *)(v16 + 128);
                v5 = *(_DWORD *)(v16 + 32);
              }
              v19 = *(_QWORD *)(v16 + 120);
              if ( v12 < v19 || v12 == v19 && v14 < *(_DWORD *)(v16 + 24) )
              {
                v12 = *(_QWORD *)(v16 + 120);
                v14 = *(_DWORD *)(v16 + 24);
              }
              *(_QWORD *)(v16 + 120) = v17;
              *(_QWORD *)(v16 + 24) = v18;
              v29 = v18;
              v26 = -1073675622;
              v23 = 0;
              v22 = 0;
              v25 = 0;
              if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_ENERGY_COUNTER_UPDATE)
                && (int)ProcLibGetProcessorNumber(v15, &v25) >= 0 )
              {
                v23 = v25;
                v22 = BYTE2(v25);
                UserData.Ptr = (unsigned __int64)&v23;
                v35 = &v22;
                v37 = &v26;
                v39 = &v29;
                *(_QWORD *)&UserData.Size = 2LL;
                v36 = 1LL;
                v38 = 4LL;
                v40 = 8LL;
                EtwWrite(
                  (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                  &PPM_ETW_ENERGY_COUNTER_UPDATE,
                  0LL,
                  4u,
                  &UserData);
              }
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&FirstSetLeftGroupAffinity, &v32) );
            v6 = v27;
          }
          v20 = v5 - v14;
          v21 = v5 <= v14;
          v5 = 0;
          if ( v21 )
            v20 = 0LL;
          v7 += v20;
        }
      }
    }
    while ( !(unsigned int)EnumerateNextDevice(v31, &v28) );
    v8 = (_QWORD *)v30;
  }
  result = (unsigned __int64)(1000000 * v7) >> SLOBYTE(WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *v8 = result;
  return result;
}
