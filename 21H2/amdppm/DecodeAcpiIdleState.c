/*
 * XREFs of DecodeAcpiIdleState @ 0x1C00040D4
 * Callers:
 *     DecodeAcpi2CState @ 0x1C00226C0 (DecodeAcpi2CState.c)
 *     RegisterHvLpiStates @ 0x1C002476C (RegisterHvLpiStates.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002C4E4 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     RegisterHiddenIdleStates @ 0x1C0030050 (RegisterHiddenIdleStates.c)
 *     RegisterKernelLpiStates @ 0x1C0030BE0 (RegisterKernelLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0037700 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0004448 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     AcpiTranslateAccessSize @ 0x1C0029A3C (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall DecodeAcpiIdleState(
        __int64 a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5,
        char *a6,
        _BYTE *a7,
        __int64 a8)
{
  __int64 (__fastcall *v8)(); // r15
  char v9; // r13
  __int64 v12; // r10
  unsigned int v13; // r12d
  char v14; // cl
  const char *v15; // rdx
  int v16; // r9d
  int v17; // edx
  __int64 v18; // xmm1_8
  void (__fastcall __noreturn *v19)(); // rcx
  int v20; // eax
  __int64 (*v21)(); // r8
  int v22; // eax
  __int64 v24; // [rsp+28h] [rbp-48h]
  __int64 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  int v27; // [rsp+68h] [rbp-8h]

  v8 = 0LL;
  v25 = 0LL;
  v9 = 0;
  v12 = a1;
  v13 = -1073741823;
  if ( qword_1C0014540 )
  {
    v13 = qword_1C0014540(a1);
    if ( (v13 & 0x80000000) == 0 )
      return v13;
    v12 = a1;
  }
  v14 = *a2;
  v15 = "LPI";
  if ( a3 != -1 )
    v15 = "C";
  if ( v14 != 127 )
  {
    if ( v14 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 16;
        goto LABEL_40;
      }
      return v13;
    }
    if ( a3 <= 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 15;
        goto LABEL_40;
      }
      return v13;
    }
    if ( a3 != 2 && a3 != -1 )
    {
      v20 = *((_DWORD *)a2 + 2);
      v26 = *(_QWORD *)a2;
      v27 = v20;
      AcpiTranslateAccessSize(&v26, v15);
      v17 = v27;
      v21 = C3IdleCheck;
      v18 = v26;
      v19 = (void (__fastcall __noreturn *)())C3Idle;
      v8 = DecodeRegisterContext;
      v25 = 0xB20000000000000LL;
      LOWORD(v25) = WORD2(v26);
LABEL_28:
      v13 = 0;
      if ( a8 )
      {
        *(_QWORD *)(a8 + 32) = v18;
        *(_DWORD *)(a8 + 40) = v17;
        *(_BYTE *)(a8 + 80) = 1;
        *(_QWORD *)(a8 + 16) = v21;
        *(_QWORD *)(a8 + 24) = v19;
        *(_QWORD *)(a8 + 64) = v8;
      }
      if ( a6 )
        *a6 = v9;
      if ( a7 )
        *a7 = 1;
      if ( a5 )
        *a5 = v25;
      return v13;
    }
    v22 = *((_DWORD *)a2 + 2);
    v26 = *(_QWORD *)a2;
    v27 = v22;
    AcpiTranslateAccessSize(&v26, v15);
    v17 = v27;
    v19 = (void (__fastcall __noreturn *)())C2Idle;
    v18 = v26;
    v8 = DecodeRegisterContext;
    v25 = 0x420000000000000LL;
    LOWORD(v25) = WORD2(v26);
LABEL_27:
    v21 = 0LL;
    goto LABEL_28;
  }
  if ( a2[1] == 1 )
  {
    if ( a2[2] != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 13;
LABEL_40:
        v24 = (__int64)v15;
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_s(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v15,
          1,
          v16,
          (__int64)&WPP_9b0ff94dcd5d35c7d1c1dd470390808e_Traceguids,
          v24);
        return v13;
      }
      return v13;
    }
    v17 = *((_DWORD *)a2 + 2);
    v18 = *(_QWORD *)a2;
    v26 = *(_QWORD *)a2;
    if ( HIDWORD(v26) )
    {
      LODWORD(v26) = 134219777;
      v17 = 0;
      v18 = v26;
    }
    v19 = IoHaltC1Idle;
    v25 = 0x10000000000000LL;
    v8 = DecodeRegisterContext;
    LOWORD(v25) = WORD2(v26);
    goto LABEL_18;
  }
  if ( a3 == 1 || a3 == -1 && (*(_QWORD *)(v12 + 272) & 0xE0000000000LL) != 0 )
  {
    v17 = *((_DWORD *)a2 + 2);
    v19 = (void (__fastcall __noreturn *)())C1Idle;
    v18 = *(_QWORD *)a2;
LABEL_18:
    v9 = 1;
    goto LABEL_27;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 14;
    goto LABEL_40;
  }
  return v13;
}
