/*
 * XREFs of _RtlCreateTimer@28 @ 0x4B2AA4F0
 * Callers:
 *     _RtlSetTimer@28 @ 0x4B3851F0 (_RtlSetTimer@28.c)
 * Callees:
 *     _RtlCreateTimer@28 @ 0x4B2AA4F0 (_RtlCreateTimer@28.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpInitializeData@12 @ 0x4B2B1FE2 (_RtlpTpInitializeData@12.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpAllocTimer@16 @ 0x4B2B4570 (_TpAllocTimer@16.c)
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlCreateTimer(
        HANDLE TimerQueueHandle,
        PHANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG DueTime,
        ULONG Period,
        ULONG Flags)
{
  NTSTATUS result; // eax
  int v8; // ebx
  PVOID Heap; // eax
  _DWORD *v10; // edi
  int v11; // eax
  _DWORD *v12; // eax
  int v13; // edx
  SIZE_T v14; // [esp-4h] [ebp-70h]
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [esp+10h] [ebp-5Ch] BYREF
  LARGE_INTEGER v16; // [esp+38h] [ebp-34h] BYREF
  HANDLE v17; // [esp+40h] [ebp-2Ch]
  HANDLE TokenHandle; // [esp+44h] [ebp-28h] BYREF
  _DWORD *v19; // [esp+48h] [ebp-24h]
  int v20; // [esp+4Ch] [ebp-20h]
  char v21; // [esp+53h] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v21 = 1;
  result = -1073741823;
  v20 = -1073741823;
  TokenHandle = 0;
  v19 = 0;
  v17 = TimerQueueHandle;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return result;
  *Handle = 0;
  ms_exc.registration.TryLevel = 0;
  v8 = RtlpTpRevertCapture(&TokenHandle);
  v20 = v8;
  if ( v8 < 0 )
  {
    v10 = v19;
  }
  else
  {
    LODWORD(v14) = 52;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
    v10 = Heap;
    v19 = Heap;
    if ( Heap )
    {
      *((_DWORD *)Heap + 8) = 0;
      *((_DWORD *)Heap + 12) = 0;
      v8 = RtlpTpInitializeData((PHANDLE)Heap + 2, TokenHandle);
      v20 = v8;
      if ( v8 < 0 )
        goto LABEL_13;
      v21 = 1;
      v10[4] = Function;
      v10[5] = Context;
      v10[6] = 0;
      *((_BYTE *)v10 + 44) = Period != 0;
      v10[7] = TimerQueueHandle;
      v10[9] = 0;
      v10[10] = 0;
      CallbackEnviron.Version = 3;
      memset(&CallbackEnviron.Pool, 0, 28);
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 40;
      v11 = 0;
      if ( (Flags & 0xE0) != 0 )
      {
        v11 = 2;
        CallbackEnviron.u.Flags = 2;
      }
      if ( (Flags & 0x10) != 0 )
        CallbackEnviron.u.Flags = v11 | 1;
      CallbackEnviron.FinalizationCallback = (void (__stdcall *)(struct _TP_CALLBACK_INSTANCE *, void *))RtlpTpTimerFinalizationCallback;
      v8 = TpAllocTimer((PTP_TIMER *)v10 + 8, RtlpTpTimerCallback, v10, &CallbackEnviron);
      v20 = v8;
      if ( v8 < 0 )
        goto LABEL_13;
      v16.QuadPart = -10000LL * DueTime;
      _InterlockedIncrement((volatile signed __int32 *)TimerQueueHandle);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      ms_exc.registration.TryLevel = 1;
      v12 = (char *)TimerQueueHandle + 12;
      v13 = *((_DWORD *)TimerQueueHandle + 3);
      if ( *(HANDLE *)(v13 + 4) != (char *)TimerQueueHandle + 12 )
        __fastfail(3u);
      *v10 = v13;
      v10[1] = v12;
      *(_DWORD *)(v13 + 4) = v10;
      *v12 = v10;
      *Handle = v10;
      TpSetTimerEx((PTP_TIMER)v10[8], &v16, Period, 0);
      ms_exc.registration.TryLevel = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      v10 = 0;
      v19 = 0;
      v8 = 0;
    }
    else
    {
      v8 = -1073741801;
    }
    v20 = v8;
  }
LABEL_13:
  ms_exc.registration.TryLevel = -2;
  if ( v10 )
  {
    if ( v21 )
    {
      if ( v10[2] )
        NtClose((HANDLE)v10[2]);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    v8 = v20;
  }
  RtlpTpResumeImpersonation(TokenHandle, 1261086354);
  return v8;
}
