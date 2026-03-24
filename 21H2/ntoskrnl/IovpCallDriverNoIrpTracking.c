/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x1409C5484
 * Callers:
 *     IovCallDriver @ 0x1409C4CB4 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x14036E384 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140507FC0 (IopPerfCallDriver.c)
 *     VfAfterCallDriver @ 0x1409D0E84 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409D1078 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(PADAPTER_OBJECT DmaAdapter, ULONG_PTR a2, __int64 a3)
{
  unsigned int v5; // esi
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v5 = VfBeforeCallDriver(DmaAdapter, a2, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v6 = IopPerfCallDriver(DmaAdapter, a2);
  else
    v6 = IopfCallDriver((__int64)DmaAdapter, a2);
  LODWORD(v8) = v6;
  VfAfterCallDriver(0LL, &v8, v5);
  return (unsigned int)v8;
}
