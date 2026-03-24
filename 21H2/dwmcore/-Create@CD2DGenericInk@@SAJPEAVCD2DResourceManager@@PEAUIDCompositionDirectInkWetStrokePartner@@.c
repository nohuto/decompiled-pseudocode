/*
 * XREFs of ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x18024D148
 * Callers:
 *     ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x18023B4D0 (-CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023B18C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ??0CD2DGenericInk@@AEAA@PEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18024D048 (--0CD2DGenericInk@@AEAA@PEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@@Z.c)
 */

__int64 __fastcall CD2DGenericInk::Create(
        struct CD2DResourceManager *a1,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        struct CD2DGenericInk **a3)
{
  CD2DGenericInk *v6; // rax
  __int64 v7; // rcx
  CD2DGenericInk *v8; // rdi
  __int64 *v9; // rbx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rcx
  unsigned int v14; // esi

  *a3 = 0LL;
  v6 = (CD2DGenericInk *)operator new(0x80uLL);
  if ( v6 )
    v8 = CD2DGenericInk::CD2DGenericInk(v6, a1, a2);
  else
    v8 = 0LL;
  if ( v8 )
  {
    CMILCOMBase::InternalAddRef(v8);
    v9 = (__int64 *)*((_QWORD *)v8 + 3);
    v10 = (_QWORD *)((char *)v8 + 40);
    v11 = *v9;
    if ( *(__int64 **)(*v9 + 8) != v9 )
      __fastfail(3u);
    *v10 = v11;
    *((_QWORD *)v8 + 6) = v9;
    *(_QWORD *)(v11 + 8) = v10;
    *v9 = (__int64)v10;
    v12 = *((_QWORD *)v8 + 2);
    *((_BYTE *)v8 + 32) = 1;
    v13 = (char *)v8 + *(int *)(v12 + 8) + 16;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v13 + 24LL))(v13) )
      *((_BYTE *)v8 + 34) = 1;
    if ( *((_BYTE *)v8 + 33) )
    {
      ++*((_DWORD *)v9 + 4);
      if ( *((_BYTE *)v8 + 34) )
        CD2DContext::AddHwProtectedResource((CD2DContext *)v9[3]);
    }
    v14 = 0;
    *a3 = v8;
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x49u, 0LL);
  }
  return v14;
}
