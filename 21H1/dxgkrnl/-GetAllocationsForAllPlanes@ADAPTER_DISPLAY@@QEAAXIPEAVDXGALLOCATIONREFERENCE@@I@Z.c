/*
 * XREFs of ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C020E77C
 * Callers:
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C004952C (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationsForAllPlanesUnsafe@DISPLAY_SOURCE@@QEAAXPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C020E7FC (-GetAllocationsForAllPlanesUnsafe@DISPLAY_SOURCE@@QEAAXPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::GetAllocationsForAllPlanes(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct DXGALLOCATIONREFERENCE *a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (ADAPTER_DISPLAY *)((char *)this + 520), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  DISPLAY_SOURCE::GetAllocationsForAllPlanesUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3968 * v4), a3, a4);
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v8);
}
