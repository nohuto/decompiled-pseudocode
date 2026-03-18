/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x1802B34D8
 * Callers:
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x1802B3650 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 *     ??1CD3DVidMemOnlyTexture@@MEAA@XZ @ 0x1802B3B44 (--1CD3DVidMemOnlyTexture@@MEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x18028C108 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  __int64 v2; // rdx
  void *v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &CD3DTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CD3DTexture::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 224;
  v3 = (void *)*((_QWORD *)this + 21);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 40);
    if ( v4 )
    {
      do
      {
        ReleaseInterfaceNoNULL<CD3DSurface>(*(_QWORD *)(*((_QWORD *)this + 21)
                                                      + 8LL * (unsigned int)--*((_DWORD *)this + 40)));
        v4 = *((_DWORD *)this + 40);
      }
      while ( v4 );
      v3 = (void *)*((_QWORD *)this + 21);
    }
    *((_DWORD *)this + 40) = v4 - 1;
    DefaultHeap::Free(v3);
  }
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 22);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 24);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 23);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 25);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 26);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  CD3DResource::~CD3DResource(this);
}
