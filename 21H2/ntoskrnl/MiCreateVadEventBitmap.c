/*
 * XREFs of MiCreateVadEventBitmap @ 0x1406BFC4C
 * Callers:
 *     MiCreateWriteWatchView @ 0x1406BF94C (MiCreateWriteWatchView.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x14030BA20 (MiInsertVadEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  SIZE_T v8; // rdi
  char *Pool; // rbx
  int v10; // edi

  v8 = 8 * ((a3 >> 6) + ((a3 & 0x3F) != 0) + 9LL);
  Pool = (char *)MiAllocatePool(64, v8, 0x77776D4Du);
  if ( !Pool )
    return 3221225626LL;
  v10 = PsChargeProcessNonPagedPoolQuota(a1, v8);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)v10;
  }
  else
  {
    *((_DWORD *)Pool + 16) = a4;
    *((_QWORD *)Pool + 2) = Pool + 72;
    *((_QWORD *)Pool + 1) = a3;
    MiInsertVadEvent(a2, (unsigned __int64 *)Pool, 1);
    return 0LL;
  }
}
