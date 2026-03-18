/*
 * XREFs of VidSchiProcessIsrHwQueuePageFaulted @ 0x1C0043278
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C7A0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

const signed __int64 *__fastcall VidSchiProcessIsrHwQueuePageFaulted(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // r9
  const signed __int64 *result; // rax
  PSLIST_ENTRY v12; // rax
  struct _SLIST_ENTRY v13; // xmm1

  v2 = *(__int64 **)(a1 + 632);
  v4 = *(unsigned int *)(a2 + 44);
  v6 = *(unsigned int *)(a2 + 40);
  v7 = (unsigned int)v6 + *(unsigned __int8 *)(v4 + a1 + 88);
  v8 = (unsigned int)v7;
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 704) )
    v2 += v7;
  v9 = *v2;
  v10 = *(unsigned int *)(v9 + 12);
  if ( (v10 & 2) == 0 )
  {
    WdLogSingleEntry5(0LL, 281LL, 13LL, (v10 >> 1) & 1, v6, v4);
    __debugbreak();
  }
  result = *(const signed __int64 **)(a1 + 592);
  if ( !_bittest64(result, v8) )
  {
    result = (const signed __int64 *)*(unsigned int *)(v9 + 16);
    if ( (_DWORD)result != 1 )
    {
      if ( *(_DWORD *)(v9 + 16) == 2 )
      {
        WdLogSingleEntry5(0LL, 281LL, 16LL, a1, *(unsigned __int16 *)(v9 + 4), 0LL);
        __debugbreak();
      }
      v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v9 + 6240));
      if ( v12 )
      {
        v12[2].Next = (struct _SLIST_ENTRY *)v9;
        *(PSLIST_ENTRY)((char *)v12 + 40) = *(PSLIST_ENTRY)(a2 + 8);
        *(PSLIST_ENTRY)((char *)v12 + 56) = *(PSLIST_ENTRY)(a2 + 24);
        *(PSLIST_ENTRY)((char *)v12 + 72) = *(PSLIST_ENTRY)(a2 + 40);
        v13 = *(struct _SLIST_ENTRY *)(a2 + 56);
        LODWORD(v12->Next) = 12;
        *(PSLIST_ENTRY)((char *)v12 + 88) = v13;
        return (const signed __int64 *)ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1776), v12 + 1);
      }
      else
      {
        WdLogSingleEntry1(1LL, *(unsigned __int16 *)(v9 + 4));
        return (const signed __int64 *)((__int64 (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
                                         0LL,
                                         0x40000LL,
                                         0xFFFFFFFFLL,
                                         L"The list of pending HW queue page faulted interrupts is full on node %d. There "
                                          "must be severe contention on the scheduler spin lock. This interrupt will be ignored.",
                                         *(unsigned __int16 *)(v9 + 4),
                                         0LL,
                                         0LL,
                                         0LL,
                                         0LL);
      }
    }
  }
  return result;
}
