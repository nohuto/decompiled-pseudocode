/*
 * XREFs of ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C005AB94
 * Callers:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C005AB5C (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CE370 (--_ECAnimationTriggerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CE880 (--_ECParticleEmitterVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CE8D0 (--_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CEA40 (--_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CEAA0 (--_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
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
