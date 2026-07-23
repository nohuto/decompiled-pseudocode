/*
 * XREFs of FsRtlpOplockBreakNotify @ 0x14088C0F8
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1406D98D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpOplockSendModernAppTermination @ 0x140246634 (FsRtlpOplockSendModernAppTermination.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x1403799C4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpWaitOnIrp @ 0x1404F0C70 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakNotify(__int64 a1, __int64 a2, IRP *a3)
{
  char v6; // si
  int v7; // ecx
  unsigned int v8; // edi

  if ( !a1 )
  {
    a3->IoStatus.Status = 0;
    IofCompleteRequest(a3, 1);
    return 0LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v6 = 1;
  v7 = *(_DWORD *)(a1 + 144);
  if ( (v7 & 0x1F00F00) != 0 || *(_QWORD *)(a1 + 72) != a1 + 72 || (v7 & 0x20000) != 0 )
  {
    if ( (v7 & 0x80u) == 0 )
    {
      v6 = 0;
      a3->IoStatus.Status = 0;
      FsRtlpModifyThreadPriorities(a1, 0LL, 1);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      v8 = FsRtlpWaitOnIrp(
             a1,
             (__int64)a3,
             0LL,
             (__int64)FsRtlpNotifyOplockBreakComplete,
             0LL,
             0LL,
             0,
             0LL,
             0LL,
             0LL,
             0LL);
      goto LABEL_10;
    }
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 1);
  v8 = 0;
LABEL_10:
  if ( v6 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v8;
}
