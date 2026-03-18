/*
 * XREFs of MiCompareTbFlushTimeStamp @ 0x1402E9F34
 * Callers:
 *     MmMapViewInSystemCache @ 0x1402983C0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 *     MiFlushTbAsNeeded @ 0x1402B9260 (MiFlushTbAsNeeded.c)
 *     MiAttachSession @ 0x1402E9E38 (MiAttachSession.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
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
