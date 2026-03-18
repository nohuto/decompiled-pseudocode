/*
 * XREFs of MiLockHotPatchUndoPages @ 0x1408CDA74
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x1408CFD88 (MiPrepareDriverForHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408D0EE0 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     RtlDetermineHotPatchUndoExtent @ 0x14091D670 (RtlDetermineHotPatchUndoExtent.c)
 */

__int64 __fastcall MiLockHotPatchUndoPages(__int64 *a1, int a2)
{
  char *AnyMultiplexedVm; // rsi
  int i; // ebx
  char v6; // dl
  __int64 result; // rax
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v8 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  for ( i = 0; (unsigned __int8)RtlDetermineHotPatchUndoExtent(a2, 1, i, (unsigned int)&v9, (__int64)&v8); ++i )
  {
    result = MiLockDriverPageRange(a1, (__int64)AnyMultiplexedVm, v9, v8, v6, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
