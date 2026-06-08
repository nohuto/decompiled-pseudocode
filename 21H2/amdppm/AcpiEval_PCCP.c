/*
 * XREFs of AcpiEval_PCCP @ 0x1C0026DB0
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C0036E6C (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FAC (WPP_RECORDER_SF_.c)
 *     AcpiEvaluateMethod @ 0x1C00283CC (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C00289E4 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiEval_PCCP(__int64 a1, _QWORD *a2)
{
  void *v4; // rbx
  int v5; // edi
  _QWORD *PoolWithTag; // rax
  _DWORD *v7; // r14
  char v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+42h] [rbp-2Eh]
  const char *v11; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v12)(); // [rsp+50h] [rbp-20h]
  char v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ah] [rbp-16h]
  const char *v15; // [rsp+60h] [rbp-10h]
  __int64 (__fastcall *v16)(); // [rsp+68h] [rbp-8h]
  int v17; // [rsp+A0h] [rbp+30h] BYREF
  PVOID P; // [rsp+B0h] [rbp+40h] BYREF

  v13 = 1;
  v17 = 0;
  v11 = "InputBufferOffset";
  v9 = 0;
  v10 = 0;
  v15 = "OutputBufferOffset";
  v12 = AcpiParseULong;
  v4 = 0LL;
  v14 = 0x40000;
  v16 = AcpiParseULong;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x8000u);
  v5 = AcpiEvaluateMethod(a1, 1346585424, 0, (unsigned int)&P, (__int64)&v17);
  if ( v5 < 0 )
    goto LABEL_13;
  *(_QWORD *)(a1 + 264) |= *(_DWORD *)(a1 + 272) & 0x80000000;
  if ( !v17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x2Du,
        (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
    v5 = -1073741275;
    goto LABEL_13;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
LABEL_13:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x8000u);
    v7 = P;
    goto LABEL_14;
  }
  v7 = P;
  *PoolWithTag = 0LL;
  v5 = AcpiParseCore((unsigned int)&v9, 2, (int)v7 + 12, v7[1] - 12, (__int64)PoolWithTag, 8, (__int64)"PCCP", 0);
  if ( v5 >= 0 )
  {
    *a2 = v4;
    v4 = 0LL;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x2Eu,
      (__int64)&WPP_0a302e3fd2f833bdae43f30252de1cf8_Traceguids);
  }
  if ( v5 < 0 )
    goto LABEL_13;
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v5;
}
