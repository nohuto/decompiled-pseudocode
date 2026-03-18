/*
 * XREFs of RtlXRestoreS @ 0x140381618
 * Callers:
 *     KxContextToKframes @ 0x1402D6B70 (KxContextToKframes.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140321428 (KeRestoreExtendedAndSupervisorState.c)
 *     KeRestoreSupervisorState @ 0x140518320 (KeRestoreSupervisorState.c)
 *     PspSetContext @ 0x140687C78 (PspSetContext.c)
 * Callees:
 *     RtlXRestore @ 0x14032154C (RtlXRestore.c)
 *     XRestoreSHelper @ 0x140406470 (XRestoreSHelper.c)
 */

unsigned __int64 __fastcall RtlXRestoreS(__int64 a1, unsigned __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XRestoreSHelper(a1, a2 & *(_QWORD *)(a1 + 520));
  else
    return RtlXRestore(a1, a2);
}
