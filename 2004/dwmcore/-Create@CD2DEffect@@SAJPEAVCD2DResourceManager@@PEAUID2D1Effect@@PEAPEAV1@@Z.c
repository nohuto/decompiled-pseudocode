/*
 * XREFs of ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x18024B8AC
 * Callers:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180239550 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18024B754 (--0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z @ 0x18024B97C (-Initialize@CD2DEffect@@IEAAJPEAUID2D1Effect@@@Z.c)
 */

__int64 __fastcall CD2DEffect::Create(struct CD2DResourceManager *a1, struct ID2D1Effect *a2, struct CD2DEffect **a3)
{
  CD2DEffect *v6; // rax
  __int64 v7; // rcx
  CD2DEffect *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx

  *a3 = 0LL;
  v6 = (CD2DEffect *)operator new(0x80uLL);
  if ( v6 )
    v8 = CD2DEffect::CD2DEffect(v6, a1);
  else
    v8 = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = CD2DEffect::Initialize(v8, a2);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x18u, 0LL);
      (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v9;
}
