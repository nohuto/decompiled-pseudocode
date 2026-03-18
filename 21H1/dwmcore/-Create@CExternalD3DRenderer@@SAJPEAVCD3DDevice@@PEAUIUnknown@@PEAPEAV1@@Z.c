/*
 * XREFs of ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x180239AD8
 * Callers:
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x18016C934 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C9A60 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0CExternalD3DRenderer@@AEAA@XZ @ 0x180239A28 (--0CExternalD3DRenderer@@AEAA@XZ.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023BE9C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CExternalD3DRenderer::Create(
        struct CD3DDevice *a1,
        struct IUnknown *a2,
        struct CExternalD3DRenderer **a3)
{
  CExternalD3DRenderer *v6; // rax
  __int64 v7; // rcx
  CExternalD3DRenderer *v8; // rdi
  struct CD3DDevice *v9; // rdx
  struct CD3DDevice **v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // edi

  v6 = (CExternalD3DRenderer *)DefaultHeap::Alloc(0x90uLL);
  if ( v6 )
    v8 = CExternalD3DRenderer::CExternalD3DRenderer(v6);
  else
    v8 = 0LL;
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
    *((_DWORD *)v8 + 20) = 0;
    *((_QWORD *)v8 + 2) = (char *)a1 + 1136;
    v9 = (CExternalD3DRenderer *)((char *)v8 + 40);
    *((_BYTE *)v8 + 86) = 1;
    v10 = (struct CD3DDevice **)*((_QWORD *)a1 + 147);
    if ( *v10 != (struct CD3DDevice *)((char *)a1 + 1168) )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)a1 + 1168;
    *((_QWORD *)v8 + 6) = v10;
    *v10 = v9;
    *((_QWORD *)a1 + 147) = v9;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v8 + 3) + 24LL))((__int64)v8 + 24) )
      *((_BYTE *)v8 + 85) = 1;
    if ( *((_BYTE *)v8 + 84) )
    {
      *((_BYTE *)v8 + 84) = 1;
      ++*((_DWORD *)a1 + 302);
      if ( *((_BYTE *)v8 + 85) )
        CD2DContext::AddHwProtectedResource((CD2DContext *)(*((_QWORD *)a1 + 152) + 16LL));
    }
    *((_DWORD *)a1 + 296) += *((_DWORD *)v8 + 20);
    v11 = *((_DWORD *)a1 + 296);
    if ( *((_DWORD *)a1 + 297) < v11 )
      *((_DWORD *)a1 + 297) = v11;
    v12 = *((_QWORD *)v8 + 14);
    *((_QWORD *)v8 + 14) = a2;
    if ( a2 )
      ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *a3 = v8;
    return 0;
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x12u, 0LL);
  }
  return v13;
}
