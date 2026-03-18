/*
 * XREFs of ?SetContent@CSpriteVisual@@MEAAJPEAVCContent@@@Z @ 0x1801EF0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A0A50 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisual::SetContent(struct CResource **this, struct CContent *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  if ( !a2 || (*(unsigned __int8 (__fastcall **)(struct CContent *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 14LL) )
  {
    v6 = CVisual::SetContent(this, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x81u, 0LL);
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003303421, 0x7Eu, 0LL);
  }
  return v5;
}
