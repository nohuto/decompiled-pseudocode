/*
 * XREFs of ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C001F95C
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C019A588 (--1DXGPROCESS@@MEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseDwmProcessReference(DXGSESSIONDATA *this)
{
  void *v2; // rcx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (DXGSESSIONDATA *)((char *)this + 18664), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  v2 = (void *)*((_QWORD *)this + 2339);
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *((_QWORD *)this + 2339) = 0LL;
  }
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3);
}
