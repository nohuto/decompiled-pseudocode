/*
 * XREFs of KxNmiInterrupt @ 0x14042D380
 * Callers:
 *     KiNmiInterruptStart @ 0x14042CF40 (KiNmiInterruptStart.c)
 * Callees:
 *     KiSaveProcessorState @ 0x14029AEF0 (KiSaveProcessorState.c)
 *     KiProcessNMI @ 0x14029B9A0 (KiProcessNMI.c)
 */

__int64 __fastcall KxNmiInterrupt()
{
  __int64 v0; // rbp
  _BYTE v2[48]; // [rsp+0h] [rbp-138h] BYREF

  if ( __readgsdword(0x2F08u) != 5 )
    KiSaveProcessorState(v0 - 128, (__int64)v2);
  return KiProcessNMI(v0 - 128, v2);
}
