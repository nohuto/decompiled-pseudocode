/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x14099C75C
 * Callers:
 *     PopAdaptiveGetConsoleSessionState @ 0x1407EF258 (PopAdaptiveGetConsoleSessionState.c)
 * Callees:
 *     PopDiagTraceAdaptiveOverrideClear @ 0x140990F10 (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  if ( a1 == 1 )
  {
    if ( a2 != 1 )
      return;
    LOBYTE(PopAdaptiveBootContext) = 0;
  }
  *((_BYTE *)&unk_140C1F3C0 + 24 * a1) = 0;
  PopDiagTraceAdaptiveOverrideClear();
}
