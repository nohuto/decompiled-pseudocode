/*
 * XREFs of ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180016490
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180012510 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180016550 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateLayout(CRenderDataVisual *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // ebx

  updated = CVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x53u);
  else
    (*(void (__fastcall **)(CRenderDataVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  return v4;
}
