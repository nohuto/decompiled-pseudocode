/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14024A35C
 * Callers:
 *     MiDoStackCopy @ 0x140200230 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x1402003C0 (MiJumpStackTarget.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x14024A2B8 (MiCanStealKernelStack.c)
 *     MiPfnsWorthTrying @ 0x140278460 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfn @ 0x1402B1E40 (MiIdentifyPfn.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140589B90 (MiInitializeLargeMdlLeafPfns.c)
 *     MiGetPfnPidSafe @ 0x14058CAA0 (MiGetPfnPidSafe.c)
 *     MiDeleteSubsectionLargePages @ 0x1405AED7C (MiDeleteSubsectionLargePages.c)
 *     MiFreeLargePages @ 0x1405C1CE0 (MiFreeLargePages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafPfnBuddy(_QWORD *a1)
{
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    return 0LL;
}
