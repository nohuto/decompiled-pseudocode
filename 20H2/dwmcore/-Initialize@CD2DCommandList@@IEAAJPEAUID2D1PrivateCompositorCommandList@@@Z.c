/*
 * XREFs of ?Initialize@CD2DCommandList@@IEAAJPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180248940
 * Callers:
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x180248870 (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802384DC (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1802487CC (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 */

__int64 __fastcall CD2DCommandList::Initialize(CD2DCommandList *this, struct ID2D1PrivateCompositorCommandList *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 *v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  struct ID2D1PrivateCompositorCommandList *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v12 = 0LL;
  if ( (unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                       (__int64)this + 80,
                       &v12,
                       &v13) )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = (__int64 *)*((_QWORD *)this + 3);
    v7 = (_QWORD *)((char *)this + 40);
    v8 = *v6;
    if ( *(__int64 **)(*v6 + 8) != v6 )
      __fastfail(3u);
    *v7 = v8;
    *((_QWORD *)this + 6) = v6;
    *(_QWORD *)(v8 + 8) = v7;
    *v6 = (__int64)v7;
    v9 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 32) = 1;
    v10 = (char *)this + *(int *)(v9 + 8) + 16;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v10 + 24LL))(v10) )
      *((_BYTE *)this + 34) = 1;
    if ( *((_BYTE *)this + 33) )
    {
      ++*((_DWORD *)v6 + 4);
      if ( *((_BYTE *)this + 34) )
        CD2DContext::AddHwProtectedResource((CD2DContext *)v6[3]);
    }
    return 0;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x21u, 0LL);
  }
  return v5;
}
