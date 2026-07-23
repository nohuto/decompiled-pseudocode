/*
 * XREFs of NtWaitForKeyedEvent @ 0x1409568F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402EE560 (KeReleaseSemaphore.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtWaitForKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  char v5; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // al
  char *v9; // rcx
  unsigned __int64 *v10; // rsi
  struct _LIST_ENTRY *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r12
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // r13
  struct _LIST_ENTRY *v16; // rdx
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r15
  LIST_ENTRY *v24; // rax
  struct _KTHREAD *v25; // rcx
  struct _LIST_ENTRY *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _LIST_ENTRY *v30; // rdx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  KPROCESSOR_MODE WaitMode; // [rsp+30h] [rbp-78h]
  NTSTATUS v36; // [rsp+34h] [rbp-74h]
  LONGLONG QuadPart; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  void *InitialStack; // [rsp+48h] [rbp-60h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-58h]
  _KPROCESS *Process; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER *Timeouta; // [rsp+C8h] [rbp+20h]

  Timeouta = Timeout;
  v36 = 0;
  QuadPart = 0LL;
  InitialStack = 0LL;
  v5 = 1;
  if ( ((unsigned __int8)KeyValue & 1) != 0 )
    return -1073741585;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  WaitMode = PreviousMode;
  if ( Timeout )
  {
    if ( PreviousMode && ((unsigned __int64)&Timeout[1] > 0x7FFFFFFF0000LL || &Timeout[1] < Timeout) )
      MEMORY[0x7FFFFFFF0000] = 0;
    QuadPart = Timeout->QuadPart;
    Timeouta = (LARGE_INTEGER *)&QuadPart;
  }
  if ( KeyedEventHandle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(KeyedEventHandle, 1u, ExpKeyedEventObjectType, PreviousMode, &Object, 0LL);
    v36 = result;
    v9 = (char *)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v9 = (char *)ExpCritSecOutOfMemoryEvent;
    DmaAdapter = (PADAPTER_OBJECT)ExpCritSecOutOfMemoryEvent;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x20u;
  Process = CurrentThread->ApcState.Process;
  v10 = (unsigned __int64 *)&v9[24 * (((unsigned __int64)KeyValue >> 5) & 0x3F)];
  v11 = (struct _LIST_ENTRY *)(v10 + 1);
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v12, (ULONG_PTR)v10);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  Flink = v11->Flink;
  if ( v11->Flink == v11 )
  {
LABEL_22:
    InitialStack = CurrentThread[1].InitialStack;
    CurrentThread[1].InitialStack = KeyValue;
    p_WaitListHead = &CurrentThread[1].Header.WaitListHead;
    v18 = (struct _LIST_ENTRY *)v10[2];
    if ( v18->Flink != v11 )
      goto LABEL_48;
    p_WaitListHead->Flink = v11;
    CurrentThread[1].Header.WaitListHead.Blink = v18;
    v18->Flink = p_WaitListHead;
    v10[2] = (unsigned __int64)p_WaitListHead;
    p_Blink = 0LL;
  }
  else
  {
    while ( 1 )
    {
      p_Blink = &Flink[-68].Blink;
      v16 = Flink[2].Flink;
      if ( ((unsigned __int8)v16 & 1) == 0 )
        goto LABEL_22;
      if ( v16 == (struct _LIST_ENTRY *)((unsigned __int64)KeyValue | 1) && p_Blink[68] == (struct _LIST_ENTRY *)Process )
        break;
      Flink = Flink->Flink;
      if ( Flink == v11 )
        goto LABEL_22;
    }
    v30 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      goto LABEL_48;
    Blink->Flink = v30;
    v30->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( p_Blink )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)(p_Blink + 145), 1, 1, 0);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v32, v33, v34);
    goto LABEL_45;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v19, v20, v21);
  v36 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, WaitMode, Alertable, Timeouta);
  if ( v36 )
  {
    --CurrentThread->KernelApcDisable;
    v22 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v22, (ULONG_PTR)v10);
    if ( v23 )
      *(_BYTE *)(v23 + 26) |= 1u;
    v24 = &CurrentThread[1].Header.WaitListHead;
    v25 = (struct _KTHREAD *)CurrentThread[1].Header.WaitListHead.Flink;
    if ( v25 == (struct _KTHREAD *)&CurrentThread[1].Header.WaitListHead )
      goto LABEL_36;
    v26 = CurrentThread[1].Header.WaitListHead.Blink;
    if ( v25->Header.WaitListHead.Flink == v24 && v26->Flink == v24 )
    {
      v26->Flink = (struct _LIST_ENTRY *)v25;
      v25->Header.WaitListHead.Flink = v26;
      CurrentThread[1].Header.WaitListHead.Blink = &CurrentThread[1].Header.WaitListHead;
      v24->Flink = v24;
      v5 = 0;
LABEL_36:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v27, v28, v29);
      if ( v5 )
        v36 = KeWaitForSingleObject(&CurrentThread[1].KernelStack, WrKeyedEvent, 0, 0, 0LL);
      goto LABEL_40;
    }
LABEL_48:
    __fastfail(3u);
  }
LABEL_40:
  CurrentThread[1].InitialStack = InitialStack;
LABEL_45:
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x20u;
  if ( KeyedEventHandle )
    HalPutDmaAdapter(DmaAdapter);
  return v36;
}
