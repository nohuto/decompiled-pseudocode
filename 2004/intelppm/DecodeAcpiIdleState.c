/*
 * XREFs of DecodeAcpiIdleState @ 0x1C0003F60
 * Callers:
 *     DecodeAcpi2CState @ 0x1C0025738 (DecodeAcpi2CState.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002E8D8 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     RegisterHvLpiStates @ 0x1C003068C (RegisterHvLpiStates.c)
 *     RegisterKernelLpiStates @ 0x1C0035B8C (RegisterKernelLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003A120 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000356C (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     AcpiTranslateAccessSize @ 0x1C0023844 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall DecodeAcpiIdleState(
        __int64 a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        __int64 *a5,
        char *a6,
        char *a7,
        __int64 a8)
{
  void (__fastcall *v8)(_QWORD *, __int64, _QWORD *); // r14
  char v9; // r12
  __int64 v12; // r10
  unsigned int v13; // r15d
  char v15; // cl
  const char *v16; // rdx
  char v17; // r11
  unsigned __int16 v18; // r9
  int v19; // edx
  __int64 v20; // xmm1_8
  void (__fastcall __noreturn *v21)(); // rcx
  int v22; // eax
  __int64 (__fastcall *v23)(); // r8
  int v24; // eax
  __int64 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  int v27; // [rsp+68h] [rbp-8h]

  v8 = 0LL;
  v25 = 0LL;
  v9 = 0;
  v12 = a1;
  v13 = -1073741823;
  if ( qword_1C001C560 )
  {
    v13 = qword_1C001C560(a1);
    if ( (v13 & 0x80000000) == 0 )
      return v13;
    v12 = a1;
  }
  v15 = *a2;
  v16 = "LPI";
  v17 = 1;
  if ( a3 != -1 )
    v16 = "C";
  if ( v15 == 127 )
  {
    if ( a2[1] == 1 )
    {
      if ( a2[2] != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v13;
        v18 = 13;
LABEL_41:
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v18,
          (__int64)&WPP_9b0ff94dcd5d35c7d1c1dd470390808e_Traceguids,
          v16);
        return v13;
      }
      v19 = *((_DWORD *)a2 + 2);
      v20 = *(_QWORD *)a2;
      v26 = *(_QWORD *)a2;
      if ( HIDWORD(v26) )
      {
        LODWORD(v26) = 134219777;
        v19 = 0;
        v20 = v26;
      }
      v21 = IoHaltC1Idle;
      v25 = 0x10000000000000LL;
      v8 = DecodeRegisterContext;
      LOWORD(v25) = WORD2(v26);
    }
    else
    {
      if ( a3 != 1 && (a3 != -1 || (*(_QWORD *)(v12 + 272) & 0xE0000000000LL) == 0) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v13;
        v18 = 14;
        goto LABEL_41;
      }
      v19 = *((_DWORD *)a2 + 2);
      v21 = C1Idle;
      v20 = *(_QWORD *)a2;
    }
    v9 = 1;
    goto LABEL_28;
  }
  if ( v15 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v13;
    v18 = 16;
    goto LABEL_41;
  }
  if ( a3 <= 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v13;
    v18 = 15;
    goto LABEL_41;
  }
  if ( a3 == 2 || a3 == -1 )
  {
    v24 = *((_DWORD *)a2 + 2);
    v26 = *(_QWORD *)a2;
    v27 = v24;
    AcpiTranslateAccessSize(&v26, v16);
    v19 = v27;
    v21 = (void (__fastcall __noreturn *)())C2Idle;
    v20 = v26;
    v8 = DecodeRegisterContext;
    v25 = 0x420000000000000LL;
    LOWORD(v25) = WORD2(v26);
LABEL_28:
    v23 = 0LL;
    goto LABEL_29;
  }
  v22 = *((_DWORD *)a2 + 2);
  v26 = *(_QWORD *)a2;
  v27 = v22;
  AcpiTranslateAccessSize(&v26, v16);
  v19 = v27;
  v23 = C3IdleCheck;
  v20 = v26;
  v21 = (void (__fastcall __noreturn *)())C3Idle;
  v8 = DecodeRegisterContext;
  v25 = 0xB20000000000000LL;
  LOWORD(v25) = WORD2(v26);
LABEL_29:
  v13 = 0;
  if ( a8 )
  {
    *(_QWORD *)(a8 + 32) = v20;
    *(_DWORD *)(a8 + 40) = v19;
    *(_BYTE *)(a8 + 80) = v17;
    *(_QWORD *)(a8 + 16) = v23;
    *(_QWORD *)(a8 + 24) = v21;
    *(_QWORD *)(a8 + 64) = v8;
  }
  if ( a6 )
    *a6 = v9;
  if ( a7 )
    *a7 = v17;
  if ( a5 )
    *a5 = v25;
  return v13;
}
