/*
 * XREFs of KiUpdateProcessorCount @ 0x14099F584
 * Callers:
 *     KiUpdateNumberProcessorsIpi @ 0x1409AF630 (KiUpdateNumberProcessorsIpi.c)
 *     KeStartAllProcessors @ 0x140A4D568 (KeStartAllProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140229380 (KeAddProcessorAffinityEx.c)
 *     KiGetCurrentGroupCount @ 0x1402D3FA8 (KiGetCurrentGroupCount.c)
 */

char __fastcall KiUpdateProcessorCount(__int64 a1, int a2)
{
  int v3; // ecx
  volatile CCHAR v4; // al
  char result; // al

  KiActiveGroups = KiGetCurrentGroupCount();
  _disable();
  LODWORD(KeNumberProcessors_0) = KeNumberProcessors_0 + 1;
  KeAddProcessorAffinityEx(KeActiveProcessors, v3);
  _enable();
  if ( !a2 )
  {
    v4 = KeNumberProcessorsGroup0[0];
    KeNumberProcessorsGroup0[0] = v4 + 1;
  }
  ++MEMORY[0xFFFFF780000003C0];
  ++MEMORY[0xFFFFF7800000036A];
  result = KiActiveGroups;
  MEMORY[0xFFFFF780000003C4] = KiActiveGroups;
  return result;
}
