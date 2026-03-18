/*
 * XREFs of RtlpLockAtomTable @ 0x140603364
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14024FF20 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140349684 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x140602F10 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140603120 (RtlQueryAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1406F1B30 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406F1C70 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406FFBE0 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x14090FDC0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x14090FEC8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  return 1;
}
