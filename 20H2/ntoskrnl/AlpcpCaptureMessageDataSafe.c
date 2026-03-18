/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x1405ED620
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405EB9E0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405ECB50 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x1405CD054 (AlpcpAvailableBufferSize.c)
 *     AlpcpChargePagedPoolQuota @ 0x1405F303C (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406854E4 (AlpcpReleasePagedPoolQuota.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  char *v2; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  _QWORD *v5; // rcx
  size_t v6; // r15
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r12
  void *v10; // rcx
  unsigned __int64 v11; // r13
  PVOID PoolWithTag; // rax
  __int64 v13; // rcx

  v2 = *(char **)(a1 + 176);
  v3 = *(unsigned __int16 *)(a1 + 240);
  v4 = AlpcpAvailableBufferSize(a1);
  v6 = v4;
  if ( v3 <= v4 )
  {
    if ( v2 )
      memmove(v5 + 35, v2, (unsigned int)v3);
    v7 = *(void **)(a1 + 224);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x42456C41u);
      *(_QWORD *)(a1 + 224) = 0LL;
      v8 = *(_QWORD *)(a1 + 48);
      if ( v8 )
        AlpcpReleasePagedPoolQuota(v8, *(_QWORD *)(a1 + 232));
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return;
  }
  if ( v3 > 0xFFD7 )
    return;
  v9 = v5[29];
  if ( v3 > v9 + v4 )
  {
    v10 = (void *)v5[28];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x42456C41u);
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    v11 = v3 - v6;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3 - v6, 0x42456C41u);
    *(_QWORD *)(a1 + 224) = PoolWithTag;
    v13 = *(_QWORD *)(a1 + 48);
    if ( !PoolWithTag )
    {
      if ( v13 )
        AlpcpReleasePagedPoolQuota(v13, v9);
      return;
    }
    *(_QWORD *)(a1 + 232) = v11;
    if ( v13 && (int)AlpcpChargePagedPoolQuota(v13, v11 - v9) < 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
      *(_QWORD *)(a1 + 224) = 0LL;
      *(_QWORD *)(a1 + 232) = 0LL;
      AlpcpReleasePagedPoolQuota(*(_QWORD *)(a1 + 48), v9);
      return;
    }
  }
  if ( v2 )
  {
    memmove((void *)(a1 + 280), v2, v6);
    memmove(*(void **)(a1 + 224), &v2[v6], v3 - v6);
  }
}
