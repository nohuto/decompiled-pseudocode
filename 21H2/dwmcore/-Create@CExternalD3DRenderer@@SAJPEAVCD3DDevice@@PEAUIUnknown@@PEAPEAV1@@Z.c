/*
 * XREFs of ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x180279608
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801994B0 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180277788 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ??0CExternalD3DRenderer@@AEAA@XZ @ 0x1802794F0 (--0CExternalD3DRenderer@@AEAA@XZ.c)
 *     ??4?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIUnknown@@@Z @ 0x18027954C (--4-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CExternalD3DRenderer::Create(
        struct CD3DDevice *a1,
        struct IUnknown *a2,
        struct CExternalD3DRenderer **a3)
{
  CExternalD3DRenderer *v6; // rax
  __int64 v7; // rcx
  CExternalD3DRenderer *v8; // rax
  struct CExternalD3DRenderer *v9; // rbx
  struct CD3DDevice *v10; // rdx
  struct CD3DDevice **v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ebx

  v6 = (CExternalD3DRenderer *)DefaultHeap::Alloc(0x80uLL);
  if ( v6 && (v8 = CExternalD3DRenderer::CExternalD3DRenderer(v6), (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CExternalD3DRenderer *)((char *)v8 + 16));
    *((_DWORD *)v9 + 16) = 0;
    *((_QWORD *)v9 + 3) = (char *)a1 + 1104;
    *((_BYTE *)v9 + 70) = 1;
    v10 = (struct CExternalD3DRenderer *)((char *)v9 + 32);
    v11 = (struct CD3DDevice **)*((_QWORD *)a1 + 143);
    if ( *v11 != (struct CD3DDevice *)((char *)a1 + 1136) )
      __fastfail(3u);
    *(_QWORD *)v10 = (char *)a1 + 1136;
    *((_QWORD *)v9 + 5) = v11;
    *v11 = v10;
    *((_QWORD *)a1 + 143) = v10;
    if ( (*(unsigned __int8 (__fastcall **)(struct CExternalD3DRenderer *))(*(_QWORD *)v9 + 24LL))(v9) )
      *((_BYTE *)v9 + 69) = 1;
    if ( *((_BYTE *)v9 + 68) )
    {
      *((_BYTE *)v9 + 68) = 1;
      ++*((_DWORD *)a1 + 294);
      if ( *((_BYTE *)v9 + 69) )
        CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)a1 + 148) + 16LL));
    }
    *((_DWORD *)a1 + 288) += *((_DWORD *)v9 + 16);
    v12 = *((_DWORD *)a1 + 288);
    if ( *((_DWORD *)a1 + 289) < v12 )
      *((_DWORD *)a1 + 289) = v12;
    wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::operator=((__int64 *)v9 + 12, (__int64)a2);
    *a3 = v9;
    return 0;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x12u);
  }
  return v13;
}
