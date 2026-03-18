/*
 * XREFs of ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18024C290
 * Callers:
 *     ?CreateLegacyCommandList@CD2DContext@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18023C370 (-CreateLegacyCommandList@CD2DContext@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0CD2DCommandList@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18024C054 (--0CD2DCommandList@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Initialize@CD2DCommandList@@IEAAJPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18024C360 (-Initialize@CD2DCommandList@@IEAAJPEAUID2D1PrivateCompositorCommandList@@@Z.c)
 */

__int64 __fastcall CD2DCommandList::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorCommandList *a2,
        struct CD2DCommandList **a3)
{
  CD2DCommandList *v6; // rax
  __int64 v7; // rcx
  CD2DCommandList *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx

  *a3 = 0LL;
  v6 = (CD2DCommandList *)operator new(0x90uLL);
  if ( v6 )
    v8 = CD2DCommandList::CD2DCommandList(v6, a1);
  else
    v8 = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(CD2DCommandList *))(*(_QWORD *)v8 + 8LL))(v8);
    v10 = CD2DCommandList::Initialize(v8, a2);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x16u, 0LL);
      (*(void (__fastcall **)(CD2DCommandList *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x13u, 0LL);
  }
  return v9;
}
