/*
 * XREFs of ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x18006EDA4
 * Callers:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180049824 (--1CBaseExpression@@UEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x18006FA04 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CBaseExpression *,0>::operator[](_QWORD *a1, unsigned int a2)
{
  return *a1 + 8LL * a2;
}
