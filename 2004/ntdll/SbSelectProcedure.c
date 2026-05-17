/*
 * XREFs of SbSelectProcedure @ 0x18003E0D0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x18003C9CC (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x1800F22F4 (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x180113650 (SbExecuteProcedure.c)
 * Callees:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18003E2B0 (SbpUpdateCacheWithCurrentImpl.c)
 *     EtwEventRegister @ 0x180042E70 (EtwEventRegister.c)
 *     EtwEventWrite @ 0x18004F1A0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x180050390 (EtwNotificationUnregister.c)
 *     SbpUpdateCache @ 0x18006E830 (SbpUpdateCache.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     SbpTraceContextUpdate @ 0x180113578 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  char *pShimData; // r8
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 *v14; // r12
  __int64 v15; // rdx
  char *v16; // rsi
  char *v17; // rsi
  __int64 *v18; // rsi
  char *v19; // rdi
  char *v20; // rdi
  signed __int64 v22; // r13
  _RTL_USER_PROCESS_PARAMETERS *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // eax
  signed __int64 v30; // r15
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int16 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v37; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v38; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v39; // [rsp+3Ch] [rbp-C4h] BYREF
  signed __int64 v40; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v42; // [rsp+50h] [rbp-B0h]
  signed __int64 v43; // [rsp+58h] [rbp-A8h]
  _QWORD v44[5]; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+88h] [rbp-78h]
  int v46; // [rsp+8Ch] [rbp-74h]
  unsigned __int16 *v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  __int128 v52; // [rsp+B0h] [rbp-50h]
  __int128 v53; // [rsp+C0h] [rbp-40h]
  __int128 v54; // [rsp+D0h] [rbp-30h]
  _QWORD v55[16]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v7 = a4;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = pShimData + 2016) == 0LL || !*((_DWORD *)v9 + 12) )
  {
    SbpUpdateCacheWithCurrentImpl(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 2016) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)SbpUpdateCache(v5, a3, v9 + 24, a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v6;
    _mm_lfence();
    v13 = v7;
    v14 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(v55, 0, sizeof(v55));
    v15 = -1LL;
    v36 = 0;
    v37 = 0;
    if ( !*((_DWORD *)v14 + 11)
      || (v40 = 0LL, (v16 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = v16 + 2016) == 0LL
      || !*((_DWORD *)v17 + 12)
      || !*((_DWORD *)v17 + 3) )
    {
LABEL_16:
      v18 = *(__int64 **)(v5 + 8 * v13 + 16);
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      if ( *((_DWORD *)v18 + 10) )
      {
        v41 = 0LL;
        v19 = (char *)NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 2016;
          if ( v20 )
          {
            if ( *((_DWORD *)v20 + 12) && *((_DWORD *)v20 + 3) )
            {
              v30 = *((_QWORD *)v20 + 2);
              if ( v30 )
                goto LABEL_48;
              if ( !(unsigned int)EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v41) )
              {
                v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 2, v41, 0LL);
                if ( v30 )
                {
                  EtwNotificationUnregister(v41, 0LL);
                }
                else
                {
                  v43 = v41;
                  ProcessParameters = NtCurrentPeb()->ProcessParameters;
                  SbpTraceContextUpdate(
                    v41,
                    (_DWORD)v20 + 48,
                    0,
                    ProcessParameters->ImagePathName.Length,
                    (__int64)ProcessParameters->ImagePathName.Buffer);
                  v30 = v43;
                }
                v15 = -1LL;
                if ( v30 )
                {
LABEL_48:
                  v32 = *v18;
                  v44[0] = v18 + 14;
                  v33 = -1LL;
                  v44[1] = 16LL;
                  do
                    ++v33;
                  while ( *(_WORD *)(v32 + 2 * v33) );
                  v44[4] = v32;
                  v34 = v18[3];
                  v44[2] = &v38;
                  v35 = (unsigned __int16)(2 * (v33 + 1));
                  v38 = v35;
                  v45 = v35;
                  v44[3] = 2LL;
                  v46 = 0;
                  do
                    ++v15;
                  while ( *(_WORD *)(v34 + 2 * v15) );
                  v49 = v34;
                  v48 = 2LL;
                  v39 = 2 * (v15 + 1);
                  v47 = &v39;
                  v50 = v39;
                  v51 = 0;
                  EtwEventWrite(v30, &AeSbImplEvent, 5LL, v44);
                }
              }
            }
          }
        }
      }
      return v18[1];
    }
    v22 = *((_QWORD *)v17 + 2);
    if ( v22 )
    {
      v42 = *((_QWORD *)v17 + 2);
    }
    else
    {
      if ( (unsigned int)EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v40) )
        goto LABEL_40;
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, v40, 0LL);
      if ( v22 )
      {
        EtwNotificationUnregister(v40, 0LL);
        v42 = v22;
      }
      else
      {
        v42 = v40;
        v23 = NtCurrentPeb()->ProcessParameters;
        SbpTraceContextUpdate(v40, (_DWORD)v17 + 48, 0, v23->ImagePathName.Length, (__int64)v23->ImagePathName.Buffer);
        v22 = v42;
      }
      v15 = -1LL;
    }
    if ( !v22 )
      goto LABEL_16;
    v24 = *v14;
    v55[0] = (char *)v14 + 52;
    v25 = -1LL;
    v55[1] = 16LL;
    do
      ++v25;
    while ( *(_WORD *)(v24 + 2 * v25) );
    v55[4] = v24;
    v26 = v14[1];
    v55[2] = &v36;
    v27 = (unsigned __int16)(2 * (v25 + 1));
    v36 = v27;
    v55[5] = v27;
    v28 = -1LL;
    v55[3] = 2LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v55[8] = v26;
    v55[7] = 2LL;
    v29 = (unsigned __int16)(2 * (v28 + 1));
    v55[6] = &v37;
    v37 = v29;
    v55[9] = v29;
    EtwEventWrite(v22, &AeSbCallEvent, 5LL, v55);
LABEL_40:
    v15 = -1LL;
    goto LABEL_16;
  }
  return 0LL;
}
