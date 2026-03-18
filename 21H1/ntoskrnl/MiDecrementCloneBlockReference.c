/*
 * XREFs of MiDecrementCloneBlockReference @ 0x140554398
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiDeleteVa @ 0x14029BBC0 (MiDeleteVa.c)
 * Callees:
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiDeleteMergedPte @ 0x1403641F8 (MiDeleteMergedPte.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiDeleteCloneDescriptor @ 0x140554504 (MiDeleteCloneDescriptor.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x140555BF0 (MiReturnCrossPartitionCloneCharges.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        volatile signed __int64 *BugCheckParameter3,
        __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebp

  v5 = *(struct _KTHREAD **)(a3 + 1248);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 24LL);
  if ( *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a3 + 1838)) != v7
    && _InterlockedExchangeAdd64(BugCheckParameter3 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    MiReturnCrossPartitionCloneCharges(v7);
  }
  if ( _InterlockedExchangeAdd64(BugCheckParameter3 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    v8 = MiDeleteMergedPte(v7, (unsigned __int64)BugCheckParameter3);
  else
    v8 = 4;
  if ( *(_QWORD *)(*(_QWORD *)(a3 + 1680) + 360LL) > *(_QWORD *)(BugCheckParameter2 + 96) )
  {
    if ( (_InterlockedDecrement64(BugCheckParameter3 + 2) & 0x7FFFFFFFFFFFFFFLL) == 0 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(v7 + 7624), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 != 3 )
        MiReturnCommit(v7, 1LL);
    }
    v8 = 5;
  }
  if ( !_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter2 + 48)) )
    MiDeleteCloneDescriptor(a3, BugCheckParameter2);
  return v8;
}
