/*
 * XREFs of ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001A9C8
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C01164F0 (--1DXGPROCESS@@MEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseDwmProcessReference(DXGSESSIONDATA *this)
{
  __int64 v2; // rdx
  void *v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGSESSIONDATA *)((char *)this + 18648), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v3 = (void *)*((_QWORD *)this + 2336);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)this + 2336) = 0LL;
  }
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4, v2);
}
