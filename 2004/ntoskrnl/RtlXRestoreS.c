/*
 * XREFs of RtlXRestoreS @ 0x14037F8E8
 * Callers:
 *     KxContextToKframes @ 0x1402F9670 (KxContextToKframes.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140350C48 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x1405149F0 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x1406AC55C (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x140350D6C (RtlXRestore.c)
 *     XRestoreSHelper @ 0x140400070 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
