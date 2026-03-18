/*
 * XREFs of RtlXSaveS @ 0x14031137C
 * Callers:
 *     KeSaveExtendedAndSupervisorState @ 0x1403111AC (KeSaveExtendedAndSupervisorState.c)
 *     KeContextFromKframes @ 0x14032B240 (KeContextFromKframes.c)
 *     KeSaveSupervisorState @ 0x140514438 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x1406F207C (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x1403113B0 (RtlXSave.c)
 *     XSaveSHelper @ 0x1403FEDC0 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXSave(a1, a2);
}
