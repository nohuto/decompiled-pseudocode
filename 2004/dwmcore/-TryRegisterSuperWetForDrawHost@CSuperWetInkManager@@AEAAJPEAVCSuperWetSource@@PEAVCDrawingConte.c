/*
 * XREFs of ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180197244
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801971AC (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@$$V@?$vector@UVailSuperWetStroke@CSuperWetInkManager@@V?$allocator@UVailSuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAAAEAUVailSuperWetStroke@CSuperWetInkManager@@XZ @ 0x180196040 (--$emplace_back@$$V@-$vector@UVailSuperWetStroke@CSuperWetInkManager@@V-$allocator@UVailSuperWet.c)
 *     ?RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z @ 0x180196B7C (-RegisterStrokeOnHost@CSuperWetInkManager@@AEAAJPEAUVailSuperWetStroke@1@PEA_N@Z.c)
 *     TryFillRenderState @ 0x18019707C (TryFillRenderState.c)
 */

__int64 __fastcall CSuperWetInkManager::TryRegisterSuperWetForDrawHost(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2,
        struct CDrawingContext *a3,
        unsigned __int8 a4,
        bool *a5)
{
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 v8; // rbp
  __int64 (__fastcall ***v12)(_QWORD); // rcx
  __int64 v13; // rbx
  struct ID3D12Device *v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // eax
  unsigned int v18; // ebx
  _OWORD v20[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5 = (__int64 *)((char *)this + 32);
  v6 = *((_QWORD *)this + 4);
  v8 = *((_QWORD *)this + 5);
  *a5 = 0;
  while ( v6 != v8 )
  {
    if ( *(struct CSuperWetSource **)v6 == a2 )
    {
      v12 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 7);
      if ( *(__int64 (__fastcall ****)(_QWORD))(v6 + 8) == v12 && *(_QWORD *)(v6 + 16) == (**v12)(v12) )
        break;
    }
    v6 += 88LL;
  }
  if ( v6 == *((_QWORD *)this + 5) )
  {
    if ( *v5 != v5[1] )
      return 0LL;
    std::vector<CSuperWetInkManager::VailSuperWetStroke>::emplace_back<>(v5);
    v13 = *((_QWORD *)this + 5);
    *(_QWORD *)(v13 - 88) = a2;
    *(_QWORD *)(v13 - 80) = *((_QWORD *)this + 7);
    *(_QWORD *)(v13 - 72) = (***((__int64 (__fastcall ****)(_QWORD))this + 7))(*((_QWORD *)this + 7));
    v6 = *((_QWORD *)this + 5) - 88LL;
  }
  if ( TryFillRenderState(a3, a4, (__int64)v20) )
  {
    v15 = v20[1];
    *(_OWORD *)(v6 + 24) = v20[0];
    v16 = v20[2];
    *(_OWORD *)(v6 + 40) = v15;
    *(_QWORD *)&v15 = v21;
    *(_OWORD *)(v6 + 56) = v16;
    *(_QWORD *)(v6 + 72) = v15;
    v17 = CSuperWetInkManager::RegisterStrokeOnHost(v14, (struct CSuperWetInkManager::VailSuperWetStroke *)v6, a5);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x241,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\superwetinkmanager.cpp",
        (const char *)(unsigned int)v17);
      return v18;
    }
  }
  return 0LL;
}
