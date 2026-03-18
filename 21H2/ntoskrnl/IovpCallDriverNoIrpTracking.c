/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x140A80ACC
 * Callers:
 *     IovCallDriver @ 0x140A802F0 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1403B51C4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14055969C (IopPerfCallDriver.c)
 *     VfAfterCallDriver @ 0x140A8CA78 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x140A8CC6C (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(struct _DEVICE_OBJECT *Object, IRP *a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // r8
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v5 = VfBeforeCallDriver(Object, a2, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v7 = IopPerfCallDriver(Object, a2, v6);
  else
    v7 = IopfCallDriver(Object, a2);
  LODWORD(v9) = v7;
  VfAfterCallDriver(0LL, &v9, v5);
  return (unsigned int)v9;
}
