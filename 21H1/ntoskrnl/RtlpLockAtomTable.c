/*
 * XREFs of RtlpLockAtomTable @ 0x1406383A4
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x140203018 (RtlDestroyLowBoxAtoms.c)
 *     RtlAddAtomToAtomTableEx @ 0x1402A8F50 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyAtomTable @ 0x1405D5B30 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1405D5C70 (RtlDeleteAtomFromAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x140637F50 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140638160 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406DCC40 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x14090EA20 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x14090EB28 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
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
