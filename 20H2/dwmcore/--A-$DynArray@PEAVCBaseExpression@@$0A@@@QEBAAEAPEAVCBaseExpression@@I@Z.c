/*
 * XREFs of ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x1801631C4
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180024324 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180070398 (--1CBaseExpression@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CBaseExpression *,0>::operator[](_QWORD *a1, unsigned int a2)
{
  return *a1 + 8LL * a2;
}
