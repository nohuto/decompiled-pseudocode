/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x180044510
 * Callers:
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x1800435B4 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x1800441F0 (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSMESH@@PEBXI.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CAtlasedRectsMesh::UnRegisterNotifiers(CAtlasedRectsMesh *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
  {
    DefaultHeap::Free(v2);
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 18) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    DefaultHeap::Free(v3);
    *((_QWORD *)this + 12) = 0LL;
    *((_DWORD *)this + 22) = 0;
  }
  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    DefaultHeap::Free(v4);
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 26) = 0;
  }
}
