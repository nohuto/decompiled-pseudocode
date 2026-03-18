/*
 * XREFs of ??1MCCollections@@QEAA@XZ @ 0x18021E9E4
 * Callers:
 *     ??1CManipulationManager@@MEAA@XZ @ 0x18021E8B4 (--1CManipulationManager@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
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
    operator delete(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    operator delete(v3);
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
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(*((_QWORD *)this + 3) + 8LL * v5++));
      while ( v5 < *((_DWORD *)this + 8) );
      v4 = (void *)*((_QWORD *)this + 3);
    }
    operator delete(v4);
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
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(*((_QWORD *)this + 1) + 8LL * v7++));
      while ( v7 < *((_DWORD *)this + 4) );
      v6 = *(void **)this;
    }
    operator delete(v6);
    *(_QWORD *)this = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 1);
  if ( v8 )
  {
    operator delete(v8);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
}
