/*
 * XREFs of _RtlRegisterWait@24 @ 0x4B2B2020
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpInitializeData@12 @ 0x4B2B1FE2 (_RtlpTpInitializeData@12.c)
 *     _RtlRegisterWait@24 @ 0x4B2B2020 (_RtlRegisterWait@24.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpAllocWait@16 @ 0x4B2B4140 (_TpAllocWait@16.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlRegisterWait(
        PHANDLE WaitHandle,
        HANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG Milliseconds,
        ULONG Flags)
{
  NTSTATUS result; // eax
  int v7; // esi
  HANDLE *Heap; // eax
  HANDLE *v9; // edi
  int v10; // eax
  SIZE_T v11; // [esp-4h] [ebp-64h]
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [esp+10h] [ebp-50h] BYREF
  HANDLE TokenHandle; // [esp+38h] [ebp-28h] BYREF
  HANDLE *v14; // [esp+3Ch] [ebp-24h]
  int v15; // [esp+40h] [ebp-20h]
  char v16; // [esp+47h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  v16 = 0;
  result = -1073741823;
  v15 = -1073741823;
  TokenHandle = 0;
  v14 = 0;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return result;
  if ( !Handle || Handle == (HANDLE)-1 || Handle == (HANDLE)-2 || !Function )
    return -1073741811;
  *WaitHandle = 0;
  ms_exc.registration.TryLevel = 0;
  v7 = RtlpTpRevertCapture(&TokenHandle, Flags & 0x100);
  v15 = v7;
  if ( v7 < 0 )
  {
    v9 = v14;
  }
  else
  {
    LODWORD(v11) = 56;
    Heap = (HANDLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
    v9 = Heap;
    v14 = Heap;
    if ( Heap )
    {
      Heap[6] = 0;
      v7 = RtlpTpInitializeData(Heap, Flags, TokenHandle);
      v15 = v7;
      if ( v7 < 0 )
        goto LABEL_18;
      v16 = 1;
      v9[2] = 0;
      v9[3] = 0;
      v9[4] = Function;
      v9[5] = Context;
      v9[7] = Handle;
      if ( Milliseconds == -1 )
      {
        v9[8] = 0;
        v9[9] = 0;
        v9[10] = 0;
      }
      else
      {
        v9[8] = (HANDLE)Milliseconds;
        v9[9] = 0;
        *((_QWORD *)v9 + 4) = -10000LL * Milliseconds;
        v9[10] = v9 + 8;
      }
      v9[11] = 0;
      v9[12] = 0;
      CallbackEnviron.Version = 3;
      memset(&CallbackEnviron.Pool, 0, 28);
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 40;
      v10 = 0;
      if ( (Flags & 0xC4) != 0 )
      {
        v10 = 2;
        CallbackEnviron.u.Flags = 2;
      }
      if ( (Flags & 0x10) != 0 )
        CallbackEnviron.u.Flags = v10 | 1;
      CallbackEnviron.FinalizationCallback = (void (__stdcall *)(struct _TP_CALLBACK_INSTANCE *, void *))RtlpTpWaitFinalizationCallback;
      v7 = TpAllocWait((PTP_WAIT *)v9 + 6, (PTP_WAIT_CALLBACK)RtlpTpWaitCallback, v9, &CallbackEnviron);
      v15 = v7;
      if ( v7 < 0 )
        goto LABEL_18;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v9 + 2);
      ms_exc.registration.TryLevel = 1;
      *WaitHandle = v9;
      TpSetWaitEx((PTP_WAIT)v9[6], Handle, (PLARGE_INTEGER)v9[10], 0);
      ms_exc.registration.TryLevel = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v9 + 2);
      v9 = 0;
      v14 = 0;
      v7 = 0;
    }
    else
    {
      v7 = -1073741801;
    }
    v15 = v7;
  }
LABEL_18:
  ms_exc.registration.TryLevel = -2;
  if ( v9 )
  {
    if ( v16 )
    {
      if ( *v9 )
        NtClose(*v9);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    v14 = 0;
    v7 = v15;
  }
  RtlpTpResumeImpersonation(TokenHandle, 1261117879);
  return v7;
}
