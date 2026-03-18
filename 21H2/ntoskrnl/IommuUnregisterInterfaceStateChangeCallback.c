/*
 * XREFs of IommuUnregisterInterfaceStateChangeCallback @ 0x140529030
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall IommuUnregisterInterfaceStateChangeCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v10; // edx
  int v11; // r9d
  __int64 v12; // rcx

  v2 = *(_QWORD *)(a2 + 48);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 16) == a1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
    v5 = *(_QWORD *)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v6 = *(_QWORD **)(v2 + 8), *v6 != v2) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&IommuInterfaceStateChangeCallbackPushLock);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    v10 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v10;
      p_Process += 96LL;
      if ( v10 >= 6 )
        goto LABEL_16;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_16:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(
          0x162u,
          (ULONG_PTR)CurrentThread,
          (ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock,
          SessionId,
          0LL);
      _enable();
      goto LABEL_24;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v11 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v11 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&IommuInterfaceStateChangeCallbackPushLock, v11);
LABEL_24:
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x446C6148u);
    *(_OWORD *)v2 = 0LL;
    *(_OWORD *)(v2 + 16) = 0LL;
    *(_OWORD *)(v2 + 32) = 0LL;
    HalpMmAllocCtxFree(v12, v2);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
