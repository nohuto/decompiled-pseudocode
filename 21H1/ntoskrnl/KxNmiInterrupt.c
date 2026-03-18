/*
 * XREFs of KxNmiInterrupt @ 0x140401400
 * Callers:
 *     KiNmiInterruptStart @ 0x140401040 (KiNmiInterruptStart.c)
 * Callees:
 *     KiProcessNMI @ 0x14050CFB0 (KiProcessNMI.c)
 *     KiSaveProcessorState @ 0x14051F910 (KiSaveProcessorState.c)
 */

__int64 __fastcall KxNmiInterrupt()
{
  __int64 v0; // rbp
  _BYTE v2[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2F08u) != 5 )
    KiSaveProcessorState(v0 - 128, v2);
  return KiProcessNMI(v0 - 128, v2);
}
