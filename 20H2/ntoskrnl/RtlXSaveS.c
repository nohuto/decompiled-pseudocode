/*
 * XREFs of RtlXSaveS @ 0x14031FB8C
 * Callers:
 *     KeContextFromKframes @ 0x1402E7EF0 (KeContextFromKframes.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14031F9BC (KeSaveExtendedAndSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405183B8 (KeSaveSupervisorState.c)
 *     PspGetContext @ 0x1406878AC (PspGetContext.c)
 * Callees:
 *     RtlXSave @ 0x14031FBC0 (RtlXSave.c)
 *     XSaveSHelper @ 0x140406450 (XSaveSHelper.c)
 */

__int64 __fastcall RtlXSaveS(__int64 a1, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXSave(a1, a2);
}
