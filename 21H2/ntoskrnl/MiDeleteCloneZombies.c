/*
 * XREFs of MiDeleteCloneZombies @ 0x14025247C
 * Callers:
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiInsertClone @ 0x1405BB8B4 (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x140980A20 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405BA6F0 (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneZombies(__int64 a1, int a2)
{
  __int64 v3; // rbp
  KIRQL v4; // si
  __int64 SharedVm; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1680) + 352LL) )
  {
    v3 = a1 + 1664;
    if ( a2 )
    {
      v4 = 17;
    }
    else
    {
      SharedVm = MiGetSharedVm(a1 + 1664);
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
    }
    v7 = (_QWORD *)MiDeleteDeferredCloneDescriptors(a1);
    if ( v4 != 17 )
    {
      LOBYTE(v6) = v4;
      MiUnlockWorkingSetExclusive(v3, v6);
    }
    if ( v7 )
    {
      do
      {
        v8 = (_QWORD *)*v7;
        ExFreePoolWithTag(v7, 0);
        v7 = v8;
      }
      while ( v8 );
    }
  }
}
