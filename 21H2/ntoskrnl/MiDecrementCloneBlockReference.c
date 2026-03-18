/*
 * XREFs of MiDecrementCloneBlockReference @ 0x1405BA498
 * Callers:
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiDeleteVa @ 0x140330730 (MiDeleteVa.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140239C2C (MiDeleteMergedPte.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiDeleteCloneDescriptor @ 0x1405BA624 (MiDeleteCloneDescriptor.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1405BBC9C (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 *BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  signed __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned int v10; // ebx

  v5 = *(struct _KTHREAD **)(a3 + 1248);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  v7 = 1LL;
  v8 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL);
  v9 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  if ( v9 != v8 )
    v7 = _InterlockedDecrement64(BugCheckParameter3 + 1);
  if ( _InterlockedExchangeAdd64(BugCheckParameter3 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    v10 = MiDeleteMergedPte(v8, (ULONG_PTR)BugCheckParameter3);
  else
    v10 = 4;
  if ( *(_QWORD *)(*(_QWORD *)(a3 + 1680) + 344LL) > *(_QWORD *)(BugCheckParameter2 + 96) )
  {
    if ( (_InterlockedDecrement64(BugCheckParameter3 + 2) & 0x7FFFFFFFFFFFFFFLL) == 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v8 + 17528), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v10 != 3 )
        MiReturnCommit(v8, 1LL);
    }
    v10 = 5;
  }
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter2 + 48)) )
    MiDeleteCloneDescriptor(a3, BugCheckParameter2);
  if ( v10 == 3 && v9 != v8 )
    v10 = 4;
  if ( !v7 )
    MiReturnCrossPartitionCloneCharges(v8);
  return v10;
}
