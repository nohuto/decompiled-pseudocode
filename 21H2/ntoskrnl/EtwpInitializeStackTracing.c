/*
 * XREFs of EtwpInitializeStackTracing @ 0x14093598C
 * Callers:
 *     EtwpUpdateStackTracing @ 0x140935B5C (EtwpUpdateStackTracing.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x1402A3310 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpReferenceStackLookasideList @ 0x140935AF0 (EtwpReferenceStackLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpInitializeStackTracing(__int64 a1)
{
  _SLIST_HEADER *v1; // rbp
  unsigned int v3; // edi
  ULONG v4; // eax
  unsigned int v5; // ecx
  PVOID PoolWithTag; // rax
  __int64 i; // rsi
  PVOID v8; // rax
  PVOID v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  void *v13; // rcx

  v1 = (_SLIST_HEADER *)(a1 + 928);
  v3 = 0;
  InitializeSListHead((PSLIST_HEADER)(a1 + 928));
  v4 = 4 * KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = 16;
  *(_DWORD *)(a1 + 952) = v4;
  if ( v4 >= 0x10 )
    v5 = v4;
  else
    *(_DWORD *)(a1 + 952) = 16;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 96LL * v5, 0x50777445u);
  *(_QWORD *)(a1 + 944) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_11;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 952); i = (unsigned int)(i + 1) )
    RtlpInterlockedPushEntrySList(v1, (PSLIST_ENTRY)(*(_QWORD *)(a1 + 944) + 96 * i));
  KeInitializeDpc((PRKDPC)(a1 + 864), (PKDEFERRED_ROUTINE)EtwpStackWalkDpc, 0LL);
  *(_BYTE *)(a1 + 865) = 2;
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x6D777445u);
  v9 = v8;
  if ( v8 )
  {
    memset(v8, 0, 0x400uLL);
    *(_QWORD *)(a1 + 984) = v9;
    *(_DWORD *)(a1 + 976) = 0x2000;
    _m_prefetchw((const void *)(a1 + 832));
    v12 = *(_DWORD *)(a1 + 832) | 0x2000u;
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x2000u) & 0x2000) == 0 )
      EtwpReferenceStackLookasideList(v12, 0x2000LL, v10, v11);
    _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x80u);
  }
  else
  {
LABEL_11:
    v13 = *(void **)(a1 + 944);
    v3 = -1073741801;
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
  return v3;
}
