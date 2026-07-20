/*
 * XREFs of SmpQueryCopyDumpSetting @ 0x14000E8BC
 * Callers:
 *     SmpPagefileInitialize @ 0x1400067F8 (SmpPagefileInitialize.c)
 * Callees:
 *     <none>
 */

bool SmpQueryCopyDumpSetting()
{
  return (SmpSystemWriteConstraintInfo & 4) != 0;
}
