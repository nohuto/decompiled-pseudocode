/*
 * XREFs of ?CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0299F44
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::CommitSessionGdiViewIds(DXGSESSIONDATA *this)
{
  __int64 v2; // rdx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGSESSIONDATA *)((char *)this + 19048), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( *((_QWORD *)this + 2388) )
  {
    *((_DWORD *)this + 4772) += *((_DWORD *)this + 4773);
    *((_DWORD *)this + 4773) = 0;
  }
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4, v2);
  return 0LL;
}
