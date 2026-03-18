/*
 * XREFs of ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C009A8B4
 * Callers:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C009A87C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D06F0 (--_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0C00 (--_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0C50 (--_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0DC0 (--_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0E20 (--_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray(
        DirectComposition::CResourceMarshalerArray *this)
{
  unsigned __int64 i; // r8
  __int64 v2; // rdx

  for ( i = 0LL; i < *((_QWORD *)this + 1); --*(_DWORD *)(v2 + 20) )
    v2 = *(_QWORD *)(*(_QWORD *)this + 8 * i++);
}
