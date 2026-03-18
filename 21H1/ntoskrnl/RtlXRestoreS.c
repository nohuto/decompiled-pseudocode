/*
 * XREFs of RtlXRestoreS @ 0x14037EEF8
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x140312D98 (KeRestoreExtendedAndSupervisorState.c)
 *     KxContextToKframes @ 0x140355650 (KxContextToKframes.c)
 *     KeRestoreSupervisorState @ 0x1405143A0 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x1406F13FC (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x140312EBC (RtlXRestore.c)
 *     XRestoreSHelper @ 0x1403FEDE0 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
