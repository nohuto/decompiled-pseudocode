/*
 * XREFs of AcpiEval_LPI @ 0x1C00244E0
 * Callers:
 *     InitAcpiLpiStates @ 0x1C0034CA0 (InitAcpiLpiStates.c)
 * Callees:
 *     AcpiEvaluateMethod @ 0x1C0025BBC (AcpiEvaluateMethod.c)
 *     AcpiParseLpiObject @ 0x1C002647C (AcpiParseLpiObject.c)
 */

__int64 __fastcall AcpiEval_LPI(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x80000u);
  v4 = AcpiEvaluateMethod(a1, 1229999199, 0, (unsigned int)&P, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 264) |= *(_QWORD *)(a1 + 272) & 0xE0000000000LL;
    v4 = AcpiParseLpiObject(P, v5, 0LL, a2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x80000u);
  return (unsigned int)v4;
}
