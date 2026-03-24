/*
 * XREFs of ??$UnRegisterNotifier@PEAVCVisualReference@@@CResource@@QEAAXAEAPEAVCVisualReference@@@Z @ 0x180168E00
 * Callers:
 *     ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x1801BE9E0 (--_GCCursorVisual@@UEAAPEAXI@Z.c)
 *     ??1CParticleEmitterVisual@@UEAA@XZ @ 0x1801DE630 (--1CParticleEmitterVisual@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CResource::UnRegisterNotifier<CVisualReference *>(CResource *a1, struct CResource **a2)
{
  CResource::UnRegisterNotifierInternal(a1, *a2);
  *a2 = 0LL;
}
