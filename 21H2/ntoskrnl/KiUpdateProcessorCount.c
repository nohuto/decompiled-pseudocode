/*
 * XREFs of KiUpdateProcessorCount @ 0x140A59C88
 * Callers:
 *     KiUpdateNumberProcessorsIpi @ 0x140A69710 (KiUpdateNumberProcessorsIpi.c)
 *     KeStartAllProcessors @ 0x140B03C68 (KeStartAllProcessors.c)
 * Callees:
 *     KiGetCurrentGroupCount @ 0x14025E8C8 (KiGetCurrentGroupCount.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 */

char __fastcall KiUpdateProcessorCount(__int64 a1, int a2)
{
  int v3; // ecx
  volatile CCHAR v4; // al
  char result; // al

  KiActiveGroups = KiGetCurrentGroupCount();
  _disable();
  LODWORD(KeNumberProcessors_0) = KeNumberProcessors_0 + 1;
  KeAddProcessorAffinityEx((unsigned __int16 *)KeActiveProcessors, v3);
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
