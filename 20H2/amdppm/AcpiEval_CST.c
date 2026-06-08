/*
 * XREFs of AcpiEval_CST @ 0x1C00253C8
 * Callers:
 *     InitAcpi2CStates @ 0x1C0032404 (InitAcpi2CStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C0026EFC (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0027514 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C002854C (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiEval_CST(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  _DWORD *v4; // r14
  int v5; // ebx
  unsigned __int16 v6; // r9
  int v7; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  _WORD *v12; // r15
  int v13; // edx
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  __int64 v22; // [rsp+28h] [rbp-81h]
  int i; // [rsp+40h] [rbp-69h]
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
  v29 = 2;
  v31 = AcpiParseRegister;
  v32 = 1;
  v34 = "StateType";
  v35 = AcpiParseULong;
  v38 = "Latency";
  v42 = "PowerConsumption";
  v36 = 2;
  v37 = 917504;
  v39 = AcpiParseULong;
  v40 = 3;
  v41 = 0x100000;
  v43 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 8u);
  v3 = AcpiEvaluateMethod(a1, 1414742879, 0, (unsigned int)&P, (__int64)&v24);
  v4 = P;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_50;
  *(_QWORD *)(a1 + 264) |= *(_DWORD *)(a1 + 272) & 0x7F070;
  if ( !v24 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_6:
      v5 = -1073741275;
      goto LABEL_50;
    }
    v6 = 10;
LABEL_5:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v6,
      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
    goto LABEL_6;
  }
  if ( !v4[2] )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_6;
    v6 = 11;
    goto LABEL_5;
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
    goto LABEL_50;
  }
  v7 = v4[4];
  if ( !v7 )
  {
    v5 = -1073741823;
    goto LABEL_50;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(20 * v7 + 4), 0x72637250u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_50;
  }
  memset(PoolWithTag, 0, (unsigned int)(20 * v7 + 4));
  v10 = *((unsigned __int16 *)v4 + 7);
  if ( (unsigned __int16)v10 < 4u )
    v10 = 4LL;
  v11 = 0LL;
  v12 = (_WORD *)((char *)v4 + v10 + 16);
  v13 = 0;
  for ( i = 0; ; ++i )
  {
    if ( v12 >= (_WORD *)((char *)v4 + (unsigned int)v4[1]) )
    {
      if ( (_DWORD)v11 )
      {
        *v9 = (unsigned __int8)v11;
        *v27 = v9;
        v9 = 0LL;
      }
      else
      {
        v5 = -1073741823;
      }
      goto LABEL_48;
    }
    if ( (_DWORD)v11 == v7 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0xDu,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
      goto LABEL_44;
    }
    if ( *v12 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v13;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0xEu,
          (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
          v22);
      }
LABEL_44:
      v5 = -1072431096;
      goto LABEL_48;
    }
    v14 = (unsigned __int16)v12[1];
    v26 = 5 * v11;
    v5 = AcpiParseCore((unsigned int)&v28, 4, (int)v12 + 4, v14, (__int64)&v9[5 * v11 + 1], 20, (__int64)"_CST", 0);
    if ( v5 < 0 )
      break;
    v16 = v26;
    v17 = &v9[v26 + 1];
    if ( *v17 != 127 )
    {
      AcpiTranslateAccessSize(v17, v15);
      v16 = v26;
    }
    v18 = (unsigned __int16)v12[1];
    if ( (unsigned __int16)v18 < 4u )
      v18 = 4LL;
    v19 = *(_QWORD *)(a1 + 272);
    v12 = (_WORD *)((char *)v12 + v18 + 4);
    v20 = v9[v16 + 4];
    v13 = i + 1;
    if ( (v19 & 0x1010) == 0 && v20 == 1 || (v19 & 0x2020) == 0 && v20 == 2 || (v19 & 0x4040) == 0 && v20 >= 3u )
      LODWORD(v11) = v11 - 1;
    v11 = (unsigned int)(v11 + 1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v22) = i;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xFu,
      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids,
      v22);
  }
  v5 = -1072431089;
LABEL_48:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_50:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v5 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 8u);
  return (unsigned int)v5;
}
