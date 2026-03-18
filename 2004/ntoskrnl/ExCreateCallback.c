/*
 * XREFs of ExCreateCallback @ 0x14070B0F0
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CBAA8 (HvlPhase2Initialize.c)
 *     HaliInitPowerManagement @ 0x1407960C0 (HaliInitPowerManagement.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407B5D10 (KeRegisterProcessorChangeCallback.c)
 *     HalpMiscInitializeKsr @ 0x1407B5F0C (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x1407C0CC0 (IoRegisterBootDriverCallback.c)
 *     ExInitLicenseCallback @ 0x1407C2278 (ExInitLicenseCallback.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 *     PiCslInitialize @ 0x140A5159C (PiCslInitialize.c)
 *     EtwpInitialize @ 0x140A61950 (EtwpInitialize.c)
 *     ExpInitializeCallbacks @ 0x140A6AADC (ExpInitializeCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140A6C61C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A6D250 (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x140A6FF9C (IopInitializeSessionNotifications.c)
 *     PopSetupKsrCallbacks @ 0x140A70DF0 (PopSetupKsrCallbacks.c)
 *     PiKsrNotifyInitialize @ 0x140A8E7F0 (PiKsrNotifyInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExpUnlockCallbackListExclusive @ 0x1403A39DC (ExpUnlockCallbackListExclusive.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     ObOpenObjectByName @ 0x1406945D0 (ObOpenObjectByName.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int128 v7; // xmm0
  HANDLE v9; // rdi
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebx
  PADAPTER_OBJECT v14; // rbx
  _DMA_OPERATIONS ***v15; // rcx
  _DMA_OPERATIONS **p_DmaOperations; // rax
  NTSTATUS inserted; // eax
  PVOID *Object; // [rsp+28h] [rbp-39h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-9h] BYREF
  PVOID v20; // [rsp+60h] [rbp-1h] BYREF
  __int128 v21; // [rsp+68h] [rbp+7h] BYREF
  __m128i v22; // [rsp+78h] [rbp+17h]
  __int128 v23; // [rsp+88h] [rbp+27h]
  HANDLE Handle; // [rsp+D0h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = *(_OWORD *)&ObjectAttributes->Length;
  v9 = 0LL;
  v22 = *(__m128i *)&ObjectAttributes->ObjectName;
  Handle = 0LL;
  v21 = v7;
  DmaAdapter = 0LL;
  v10 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v22.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8)) | 0x200;
  v23 = v10;
  if ( v22.m128i_i64[0] )
  {
    v11 = ObOpenObjectByName((__int64)&v21, (__int64)ExCallbackObjectType, 0, 0LL, 0, 0LL, (__int64)&Handle);
    v9 = Handle;
    v12 = v11;
  }
  else
  {
    v12 = -1073741823;
  }
  if ( v12 >= 0 )
    goto LABEL_6;
  if ( Create )
  {
    v12 = ObCreateObjectEx(0, ExCallbackObjectType, (int)&v21, 0, (__int64)Object, 56, 0, 0, &DmaAdapter, 0LL);
    if ( v12 < 0 )
      return v12;
    v14 = DmaAdapter;
    *(_DWORD *)&DmaAdapter->Version = 1819042115;
    LOBYTE(v14[2].Version) = AllowMultipleCallbacks;
    v14[1].DmaOperations = (_DMA_OPERATIONS *)&v14[1];
    *(_QWORD *)&v14[1].Version = v14 + 1;
    v14->DmaOperations = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
    v15 = (_DMA_OPERATIONS ***)qword_140C19268;
    p_DmaOperations = &v14[2].DmaOperations;
    if ( *(__int64 **)qword_140C19268 != &ExpCallbackListHead )
      __fastfail(3u);
    *(_QWORD *)&v14[3].Version = qword_140C19268;
    *p_DmaOperations = (_DMA_OPERATIONS *)&ExpCallbackListHead;
    *v15 = p_DmaOperations;
    qword_140C19268 = (__int64)&v14[2].DmaOperations;
    ExpUnlockCallbackListExclusive((__int64)CurrentThread);
    inserted = ObInsertObjectEx(v14, 0LL, 1u, 0, 0, 0LL, (unsigned __int64 *)&Handle);
    v9 = Handle;
    v12 = inserted;
  }
  if ( v12 >= 0 )
  {
LABEL_6:
    v20 = 0LL;
    v12 = ObReferenceObjectByHandle(v9, 0, ExCallbackObjectType, 0, &v20, 0LL);
    ZwClose(v9);
    if ( v12 >= 0 )
      *CallbackObject = (PCALLBACK_OBJECT)v20;
  }
  return v12;
}
