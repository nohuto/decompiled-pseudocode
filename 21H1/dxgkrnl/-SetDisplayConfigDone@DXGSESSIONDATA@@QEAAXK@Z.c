/*
 * XREFs of ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C0041E38
 * Callers:
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0152AB0 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0256B4C (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGSESSIONDATA::SetDisplayConfigDone(DXGSESSIONDATA *this, int a2)
{
  __int64 v4; // rdx
  int v5; // eax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGSESSIONDATA *)((char *)this + 18992), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v5 = *((_DWORD *)this + 4758);
  if ( a2 == v5 )
    *((_DWORD *)this + 4759) = v5;
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6, v4);
}
