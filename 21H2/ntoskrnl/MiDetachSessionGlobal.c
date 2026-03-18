/*
 * XREFs of MiDetachSessionGlobal @ 0x14021803C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiDetachAndUnlockWorkingSet @ 0x140374238 (MiDetachAndUnlockWorkingSet.c)
 *     MiAttachToSessionForBaseImage @ 0x1405A2D30 (MiAttachToSessionForBaseImage.c)
 *     MiActOnPatchInAllSessions @ 0x140970E00 (MiActOnPatchInAllSessions.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x1409779A4 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiDetachProcessFromSession @ 0x1402180C4 (MiDetachProcessFromSession.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

$CEA84C04E3712D858E5667A507841A2A *__fastcall MiDetachSessionGlobal(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  bool v3; // zf
  $CEA84C04E3712D858E5667A507841A2A *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) |= 0x80u;
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v3 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  result = ($CEA84C04E3712D858E5667A507841A2A *)MiDetachProcessFromSession(a1);
  --CurrentThread->SpecialApcDisable;
  BYTE1(CurrentThread[1].Queue) &= ~0x80u;
  v3 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v3 )
  {
    result = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)result->ApcState.ApcListHead[0].Flink != result )
      return ($CEA84C04E3712D858E5667A507841A2A *)KiCheckForKernelApcDelivery();
  }
  return result;
}
