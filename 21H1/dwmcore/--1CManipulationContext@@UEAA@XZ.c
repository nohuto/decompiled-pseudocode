/*
 * XREFs of ??1CManipulationContext@@UEAA@XZ @ 0x1802344A8
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x180234658 (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C93E4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802232E4 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x1802346A4 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall CManipulationContext::~CManipulationContext(CManipulationContext *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edx
  void *v4; // rcx
  int v5; // edi
  void *v6; // rcx
  void *v7; // rcx
  int v8; // edi
  void *v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBase'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 14);
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    v5 = 0;
    if ( *((int *)this + 24) > 0 )
    {
      do
        TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*((_QWORD *)this + 11) + 16LL * v5++), v3);
      while ( v5 < *((_DWORD *)this + 24) );
      v4 = (void *)*((_QWORD *)this + 10);
    }
    operator delete(v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 11);
  if ( v6 )
  {
    operator delete(v6);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
  v7 = (void *)*((_QWORD *)this + 7);
  if ( v7 )
  {
    v8 = 0;
    if ( *((int *)this + 18) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'((__int64 *)(*((_QWORD *)this + 8) + 8LL * v8++));
      while ( v8 < *((_DWORD *)this + 18) );
      v7 = (void *)*((_QWORD *)this + 7);
    }
    operator delete(v7);
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    operator delete(v9);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
}
