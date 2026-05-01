/*
 * XREFs of ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180031B10
 * Callers:
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x180015E90 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18003E320 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     ?RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180072E80 (-RmpOfferLazyDecommitCheckQueueWork@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x180008768 (CempListEntryIsNull.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800705E0 (-RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z.c)
 */

__int64 __fastcall RmpPartitionTableActOnActivePartitions(
        struct _RM_PARTITION_TABLE *a1,
        __int64 a2,
        int (*a3)(struct _RM_PARTITION *, void *),
        void *a4)
{
  _QWORD *v4; // rdi
  struct _RM_PARTITION_TABLE *v8; // rdx
  __int64 i; // rbx
  volatile signed __int64 *v10; // r8
  signed __int64 *v11; // rsi
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  bool v14; // zf
  signed __int64 v15; // rtt
  signed __int64 v17; // rbp
  signed __int64 v18; // rax
  bool v19; // cc
  signed __int64 v20; // rax

  v4 = (_QWORD *)*((_QWORD *)a1 + 8);
  memset_0(v4, 0, 8LL * *((unsigned int *)a1 + 18));
  RtlAcquireSRWLockShared(a1);
  v8 = (struct _RM_PARTITION_TABLE *)*((_QWORD *)a1 + 2);
  for ( i = 0LL; v8 != (struct _RM_PARTITION_TABLE *)((char *)a1 + 16); v8 = *(struct _RM_PARTITION_TABLE **)v8 )
  {
    v10 = (volatile signed __int64 *)((char *)v8 - 8);
    if ( (*((_DWORD *)v8 + 54) & 3) == 1 )
    {
      if ( _InterlockedIncrement64(v10) <= 1 )
        __fastfail(0xEu);
      v4[i] = v10;
      i = (unsigned int)(i + 1);
    }
  }
  RtlReleaseSRWLockShared(a1);
  if ( (_DWORD)i )
  {
    do
    {
      v11 = (signed __int64 *)*v4;
      ((void (__fastcall *)(_QWORD, void *))a3)(*v4, a4);
      _m_prefetchw(v11);
      v12 = *v11;
      v13 = *v11 - 1;
      v14 = *v11 == 1;
      if ( v13 <= 0 )
      {
LABEL_13:
        if ( !v14 )
          __fastfail(0xEu);
        v17 = v11[3];
        RtlAcquireSRWLockExclusive(v17 + 312);
        *(_DWORD *)(v17 + 320) = GetCurrentThreadId();
        v18 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
        v19 = v18 <= 1;
        v20 = v18 - 1;
        if ( v19 )
        {
          if ( v20 )
            __fastfail(0xEu);
          if ( (unsigned int)CempListEntryIsNull(v11 + 1) )
          {
            RmpPartitionCleanup((struct _RM_PARTITION *)v11);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
          }
          else
          {
            *((_DWORD *)v11 + 56) &= ~1u;
            *((_DWORD *)v11 + 56) |= 2u;
            SetEvent((HANDLE)v11[8]);
          }
        }
        *(_DWORD *)(v17 + 320) = 0;
        RtlReleaseSRWLockExclusive(v17 + 312);
      }
      else
      {
        while ( 1 )
        {
          v15 = v12;
          v12 = _InterlockedCompareExchange64(v11, v13, v12);
          if ( v15 == v12 )
            break;
          v13 = v12 - 1;
          v14 = v12 == 1;
          if ( v12 - 1 <= 0 )
            goto LABEL_13;
        }
      }
      ++v4;
      --i;
    }
    while ( i );
  }
  return 0LL;
}
