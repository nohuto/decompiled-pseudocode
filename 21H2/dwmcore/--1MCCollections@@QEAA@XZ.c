/*
 * XREFs of ??1MCCollections@@QEAA@XZ @ 0x18027250C
 * Callers:
 *     ??1CManipulationManager@@MEAA@XZ @ 0x1802723BC (--1CManipulationManager@@MEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EA9A4 (-InternalRelease@-$ComPtr@VCVector3Force@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall MCCollections::~MCCollections(MCCollections *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  int v5; // edi
  void *v6; // rcx
  int v7; // edi
  void *v8; // rcx

  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    DefaultHeap::Free(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    DefaultHeap::Free(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    v5 = 0;
    if ( *((int *)this + 8) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)(*((_QWORD *)this + 3) + 8LL * v5++));
      while ( v5 < *((_DWORD *)this + 8) );
      v4 = (void *)*((_QWORD *)this + 3);
    }
    DefaultHeap::Free(v4);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  v6 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    v7 = 0;
    if ( *((int *)this + 4) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<CVector3Force>::InternalRelease((__int64 *)(*((_QWORD *)this + 1) + 8LL * v7++));
      while ( v7 < *((_DWORD *)this + 4) );
      v6 = *(void **)this;
    }
    DefaultHeap::Free(v6);
    *(_QWORD *)this = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 1);
  if ( v8 )
  {
    DefaultHeap::Free(v8);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
