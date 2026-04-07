/*
 * XREFs of ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x180016660
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180016780 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180016924 (-ValidateResources@CText@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::UpdateLayout(CText *this, bool a2)
{
  int updated; // eax
  int v4; // ebx
  int v5; // eax

  updated = CVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x53u);
  else
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1B8u);
  }
  else
  {
    v5 = CText::ValidateResources(this);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1B9u);
  }
  return (unsigned int)v4;
}
