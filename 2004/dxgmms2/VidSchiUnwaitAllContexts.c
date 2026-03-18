/*
 * XREFs of VidSchiUnwaitAllContexts @ 0x1C00321DC
 * Callers:
 *     VidSchiReportHwHang @ 0x1C003D114 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00D2940 (VidSchFlushAdapter.c)
 * Callees:
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C002CE68 (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

LONG __fastcall VidSchiUnwaitAllContexts(__int64 a1)
{
  __int64 i; // rsi
  struct _LIST_ENTRY **v3; // rbx
  struct _LIST_ENTRY *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 76); i = (unsigned int)(i + 1) )
  {
    v3 = *(struct _LIST_ENTRY ***)(a1 + 624);
    if ( (unsigned int)i < *(_DWORD *)(a1 + 696) )
      v3 += i;
    v4 = *v3;
    VidSchiUnwaitAllContextsInList(v4 + 163);
    VidSchiUnwaitAllContextsInList(v4 + 160);
    VidSchiUnwaitAllContextsInList(v4 + 162);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_QWORD *)(a1 + 1208) = MEMORY[0xFFFFF78000000320];
  return KeSetEvent((PRKEVENT)(a1 + 1176), 0, 0);
}
