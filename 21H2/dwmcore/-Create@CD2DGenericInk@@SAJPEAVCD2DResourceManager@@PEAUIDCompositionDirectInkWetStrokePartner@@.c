/*
 * XREFs of ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x18028D718
 * Callers:
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x180277BF0 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180277788 (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ??0CD2DGenericInk@@AEAA@PEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18028D618 (--0CD2DGenericInk@@AEAA@PEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@@Z.c)
 */

__int64 __fastcall CD2DGenericInk::Create(
        struct CD2DResourceManager *a1,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        struct CD2DGenericInk **a3)
{
  CD2DGenericInk *v6; // rax
  __int64 v7; // rcx
  CD2DGenericInk *v8; // rax
  CD2DGenericInk *v9; // rbx
  __int64 *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  char *v14; // rcx
  unsigned int v15; // edi

  *a3 = 0LL;
  v6 = (CD2DGenericInk *)operator new(0x80uLL);
  if ( v6 && (v8 = CD2DGenericInk::CD2DGenericInk(v6, a1, a2), (v9 = v8) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CD2DGenericInk *)((char *)v8 + 8));
    v10 = (__int64 *)*((_QWORD *)v9 + 3);
    v11 = (_QWORD *)((char *)v9 + 40);
    v12 = *v10;
    if ( *(__int64 **)(*v10 + 8) != v10 )
      __fastfail(3u);
    *v11 = v12;
    *((_QWORD *)v9 + 6) = v10;
    *(_QWORD *)(v12 + 8) = v11;
    *v10 = (__int64)v11;
    v13 = *((_QWORD *)v9 + 2);
    *((_BYTE *)v9 + 32) = 1;
    v14 = (char *)v9 + *(int *)(v13 + 8) + 16;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v14 + 24LL))(v14) )
      *((_BYTE *)v9 + 34) = 1;
    if ( *((_BYTE *)v9 + 33) )
    {
      ++*((_DWORD *)v10 + 4);
      if ( *((_BYTE *)v9 + 34) )
        CD2DContext::AddHwProtectedResource((CD2DContext *)v10[3]);
    }
    v15 = 0;
    *a3 = v9;
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x15u);
  }
  return v15;
}
