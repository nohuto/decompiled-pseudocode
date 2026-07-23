/*
 * XREFs of SepInsertOrReferenceSharedSidEntries @ 0x140927C94
 * Callers:
 *     SepSetTokenCapabilities @ 0x1406A97C8 (SepSetTokenCapabilities.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x1402E1F90 (RtlRemoveEntryHashTable.c)
 *     RtlInsertEntryHashTable @ 0x1402E3600 (RtlInsertEntryHashTable.c)
 *     RtlCopySid @ 0x140656BB0 (RtlCopySid.c)
 *     SepFindSharedSidEntry @ 0x140927BF4 (SepFindSharedSidEntry.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepInsertOrReferenceSharedSidEntries(unsigned int **a1, unsigned int **a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // esi
  __int64 v8; // rbp
  signed __int64 v9; // r12
  signed __int64 v10; // rsi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY SharedSidEntry; // rax
  unsigned int *Blink; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v14; // r15
  __int64 v15; // rax
  ULONG_PTR v16; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v17; // rdi
  __int64 v18; // rax
  volatile signed __int64 *v19; // rdi
  unsigned int v21; // [rsp+60h] [rbp+18h]
  int v22; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(g_SepSidMapping, 0LL);
  v8 = 0LL;
  if ( !a3 )
    goto LABEL_24;
  v9 = (char *)a1 - (char *)a2;
  v10 = (char *)a2 - (char *)a1;
  while ( 1 )
  {
    *(_DWORD *)((char *)a1 + v10 + 8) = *(_DWORD *)((char *)a1 + v10 + v9 + 8);
    SharedSidEntry = SepFindSharedSidEntry(*a1);
    if ( SharedSidEntry )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)&SharedSidEntry[1]) <= 1 )
        __fastfail(0xEu);
      Blink = (unsigned int *)SharedSidEntry[1].Linkage.Blink;
      goto LABEL_12;
    }
    v21 = 8 * *((unsigned __int8 *)*a1 + 1) + 96;
    PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, v21, 0x73536553u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)&PoolWithTag[1].Signature;
    PoolWithTag[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
    RtlCopySid(v21 - 40, &PoolWithTag[1].Signature, *a1);
    v15 = (unsigned int)*((unsigned __int8 *)*a1 + 1) - 1;
    v16 = (*a1)[v15 + 2];
    if ( !(*a1)[v15 + 2] )
      v16 = 1LL;
    if ( !RtlInsertEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v14, v16, 0LL) )
    {
      v4 = -1073741823;
      v22 = -1073741823;
      ExFreePoolWithTag(v14, 0x73536553u);
      goto LABEL_16;
    }
    Blink = (unsigned int *)v14[1].Linkage.Blink;
LABEL_12:
    *(unsigned int **)((char *)a1 + v10) = Blink;
    v8 = (unsigned int)(v8 + 1);
    a1 += 2;
    if ( (unsigned int)v8 >= a3 )
    {
      v4 = 0;
      goto LABEL_24;
    }
  }
  v4 = -1073741801;
  v22 = -1073741801;
LABEL_16:
  if ( (_DWORD)v8 )
  {
    do
    {
      v17 = SepFindSharedSidEntry(*a2);
      v18 = _InterlockedDecrement64((volatile signed __int64 *)&v17[1]);
      if ( v18 <= 0 )
      {
        if ( v18 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v17, 0LL) )
          ExFreePoolWithTag(v17, 0);
      }
      a2 += 2;
      --v8;
    }
    while ( v8 );
    v4 = v22;
  }
LABEL_24:
  v19 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v19);
  KeAbPostRelease((ULONG_PTR)v19);
  KeLeaveCriticalRegion();
  return v4;
}
