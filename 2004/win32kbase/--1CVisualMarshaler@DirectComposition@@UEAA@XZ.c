/*
 * XREFs of ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C009A87C
 * Callers:
 *     ??_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C003A530 (--_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C004BEB0 (--_GCLayerVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCSuperWetInkVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C009D030 (--_GCSuperWetInkVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C009D140 (--_GCSpriteVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0890 (--_ECCrossChannelChildVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D08D0 (--_GCCursorVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0C00 (--_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0C90 (--_GCShapeVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0DC0 (--_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C009A8B4 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CVisualMarshaler::~CVisualMarshaler(DirectComposition::CVisualMarshaler *this)
{
  __int64 v1; // r9

  *(_QWORD *)this = &DirectComposition::CVisualMarshaler::`vftable';
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CVisualMarshaler *)((char *)this + 320));
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CResourceMarshalerArray *)(v1 + 296));
}
