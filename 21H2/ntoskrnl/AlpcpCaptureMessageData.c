/*
 * XREFs of AlpcpCaptureMessageData @ 0x1407A7B98
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406652DC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140666C9C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCreateReserve @ 0x1406CBB84 (AlpcpCreateReserve.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1407A7378 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpChargePagedPoolQuota @ 0x1407A7464 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpAvailableBufferSize @ 0x1407A7C84 (AlpcpAvailableBufferSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall AlpcpCaptureMessageData(__int64 a1, size_t a2, char *a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rcx
  size_t v9; // r14
  unsigned __int64 v10; // r12
  void *v11; // rcx
  size_t v12; // r13
  __int64 Pool2; // rax
  struct _KPROCESS *v14; // rcx
  int v16; // r13d
  void *v17; // rcx
  struct _KPROCESS *v18; // rcx
  struct _KPROCESS *v19; // rcx

  v6 = AlpcpAvailableBufferSize(a1, a2);
  v9 = v6;
  if ( v7 <= v6 )
  {
    if ( a3 )
      memmove(v8 + 35, a3, a2);
    v17 = *(void **)(a1 + 224);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x42456C41u);
      v18 = *(struct _KPROCESS **)(a1 + 48);
      *(_QWORD *)(a1 + 224) = 0LL;
      if ( v18 )
        AlpcpReleasePagedPoolQuota(v18, *(_QWORD *)(a1 + 232));
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    return 0LL;
  }
  if ( v7 > 0xFFD7 )
    return 2147483653LL;
  v10 = v8[29];
  if ( v7 <= v10 + v6 )
  {
LABEL_8:
    if ( a3 )
    {
      memmove((void *)(a1 + 280), a3, v9);
      memmove(*(void **)(a1 + 224), &a3[v9], a2 - v9);
    }
    return 0LL;
  }
  v11 = (void *)v8[28];
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x42456C41u);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  v12 = a2 - v9;
  Pool2 = ExAllocatePool2(256LL, a2 - v9, 1111845953LL);
  v14 = *(struct _KPROCESS **)(a1 + 48);
  *(_QWORD *)(a1 + 224) = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 232) = v12;
    if ( v14 )
    {
      v16 = AlpcpChargePagedPoolQuota(v14, v12 - v10);
      if ( v16 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 224), 0x42456C41u);
        v19 = *(struct _KPROCESS **)(a1 + 48);
        *(_QWORD *)(a1 + 224) = 0LL;
        *(_QWORD *)(a1 + 232) = 0LL;
        AlpcpReleasePagedPoolQuota(v19, v10);
        return (unsigned int)v16;
      }
    }
    goto LABEL_8;
  }
  if ( v14 )
    AlpcpReleasePagedPoolQuota(v14, v10);
  return 3221225626LL;
}
