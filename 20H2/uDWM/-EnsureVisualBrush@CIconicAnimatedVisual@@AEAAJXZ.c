/*
 * XREFs of ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B8BAC
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B9250 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000DBD8 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800B8AC8 (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureVisualBrush(CIconicAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int Brush; // eax
  __int64 v6; // [rsp+20h] [rbp-28h]

  v2 = CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( !*((_QWORD *)this + 38) )
    {
      Brush = CSecondaryWindowRepresentation::GetBrush(
                *((_QWORD *)this + 36),
                (__int64)this + 304,
                (volatile signed __int32 **)this + 39,
                (CBaseObject **)this + 40,
                v6,
                (CBaseObject **)this + 41,
                (CBaseObject **)this + 42,
                (CBaseObject **)this + 38);
      v3 = Brush;
      if ( Brush < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0x6Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x63u);
  }
  return v3;
}
