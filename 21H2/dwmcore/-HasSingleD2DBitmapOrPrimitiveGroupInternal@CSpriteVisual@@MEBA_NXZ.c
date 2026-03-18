/*
 * XREFs of ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CSpriteVisual@@MEBA_NXZ @ 0x1800DD320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x1800B5B8C (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 */

bool __fastcall CSpriteVisual::HasSingleD2DBitmapOrPrimitiveGroupInternal(CSpriteVisual *this)
{
  BOOL v2; // edi
  int v3; // eax
  struct CBrush *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = CVisual::GetContentAsBrushNoRef(this, &v5) != 0;
  v3 = v2 + 1;
  if ( (**((_DWORD **)this + 29) & 0x10000) == 0 )
    v3 = v2;
  return v3 == 1;
}
