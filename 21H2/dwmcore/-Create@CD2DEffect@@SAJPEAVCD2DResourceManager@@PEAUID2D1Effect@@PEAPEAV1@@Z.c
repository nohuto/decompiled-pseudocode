/*
 * XREFs of ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x18028DBAC
 * Callers:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180277950 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18028DA54 (--0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z @ 0x18028DC8C (-Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z.c)
 */

__int64 __fastcall CD2DEffect::Create(struct CD2DResourceManager *a1, struct ID2D1Effect *a2, struct CD2DEffect **a3)
{
  CD2DEffect *v6; // rax
  __int64 v7; // rcx
  CD2DEffect *v8; // rax
  CD2DEffect *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi

  *a3 = 0LL;
  v6 = (CD2DEffect *)operator new(0x80uLL);
  if ( v6 && (v8 = CD2DEffect::CD2DEffect(v6, a1), (v9 = v8) != 0LL) )
  {
    (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = CD2DEffect::Initialize(v9, a2);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x18u);
      (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    else
    {
      *a3 = v9;
    }
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x15u);
  }
  return v12;
}
