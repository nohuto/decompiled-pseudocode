/*
 * XREFs of IommuRegisterInterfaceStateChangeCallback @ 0x140528900
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x140510C60 (HalpIommuDeviceGetDomainTypes.c)
 */

__int64 __fastcall IommuRegisterInterfaceStateChangeCallback(
        void (__fastcall *a1)(__int64, __int64),
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 *v11; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rdi
  unsigned int v15; // edx
  int v16; // r9d

  v4 = 0;
  if ( *a4 )
  {
    if ( *(_QWORD *)(a3 + 48) )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v9 = (_QWORD *)HalpMmAllocCtxAlloc((__int64)a1, 48LL);
      v10 = (__int64)v9;
      if ( v9 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[4] = 0LL;
        v9[5] = 0LL;
        v9[2] = a1;
        v9[3] = a2;
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 8), 0x446C6148u);
        *(_QWORD *)(v10 + 32) = a3;
        *(_QWORD *)(a3 + 48) = v10;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock, 0LL);
        *(_DWORD *)(v10 + 40) = *a4;
        if ( (*a4 & 1) != 0 )
          *(_DWORD *)(v10 + 44) = HalpIommuDeviceGetDomainTypes(a3);
        a1(v10 + 40, a2);
        v11 = (__int64 *)qword_140C4A0F8;
        if ( *(__int64 **)qword_140C4A0F8 != &IommuInterfaceStateChangeCallbackListHead )
          __fastfail(3u);
        *(_QWORD *)(v10 + 8) = qword_140C4A0F8;
        *(_QWORD *)v10 = &IommuInterfaceStateChangeCallbackListHead;
        *v11 = v10;
        qword_140C4A0F8 = v10;
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
        v15 = 0;
        while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock & 0x7FFFFFFFFFFFFFFCLL)
             || !*(_BYTE *)(p_Process + 18)
             || (*(_DWORD *)p_Process & 1) != 0
             || *(_DWORD *)(p_Process + 8) != SessionId )
        {
          ++v15;
          p_Process += 96LL;
          if ( v15 >= 6 )
            goto LABEL_22;
        }
        *(_BYTE *)(p_Process + 18) = 0;
        if ( !p_Process )
        {
LABEL_22:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(
              0x162u,
              (ULONG_PTR)CurrentThread,
              (ULONG_PTR)&IommuInterfaceStateChangeCallbackPushLock,
              SessionId,
              0LL);
          _enable();
          return v4;
        }
        if ( *(__int64 *)p_Process < 0 )
        {
          *(_BYTE *)p_Process |= 2u;
          _enable();
          KiAbEntryRemoveFromTree(p_Process);
          _disable();
        }
        v16 = *(_DWORD *)(p_Process + 88);
        *(_DWORD *)(p_Process + 88) = 0;
        *(_BYTE *)(p_Process + 17) = 0;
        *(_QWORD *)p_Process = 0LL;
        CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
        _enable();
        if ( v16 )
          KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&IommuInterfaceStateChangeCallbackPushLock, v16);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741582;
  }
  return v4;
}
