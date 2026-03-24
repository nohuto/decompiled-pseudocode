/*
 * XREFs of MiDeleteCloneZombies @ 0x1402C915C
 * Callers:
 *     MiInsertClone @ 0x14055B274 (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D93B4 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14055A0C0 (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
