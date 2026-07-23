/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x14022E74C
 * Callers:
 *     MiAttachSession @ 0x14022E650 (MiAttachSession.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x14031D250 (MiObtainSystemCacheView.c)
 *     MiFlushTbAsNeeded @ 0x140340D60 (MiFlushTbAsNeeded.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1, int a2)
{
  int v3; // ebx
  unsigned int v5; // eax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 & 1;
  while ( 1 )
  {
    _InterlockedOr(v7, 0);
    v5 = a2 & (KiTbFlushTimeStamp - a1);
    if ( v5 > 2 || !v3 && v5 >= 2 )
      return 0;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      break;
    v8 = 0;
    _InterlockedOr(v7, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v8);
    if ( !v3 )
      return 0;
  }
  return 1;
}
