/*
 * XREFs of MiRemoveSystemCacheReferences @ 0x140592278
 * Callers:
 *     MmMapViewInSystemCache @ 0x140285D90 (MmMapViewInSystemCache.c)
 * Callees:
 *     MiRemoveViewsFromSection @ 0x140286884 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveSystemCacheReferences(__int64 *BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r14
  KIRQL v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdi
  _DWORD *v9; // r8
  __int64 result; // rax

  v2 = *BugCheckParameter2;
  v5 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*BugCheckParameter2 + 60) & 0x3FF));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v7 = MiRemoveViewsFromSection((ULONG_PTR)BugCheckParameter2, a2, 4);
  --*(_QWORD *)(v2 + 40);
  --*(_DWORD *)(v2 + 88);
  v8 = v7;
  result = MiCheckControlArea(v2, v6, v9);
  if ( v8 )
    return MiReturnCrossPartitionSectionCharges(v5, 1LL, v8);
  return result;
}
