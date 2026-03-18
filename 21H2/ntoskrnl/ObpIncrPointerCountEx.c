/*
 * XREFs of ObpIncrPointerCountEx @ 0x1402F3424
 * Callers:
 *     ObFastReplaceObject @ 0x140276A48 (ObFastReplaceObject.c)
 *     ObpFastReplenishReference @ 0x1402F339C (ObpFastReplenishReference.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyPageAccessLog @ 0x140334400 (MiEmptyPageAccessLog.c)
 *     ObInitializeFastReference @ 0x14070F2D8 (ObInitializeFastReference.c)
 *     ObReferenceFileObjectForWrite @ 0x14071E230 (ObReferenceFileObjectForWrite.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ObpIncrPointerCountEx(volatile signed __int64 *a1, int a2)
{
  __int64 v2; // rax

  v2 = _InterlockedExchangeAdd64(a1, a2);
  if ( v2 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, a2 + v2);
  return a2 + v2;
}
