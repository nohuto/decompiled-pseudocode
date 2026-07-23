/*
 * XREFs of MiDeleteCloneZombies @ 0x140247A3C
 * Callers:
 *     MiInsertClone @ 0x14055B4B4 (MiInsertClone.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D9514 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14055A300 (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteCloneZombies(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  KIRQL v4; // si
  __int64 SharedVm; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  if ( *(_WORD *)(*(_QWORD *)(a1 + 1680) + 368LL) )
  {
    v3 = a1 + 1664;
    if ( (_DWORD)a2 )
    {
      v4 = 17;
    }
    else
    {
      SharedVm = MiGetSharedVm(a1 + 1664, a2);
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
