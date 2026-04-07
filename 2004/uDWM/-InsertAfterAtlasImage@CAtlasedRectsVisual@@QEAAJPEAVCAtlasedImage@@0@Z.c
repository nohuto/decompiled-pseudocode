/*
 * XREFs of ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x180004DE4
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180004B08 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x1800180DC (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InsertAfterAtlasImage(
        CAtlasedRectsVisual *this,
        struct CAtlasedImage *a2,
        struct CAtlasedImage *a3)
{
  __int64 v5; // r8
  unsigned int v6; // r9d
  unsigned int v7; // eax
  struct CAtlasedImage **i; // rcx
  int v9; // eax
  int v10; // ebx
  struct CAtlasedImage *v12; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 66);
    v7 = 0;
    for ( i = (struct CAtlasedImage **)*((_QWORD *)this + 30); v7 < v6; ++i )
    {
      if ( a3 == *i )
        break;
      ++v7;
    }
    if ( v7 == v6 )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
      return (unsigned int)v10;
    }
    v5 = v7 + 1;
  }
  v12 = a2;
  v9 = DynArray<CAtlasedImage *,0>::InsertAt((char *)this + 240, &v12, v5);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x4Du);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    *((_QWORD *)v12 + 10) = this;
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 0x2000LL);
  }
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x40u);
  return (unsigned int)v10;
}
