/*
 * XREFs of VidSchiProcessIsrHwQueuePageFaulted @ 0x1C003B1E4
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000CC80 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

const signed __int64 *__fastcall VidSchiProcessIsrHwQueuePageFaulted(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  const signed __int64 *result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  PSLIST_ENTRY v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _SLIST_ENTRY v16; // xmm1
  __int64 v17; // rax

  v3 = *(__int64 **)(a1 + 624);
  v5 = *(_DWORD *)(a2 + 40) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 44) + a1 + 80);
  v6 = (unsigned int)v5;
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 696) )
    v3 += v5;
  v7 = *v3;
  if ( (*(_DWORD *)(v7 + 12) & 2) == 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)v5, a2);
    v8[3] = 281LL;
    v8[4] = 13LL;
    v8[5] = (*(_DWORD *)(v7 + 12) >> 1) & 1;
    v8[6] = *(unsigned int *)(a2 + 40);
    v8[7] = *(unsigned int *)(a2 + 44);
    WdLogEvent5_WdCriticalError(v8);
    __debugbreak();
  }
  result = *(const signed __int64 **)(a1 + 584);
  if ( !_bittest64(result, v6) )
  {
    result = (const signed __int64 *)*(unsigned int *)(v7 + 16);
    if ( (_DWORD)result != 1 )
    {
      if ( *(_DWORD *)(v7 + 16) == 2 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2);
        v10[3] = 281LL;
        v10[4] = 16LL;
        v10[5] = a1;
        v11 = *(unsigned __int16 *)(v7 + 4);
        v10[7] = 0LL;
        v10[6] = v11;
        WdLogEvent5_WdCriticalError(v10);
        __debugbreak();
      }
      v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + 6224));
      if ( v12 )
      {
        v12[2].Next = (struct _SLIST_ENTRY *)v7;
        *(PSLIST_ENTRY)((char *)v12 + 40) = *(PSLIST_ENTRY)(a2 + 8);
        *(PSLIST_ENTRY)((char *)v12 + 56) = *(PSLIST_ENTRY)(a2 + 24);
        *(PSLIST_ENTRY)((char *)v12 + 72) = *(PSLIST_ENTRY)(a2 + 40);
        v16 = *(struct _SLIST_ENTRY *)(a2 + 56);
        LODWORD(v12->Next) = 12;
        *(PSLIST_ENTRY)((char *)v12 + 88) = v16;
        return (const signed __int64 *)ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1760), v12 + 1);
      }
      else
      {
        v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15);
        *(_QWORD *)(v17 + 24) = *(unsigned __int16 *)(v7 + 4);
        return (const signed __int64 *)WdLogEvent5_WdAssertion(v17);
      }
    }
  }
  return result;
}
