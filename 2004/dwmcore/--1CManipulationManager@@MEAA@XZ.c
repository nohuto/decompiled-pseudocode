/*
 * XREFs of ??1CManipulationManager@@MEAA@XZ @ 0x180220714
 * Callers:
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x1802206C0 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 *     ??_ECManipulationManager@@MEAAPEAXI@Z @ 0x1802209A0 (--_ECManipulationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D0844 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??1?$CQueue@PEAVCResource@@@@QEAA@XZ @ 0x180220628 (--1-$CQueue@PEAVCResource@@@@QEAA@XZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x180220844 (--1MCCollections@@QEAA@XZ.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180220914 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  void *v2; // rcx
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CManipulationManager::`vftable';
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 33);
  v2 = (void *)*((_QWORD *)this + 31);
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)this + 64) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'(*((_QWORD *)this + 31) + 8LL * v3++);
      while ( v3 < *((_DWORD *)this + 64) );
      v2 = (void *)*((_QWORD *)this + 31);
    }
    operator delete(v2);
    *((_QWORD *)this + 31) = 0LL;
  }
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  MCCollections::~MCCollections((CManipulationManager *)((char *)this + 184));
  CQueue<CResource *>::~CQueue<CResource *>((_DWORD *)this + 26);
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
