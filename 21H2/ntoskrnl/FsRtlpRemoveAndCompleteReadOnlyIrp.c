/*
 * XREFs of FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F0B4C
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057F0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockCleanup @ 0x1402AD5D0 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140354E00 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D3C8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374AD0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404F06F8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlCheckUpperOplock @ 0x14088B8B0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     IofCompleteRequest @ 0x140243490 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall FsRtlpRemoveAndCompleteReadOnlyIrp(_QWORD *a1, int a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  char v10; // cl
  __int64 v11; // rax
  int v12; // eax

  v3 = a1[2];
  ObfDereferenceObjectWithTag(*(PVOID *)(v3 + 48), 0x746C6644u);
  *((_BYTE *)a1 - 99) = KeAcquireQueuedSpinLock(7uLL);
  v7 = 0LL;
  _InterlockedExchange64(a1 - 8, 0LL);
  KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)a1 - 99));
  v8 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v9 = (_QWORD *)a1[1], (_QWORD *)*v9 != a1) )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = *((_BYTE *)a1 - 100);
  if ( *(_DWORD *)(v3 + 24) == 590400 )
  {
    if ( v10 )
    {
      a2 = -1073741536;
    }
    else
    {
      v11 = *(a1 - 18);
      *(_QWORD *)(v11 + 12) = 0LL;
      *(_DWORD *)(v11 + 20) = 0;
      v7 = 24LL;
      *(_DWORD *)v11 = 1572865;
      *(_DWORD *)(v11 + 4) = 1;
      *(_DWORD *)(v11 + 8) = (a3 >> 12) & 7;
    }
  }
  else
  {
    v12 = -1073741536;
    v7 = 8LL;
    if ( !v10 )
      v12 = a2;
    a2 = v12;
  }
  *(a1 - 14) = v7;
  *((_DWORD *)a1 - 30) = a2;
  IofCompleteRequest((PIRP)(a1 - 21), 1);
}
