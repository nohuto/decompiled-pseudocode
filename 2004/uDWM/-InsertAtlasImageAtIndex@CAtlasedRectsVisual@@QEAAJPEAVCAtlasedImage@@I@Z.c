/*
 * XREFs of ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180015AE8
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180014D70 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024BA4 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x18009AFD0 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x1800180DC (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAtlasImageAtIndex(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CAtlasedImage *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v4 = DynArray<CAtlasedImage *,0>::InsertAt((char *)this + 240, &v7, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x4Du);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    *((_QWORD *)v7 + 10) = this;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
  }
  return v5;
}
