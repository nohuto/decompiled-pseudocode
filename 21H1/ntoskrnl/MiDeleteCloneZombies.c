/*
 * XREFs of MiDeleteCloneZombies @ 0x1403199AC
 * Callers:
 *     MiInsertClone @ 0x140555784 (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D4A64 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405545D0 (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
