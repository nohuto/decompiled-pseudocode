/*
 * XREFs of RtlXSaveS @ 0x14034EE2C
 * Callers:
 *     KeContextFromKframes @ 0x1402E6110 (KeContextFromKframes.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14034EC5C (KeSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x140514A88 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x1406AD1DC (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14034EE60 (RtlXSave.c)
 *     XSaveSHelper @ 0x140400050 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXSave(a1, a2);
}
