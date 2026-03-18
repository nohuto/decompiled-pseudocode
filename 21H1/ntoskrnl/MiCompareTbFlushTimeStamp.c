/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x1403002B4
 * Callers:
 *     MiFlushTbAsNeeded @ 0x140220080 (MiFlushTbAsNeeded.c)
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x14022A1F0 (MmMapViewInSystemCache.c)
 *     MiAttachSession @ 0x1403001B8 (MiAttachSession.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 */

char __fastcall MiCompareTbFlushTimeStamp(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // ebx
  __int64 v7; // r8
  unsigned int v8; // eax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  v5 = a1 & 1;
  while ( 1 )
  {
    _InterlockedOr(v10, 0);
    v7 = (unsigned int)KiTbFlushTimeStamp;
    v8 = v4 & (KiTbFlushTimeStamp - a1);
    if ( v8 > 2 || !v5 && v8 >= 2 )
      return 0;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      break;
    v11 = 0;
    _InterlockedOr(v10, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v11, a2, v7, a4);
    if ( !v5 )
      return 0;
  }
  return 1;
}
