/*
 * XREFs of ?EnsureAdapterInfo@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800340BC
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x180033F2C (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18003422C (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ?GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x1800343C4 (-GetDXGIFactory@CDisplayManager@@QEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 *     ?clear@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAXXZ @ 0x1800345D8 (-clear@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAdapterInfo@CGlobalSurfaceMana.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800D7628 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalSurfaceManager::EnsureAdapterInfo(CGlobalSurfaceManager *this)
{
  char *v1; // rsi
  CDisplayManager *v2; // rcx
  int DXGIFactory; // eax
  unsigned int v4; // ecx
  int v5; // edi
  struct IDXGIFactory5 *v6; // rbx
  unsigned int i; // r14d
  struct IDXGIFactory5Vtbl *lpVtbl; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  struct IDXGIFactory5 *v14; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v16; // [rsp+48h] [rbp-C0h]
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  char v18; // [rsp+58h] [rbp-B0h]
  _BYTE v19[296]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[8]; // [rsp+190h] [rbp+88h] BYREF

  v15 = 0LL;
  v1 = (char *)this + 472;
  std::vector<CGlobalSurfaceManager::AdapterInfo>::clear((char *)this + 472);
  v14 = 0LL;
  DXGIFactory = CDisplayManager::GetDXGIFactory(v2, &v14);
  v5 = DXGIFactory;
  if ( DXGIFactory < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, DXGIFactory, 0x18Fu, 0LL);
  }
  else
  {
    v6 = v14;
    for ( i = 0; ; ++i )
    {
      lpVtbl = v6->lpVtbl;
      v17 = 0LL;
      v16 = &v15;
      v18 = 1;
      v5 = ((__int64 (__fastcall *)(struct IDXGIFactory5 *, _QWORD, __int64 *))lpVtbl->EnumAdapters1)(v6, i, &v17);
      if ( v18 )
      {
        v9 = *v16;
        *v16 = v17;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v5 < 0 )
        break;
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 64LL))(v15, v19);
      v5 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x197u, 0LL);
        goto LABEL_13;
      }
      v12 = *((_QWORD *)v1 + 1);
      if ( *((_QWORD *)v1 + 2) == v12 )
        std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_reallocate<_LUID &>(v1, v12, v20);
      else
        std::vector<CGlobalSurfaceManager::AdapterInfo>::_Emplace_back_with_unused_capacity<_LUID &>(v1, v20);
    }
    if ( v5 == -2005270526 )
      v5 = 0;
  }
LABEL_13:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v15);
  return (unsigned int)v5;
}
