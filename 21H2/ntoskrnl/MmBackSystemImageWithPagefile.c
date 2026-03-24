/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x140780A8C
 * Callers:
 *     FsRtlSetDriverBacking @ 0x140780A60 (FsRtlSetDriverBacking.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x140780AE8 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MmBackSystemImageWithPagefile(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  struct _KTHREAD *Lock; // rdi
  unsigned int v7; // ebx

  v5 = MiLookupDataTableEntry(BugCheckParameter2, 1LL, a3, a4);
  if ( !v5 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  Lock = MmAcquireLoadLock();
  v7 = MiBackSystemImageWithPagefile(v5);
  MmReleaseLoadLock((__int64)Lock);
  return v7;
}
