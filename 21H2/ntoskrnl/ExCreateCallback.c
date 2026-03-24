/*
 * XREFs of ExCreateCallback @ 0x1406BD240
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CF0B8 (HvlPhase2Initialize.c)
 *     HaliInitPowerManagement @ 0x1407AE1A0 (HaliInitPowerManagement.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407C8800 (KeRegisterProcessorChangeCallback.c)
 *     HalpMiscInitializeKsr @ 0x1407C8C28 (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x1407D3940 (IoRegisterBootDriverCallback.c)
 *     ExInitLicenseCallback @ 0x1407D4EA8 (ExInitLicenseCallback.c)
 *     KiFilterFiberContext @ 0x140A1BBA0 (KiFilterFiberContext.c)
 *     EtwpInitialize @ 0x140A42414 (EtwpInitialize.c)
 *     PiCslInitialize @ 0x140A53224 (PiCslInitialize.c)
 *     ExpInitializeCallbacks @ 0x140A6E368 (ExpInitializeCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140A6FE7C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140A70AB0 (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x140A733CC (IopInitializeSessionNotifications.c)
 *     PopSetupKsrCallbacks @ 0x140A73FF0 (PopSetupKsrCallbacks.c)
 *     PiKsrNotifyInitialize @ 0x140A91350 (PiKsrNotifyInitialize.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExpUnlockCallbackListExclusive @ 0x1403A666C (ExpUnlockCallbackListExclusive.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ObOpenObjectByName @ 0x140655C50 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
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
  NTSTATUS inserted; // eax
  PVOID Object; // [rsp+60h] [rbp-1h] BYREF
  __int128 v16; // [rsp+68h] [rbp+7h] BYREF
  __m128i v17; // [rsp+78h] [rbp+17h]
  __int128 v18; // [rsp+88h] [rbp+27h]
  HANDLE Handle; // [rsp+D0h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = *(_OWORD *)&ObjectAttributes->Length;
  v9 = 0LL;
  v17 = *(__m128i *)&ObjectAttributes->ObjectName;
  Handle = 0LL;
  v16 = v7;
  v10 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v17.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v17, 8)) | 0x200;
  v18 = v10;
  if ( v17.m128i_i64[0] )
  {
    v11 = ObOpenObjectByName((__int64)&v16, (__int64)ExCallbackObjectType, 0, 0LL, 0, 0LL, (__int64)&Handle);
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
    v12 = ObCreateObjectEx(0, (_DWORD)ExCallbackObjectType, (unsigned int)&v16, 0);
    if ( v12 < 0 )
      return v12;
    MEMORY[0] = 1819042115;
    MEMORY[0x20] = AllowMultipleCallbacks;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[8] = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
    if ( *(__int64 **)qword_140C19428 != &ExpCallbackListHead )
      __fastfail(3u);
    MEMORY[0x30] = qword_140C19428;
    MEMORY[0x28] = &ExpCallbackListHead;
    *(_QWORD *)qword_140C19428 = 40LL;
    qword_140C19428 = 40LL;
    ExpUnlockCallbackListExclusive((__int64)CurrentThread);
    inserted = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&Handle);
    v9 = Handle;
    v12 = inserted;
  }
  if ( v12 >= 0 )
  {
LABEL_6:
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(v9, 0, ExCallbackObjectType, 0, &Object, 0LL);
    ZwClose(v9);
    if ( v12 >= 0 )
      *CallbackObject = (PCALLBACK_OBJECT)Object;
  }
  return v12;
}
