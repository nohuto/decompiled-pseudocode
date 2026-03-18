/*
 * XREFs of MiDeleteCloneZombies @ 0x140327EFC
 * Callers:
 *     MiInsertClone @ 0x1405597A4 (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408DBBF4 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405585F0 (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneZombies(__int64 a1, int a2)
{
  __int64 v3; // rbp
  KIRQL v4; // si
  LONG *SharedVm; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1680) + 368LL) )
  {
    v3 = a1 + 1664;
    if ( a2 )
    {
      v4 = 17;
    }
    else
    {
      SharedVm = MiGetSharedVm(a1 + 1664);
      v4 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    v6 = (_QWORD *)MiDeleteDeferredCloneDescriptors(a1);
    if ( v4 != 17 )
      MiUnlockWorkingSetExclusive(v3, v4);
    if ( v6 )
    {
      do
      {
        v7 = (_QWORD *)*v6;
        ExFreePoolWithTag(v6, 0);
        v6 = v7;
      }
      while ( v7 );
    }
  }
}
