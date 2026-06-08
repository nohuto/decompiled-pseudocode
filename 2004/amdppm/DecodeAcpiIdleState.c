/*
 * XREFs of DecodeAcpiIdleState @ 0x1C000C2A4
 * Callers:
 *     RegisterHvLpiStates @ 0x1C0021F5C (RegisterHvLpiStates.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002A44C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     RegisterKernelLpiStates @ 0x1C002EA80 (RegisterKernelLpiStates.c)
 *     DecodeAcpi2CState @ 0x1C0030DC8 (DecodeAcpi2CState.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C00352E0 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0004A40 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     AcpiTranslateAccessSize @ 0x1C002720C (AcpiTranslateAccessSize.c)
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
  unsigned __int16 v16; // r9
  int v17; // edx
  __int64 v18; // xmm1_8
  void (__fastcall __noreturn *v19)(); // rcx
  int v20; // eax
  __int64 (*v21)(); // r8
  int v22; // eax
  __int64 v24; // [rsp+50h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-10h] BYREF
  int v26; // [rsp+68h] [rbp-8h]

  v8 = 0LL;
  v24 = 0LL;
  v9 = 0;
  v12 = a1;
  v13 = -1073741823;
  if ( qword_1C0013540 )
  {
    v13 = qword_1C0013540(a1);
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
      v25 = *(_QWORD *)a2;
      v26 = v20;
      AcpiTranslateAccessSize(&v25, v15);
      v17 = v26;
      v21 = C3IdleCheck;
      v18 = v25;
      v19 = (void (__fastcall __noreturn *)())C3Idle;
      v8 = DecodeRegisterContext;
      v24 = 0xB20000000000000LL;
      LOWORD(v24) = WORD2(v25);
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
        *a5 = v24;
      return v13;
    }
    v22 = *((_DWORD *)a2 + 2);
    v25 = *(_QWORD *)a2;
    v26 = v22;
    AcpiTranslateAccessSize(&v25, v15);
    v17 = v26;
    v19 = (void (__fastcall __noreturn *)())C2Idle;
    v18 = v25;
    v8 = DecodeRegisterContext;
    v24 = 0x420000000000000LL;
    LOWORD(v24) = WORD2(v25);
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
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          v16,
          (__int64)&WPP_9b0ff94dcd5d35c7d1c1dd470390808e_Traceguids,
          v15);
        return v13;
      }
      return v13;
    }
    v17 = *((_DWORD *)a2 + 2);
    v18 = *(_QWORD *)a2;
    v25 = *(_QWORD *)a2;
    if ( HIDWORD(v25) )
    {
      LODWORD(v25) = 134219777;
      v17 = 0;
      v18 = v25;
    }
    v19 = IoHaltC1Idle;
    v24 = 0x10000000000000LL;
    v8 = DecodeRegisterContext;
    LOWORD(v24) = WORD2(v25);
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
