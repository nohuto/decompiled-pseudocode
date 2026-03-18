/*
 * XREFs of RtlpLockAtomTable @ 0x140628BC4
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140233C50 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x1402E12E0 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x140628770 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140628980 (RtlQueryAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14068CEA0 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14068CFE0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406D2830 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140915900 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140915A08 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
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
