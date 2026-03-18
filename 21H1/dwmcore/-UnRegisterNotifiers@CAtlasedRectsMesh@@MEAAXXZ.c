/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x18003AA60
 * Callers:
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x1800390E4 (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSMESH@@PEBXI.c)
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x1800C40A4 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 */

void __fastcall CAtlasedRectsMesh::UnRegisterNotifiers(CAtlasedRectsMesh *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 9) = 0LL;
    *((_DWORD *)this + 16) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 20) = 0;
  }
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 13) = 0LL;
    *((_DWORD *)this + 24) = 0;
  }
}
