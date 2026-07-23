/*
 * XREFs of AlpcpCaptureMessageData @ 0x1406D34DC
 * Callers:
 *     AlpcpCreateReserve @ 0x14060FCC4 (AlpcpCreateReserve.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406CF1B8 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x1406D06E8 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406D133C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x1405CF054 (AlpcpAvailableBufferSize.c)
 *     AlpcpChargePagedPoolQuota @ 0x14065586C (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1406897B4 (AlpcpReleasePagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AlpcpCaptureMessageData(__int64 a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v6; // rax
  size_t v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  size_t v10; // r14
  void *v11; // rcx
  struct _KPROCESS *v12; // rcx
  unsigned __int64 v14; // r12
  void *v15; // rcx
  unsigned __int64 v16; // r13
  PVOID PoolWithTag; // rax
  struct _KPROCESS *v18; // rcx
  int v19; // r13d
  struct _KPROCESS *v20; // rcx

  v6 = AlpcpAvailableBufferSize(a1);
  v10 = v6;
  if ( v7 <= v6 )
  {
    if ( v9 )
      memmove(v8 + 35, a3, v7);
    v11 = *(void **)(a1 + 224);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x42456C41u);
      v12 = *(struct _KPROCESS **)(a1 + 48);
      *(_QWORD *)(a1 + 224) = 0LL;
      if ( v12 )
        AlpcpReleasePagedPoolQuota(v12, *(_QWORD *)(a1 + 232));
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return 0LL;
  }
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  v14 = v8[29];
  if ( a2 <= v14 + v6 )
  {
LABEL_20:
    if ( a3 )
    {
      memmove((void *)(a1 + 280), a3, v10);
      memmove(*(void **)(a1 + 224), &a3[v10], a2 - v10);
    }
    return 0LL;
  }
  v15 = (void *)v8[28];
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x42456C41u);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  v16 = a2 - v10;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2 - v10, 0x42456C41u);
  v18 = *(struct _KPROCESS **)(a1 + 48);
  *(_QWORD *)(a1 + 224) = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)(a1 + 232) = v16;
    if ( v18 )
    {
      v19 = AlpcpChargePagedPoolQuota((__int64)v18, v16 - v14);
      if ( v19 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
        v20 = *(struct _KPROCESS **)(a1 + 48);
        *(_QWORD *)(a1 + 224) = 0LL;
        *(_QWORD *)(a1 + 232) = 0LL;
        AlpcpReleasePagedPoolQuota(v20, v14);
        return (unsigned int)v19;
      }
    }
    goto LABEL_20;
  }
  if ( v18 )
    AlpcpReleasePagedPoolQuota(v18, v14);
  return 3221225626LL;
}
