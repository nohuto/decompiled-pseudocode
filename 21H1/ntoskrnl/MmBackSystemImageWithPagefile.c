/*
 * XREFs of MmBackSystemImageWithPagefile @ 0x14076BADC
 * Callers:
 *     FsRtlSetDriverBacking @ 0x14076BAB0 (FsRtlSetDriverBacking.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     MiBackSystemImageWithPagefile @ 0x14076BB38 (MiBackSystemImageWithPagefile.c)
 */

__int64 __fastcall MmBackSystemImageWithPagefile(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rsi
  struct _KTHREAD *Lock; // rdi
  unsigned int v4; // ebx

  v2 = MiLookupDataTableEntry(BugCheckParameter2, 1);
  if ( !v2 )
    KeBugCheckEx(0x1Au, 0x1239uLL, BugCheckParameter2, 0LL, 0LL);
  Lock = MmAcquireLoadLock();
  v4 = MiBackSystemImageWithPagefile(v2);
  MmReleaseLoadLock((__int64)Lock);
  return v4;
}
