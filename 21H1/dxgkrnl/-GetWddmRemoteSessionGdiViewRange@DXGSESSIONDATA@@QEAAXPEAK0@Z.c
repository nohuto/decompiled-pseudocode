/*
 * XREFs of ?GetWddmRemoteSessionGdiViewRange@DXGSESSIONDATA@@QEAAXPEAK0@Z @ 0x1C029A2F8
 * Callers:
 *     DxgkGetWddmRemoteSessionGdiViewRange @ 0x1C029B690 (DxgkGetWddmRemoteSessionGdiViewRange.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGSESSIONDATA::GetWddmRemoteSessionGdiViewRange(
        DXGSESSIONDATA *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v6; // rdx
  int v7; // eax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONDATA *)((char *)this + 19048), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( *((_DWORD *)this + 4772) )
  {
    *a2 = **((_DWORD **)this + 2388);
    v7 = *(_DWORD *)(*((_QWORD *)this + 2388) + 4LL * (unsigned int)(*((_DWORD *)this + 4772) - 1));
    *((_DWORD *)this + 4775) = v7;
  }
  else
  {
    *a2 = *((_DWORD *)this + 4775);
    v7 = *((_DWORD *)this + 4775) - 1;
  }
  *a3 = v7;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v6);
}
