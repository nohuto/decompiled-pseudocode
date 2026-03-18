/*
 * XREFs of KiUpdateProcessorCount @ 0x1409A1CB0
 * Callers:
 *     KiUpdateNumberProcessorsIpi @ 0x1409B2730 (KiUpdateNumberProcessorsIpi.c)
 *     KeStartAllProcessors @ 0x140A4BFC8 (KeStartAllProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287E00 (KeAddProcessorAffinityEx.c)
 *     KiGetCurrentGroupCount @ 0x140331D08 (KiGetCurrentGroupCount.c)
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
