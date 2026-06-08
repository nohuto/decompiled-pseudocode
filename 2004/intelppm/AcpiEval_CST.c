/*
 * XREFs of AcpiEval_CST @ 0x1C0022ED8
 * Callers:
 *     InitAcpi2CStates @ 0x1C002118C (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000A334 (WPP_RECORDER_SF_d.c)
 *     AcpiEvaluateMethod @ 0x1C0020130 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0023454 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C0023844 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiEval_CST(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // rsi
  int v5; // ebx
  int v6; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rax
  int v10; // edx
  _WORD *v11; // r15
  __int64 v12; // r14
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // r11
  _BYTE *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int8 v19; // al
  unsigned __int16 v21; // r9
  __int64 v22; // [rsp+28h] [rbp-81h]
  int v23; // [rsp+40h] [rbp-69h]
  int v24; // [rsp+44h] [rbp-65h] BYREF
  PVOID P; // [rsp+48h] [rbp-61h] BYREF
  __int64 v26; // [rsp+50h] [rbp-59h]
  _QWORD *v27; // [rsp+58h] [rbp-51h]
  char v28; // [rsp+60h] [rbp-49h] BYREF
  int v29; // [rsp+62h] [rbp-47h]
  const char *v30; // [rsp+68h] [rbp-41h]
  __int64 (__fastcall *v31)(); // [rsp+70h] [rbp-39h]
  char v32; // [rsp+78h] [rbp-31h]
  int v33; // [rsp+7Ah] [rbp-2Fh]
  const char *v34; // [rsp+80h] [rbp-29h]
  __int64 (__fastcall *v35)(); // [rsp+88h] [rbp-21h]
  char v36; // [rsp+90h] [rbp-19h]
  int v37; // [rsp+92h] [rbp-17h]
  const char *v38; // [rsp+98h] [rbp-11h]
  __int64 (__fastcall *v39)(); // [rsp+A0h] [rbp-9h]
  char v40; // [rsp+A8h] [rbp-1h]
  int v41; // [rsp+AAh] [rbp+1h]
  const char *v42; // [rsp+B0h] [rbp+7h]
  __int64 (__fastcall *v43)(); // [rsp+B8h] [rbp+Fh]

  v27 = a2;
  v24 = 0;
  v30 = "Register";
  v28 = 0;
  v33 = 786432;
  v31 = AcpiParseRegister;
  v29 = 2;
  v34 = "StateType";
  v32 = 1;
  v38 = "Latency";
  v35 = AcpiParseULong;
  v42 = "PowerConsumption";
  v36 = 2;
  v37 = 917504;
  v39 = AcpiParseULong;
  v40 = 3;
  v41 = 0x100000;
  v43 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 8u);
  v3 = AcpiEvaluateMethod(a1, 1414742879, 0LL, (unsigned int **)&P, &v24);
  v4 = P;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_25;
  *(_QWORD *)(a1 + 264) |= *(_DWORD *)(a1 + 272) & 0x7F070;
  if ( !v24 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_34:
      v5 = -1073741275;
      goto LABEL_25;
    }
    v21 = 10;
LABEL_33:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v21,
      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
    goto LABEL_34;
  }
  if ( !v4[2] )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v21 = 11;
    goto LABEL_33;
  }
  if ( *((_WORD *)v4 + 6) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xCu,
        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
    v5 = -1072431096;
    goto LABEL_25;
  }
  v6 = v4[4];
  if ( !v6 )
  {
    v5 = -1073741823;
    goto LABEL_25;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(20 * v6 + 4), 0x72637250u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_25;
  }
  memset(PoolWithTag, 0, (unsigned int)(20 * v6 + 4));
  v9 = *((unsigned __int16 *)v4 + 7);
  if ( (unsigned __int16)v9 < 4u )
    v9 = 4LL;
  v10 = 0;
  v11 = (_WORD *)((char *)v4 + v9 + 16);
  v23 = 0;
  v12 = 0LL;
  if ( v11 >= (_WORD *)((char *)v4 + (unsigned int)v4[1]) )
  {
LABEL_30:
    v5 = -1073741823;
    goto LABEL_23;
  }
  do
  {
    if ( (_DWORD)v12 == v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0xDu,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      goto LABEL_55;
    }
    if ( *v11 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v10;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0xEu,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
          v22);
      }
LABEL_55:
      v5 = -1072431096;
      goto LABEL_23;
    }
    v13 = (unsigned __int16)v11[1];
    v26 = 5 * v12;
    v5 = AcpiParseCore((unsigned int)&v28, 4, (int)v11 + 4, v13, (__int64)&v8[5 * v12 + 1], 20, (__int64)"_CST", 0);
    if ( v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v23;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0xFu,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
          v22);
      }
      v5 = -1072431089;
      goto LABEL_23;
    }
    v15 = v26;
    v16 = &v8[v26 + 1];
    if ( *v16 != 127 )
      AcpiTranslateAccessSize(v16, v14);
    v17 = (unsigned __int16)v11[1];
    if ( (unsigned __int16)v17 < 4u )
      v17 = 4LL;
    v18 = *(_QWORD *)(a1 + 272);
    v11 = (_WORD *)((char *)v11 + v17 + 4);
    v19 = v8[v15 + 4];
    v10 = ++v23;
    if ( (v18 & 0x1010) == 0 && v19 == 1 || (v18 & 0x2020) == 0 && v19 == 2 || (v18 & 0x4040) == 0 && v19 >= 3u )
      LODWORD(v12) = v12 - 1;
    v12 = (unsigned int)(v12 + 1);
  }
  while ( v11 < (_WORD *)((char *)v4 + (unsigned int)v4[1]) );
  if ( !(_DWORD)v12 )
    goto LABEL_30;
  *v8 = (unsigned __int8)v12;
  *v27 = v8;
  v8 = 0LL;
LABEL_23:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_25:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v5 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 8u);
  return (unsigned int)v5;
}
