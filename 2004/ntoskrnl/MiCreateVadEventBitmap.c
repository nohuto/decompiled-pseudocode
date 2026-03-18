/*
 * XREFs of MiCreateVadEventBitmap @ 0x1406F007C
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1406EFD48 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateWriteWatchView @ 0x1406F001C (MiCreateWriteWatchView.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiInsertVadEvent @ 0x1402481DC (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14024A060 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rdi
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
    MiInsertVadEvent(a2, Pool, 1);
    return 0LL;
  }
}
