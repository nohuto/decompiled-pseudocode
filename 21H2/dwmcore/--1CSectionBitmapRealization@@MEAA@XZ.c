/*
 * XREFs of ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800314CC
 * Callers:
 *     ??_GCGDISectionBitmapRealization@@UEAAPEAXI@Z @ 0x180031490 (--_GCGDISectionBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x1802623E0 (--_ECSectionBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??_GCGDISubSectionBitmapRealization@@UEAAPEAXI@Z @ 0x180262DF0 (--_GCGDISubSectionBitmapRealization@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

void __fastcall CSectionBitmapRealization::~CSectionBitmapRealization(CSectionBitmapRealization *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rdi
  HANDLE CurrentProcess; // rax
  void *v8; // rcx
  CRenderTargetBitmap *v9; // rcx

  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 36) = &CGDISectionBitmapRealization::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 38) = &CGDISectionBitmapRealization::`vftable'{for `IPixelColor'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CSectionBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CSectionBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CSectionBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CSectionBitmapRealization::`vftable'{for `CBitmapRealization'};
  v2 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v2 + 12) = v2 - 352;
  v3 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 368;
  v4 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 384;
  v5 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 408;
  if ( *((_BYTE *)this + 352) )
  {
    v6 = (void *)*((_QWORD *)this + 43);
    if ( v6 )
    {
      CurrentProcess = GetCurrentProcess();
      NtUnmapViewOfSection(CurrentProcess, v6);
      *((_QWORD *)this + 43) = 0LL;
    }
  }
  v8 = (void *)*((_QWORD *)this + 40);
  if ( v8 && *((_BYTE *)this + 352) )
    CloseHandle(v8);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)this + 312);
  v9 = (CRenderTargetBitmap *)*((_QWORD *)this + 32);
  if ( v9 )
    CRenderTargetBitmap::Release(v9);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
