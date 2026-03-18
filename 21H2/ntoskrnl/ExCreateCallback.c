/*
 * XREFs of ExCreateCallback @ 0x1406E0E40
 * Callers:
 *     HvlPhase2Initialize @ 0x1403DE4F0 (HvlPhase2Initialize.c)
 *     DifExCreateCallbackWrapper @ 0x140607B20 (DifExCreateCallbackWrapper.c)
 *     HaliInitPowerManagement @ 0x14081E1F0 (HaliInitPowerManagement.c)
 *     KeRegisterProcessorChangeCallback @ 0x140858460 (KeRegisterProcessorChangeCallback.c)
 *     HalpMiscInitializeKsr @ 0x140858BAC (HalpMiscInitializeKsr.c)
 *     IoRegisterBootDriverCallback @ 0x140863630 (IoRegisterBootDriverCallback.c)
 *     ExInitLicenseCallback @ 0x140864CD4 (ExInitLicenseCallback.c)
 *     KiFilterFiberContext @ 0x140AD6B90 (KiFilterFiberContext.c)
 *     PiCslInitialize @ 0x140B01758 (PiCslInitialize.c)
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 *     ExpInitializeCallbacks @ 0x140B28EB0 (ExpInitializeCallbacks.c)
 *     SshpAlpcInitialize @ 0x140B2984C (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B2B9FC (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B2CD08 (PopUmpoInitializeMonitorChannel.c)
 *     IopInitializeSessionNotifications @ 0x140B3059C (IopInitializeSessionNotifications.c)
 *     PopSetupKsrCallbacks @ 0x140B3129C (PopSetupKsrCallbacks.c)
 *     PiKsrNotifyInitialize @ 0x140B509E0 (PiKsrNotifyInitialize.c)
 * Callees:
 *     ExpUnlockCallbackListExclusive @ 0x140257E3C (ExpUnlockCallbackListExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ObOpenObjectByName @ 0x14067C970 (ObOpenObjectByName.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall ExCreateCallback(
        PCALLBACK_OBJECT *CallbackObject,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN Create,
        BOOLEAN AllowMultipleCallbacks)
{
  struct _KTHREAD *CurrentThread; // rdi
  __m128i v5; // xmm1
  __int128 v8; // xmm0
  __int128 v10; // xmm0
  NTSTATUS inserted; // ebx
  char *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  PVOID Object; // [rsp+50h] [rbp-9h] BYREF
  __int128 v17; // [rsp+58h] [rbp-1h] BYREF
  __m128i v18; // [rsp+68h] [rbp+Fh]
  __int128 v19; // [rsp+78h] [rbp+1Fh]
  HANDLE Handle; // [rsp+C8h] [rbp+6Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = *(__m128i *)&ObjectAttributes->ObjectName;
  v8 = *(_OWORD *)&ObjectAttributes->Length;
  Handle = 0LL;
  v18 = v5;
  Object = 0LL;
  v17 = v8;
  v10 = *(_OWORD *)&ObjectAttributes->SecurityDescriptor;
  v18.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8)) | 0x200;
  v19 = v10;
  if ( v5.m128i_i64[0] )
  {
    inserted = ObOpenObjectByName((__int64)&v17, (__int64)ExCallbackObjectType, 0, 0LL, 0, 0LL, (__int64)&Handle);
    if ( inserted >= 0 )
    {
LABEL_7:
      Object = 0LL;
      inserted = ObReferenceObjectByHandle(Handle, 0, ExCallbackObjectType, 0, &Object, 0LL);
      ZwClose(Handle);
      if ( inserted >= 0 )
        *CallbackObject = (PCALLBACK_OBJECT)Object;
      return inserted;
    }
  }
  else
  {
    inserted = -1073741823;
  }
  if ( Create )
  {
    inserted = ObCreateObjectEx(0, (_DWORD)ExCallbackObjectType, (unsigned int)&v17, 0);
    if ( inserted >= 0 )
    {
      v12 = (char *)Object;
      *(_DWORD *)Object = 1819042115;
      v12[32] = AllowMultipleCallbacks;
      *((_QWORD *)v12 + 3) = v12 + 16;
      *((_QWORD *)v12 + 2) = v12 + 16;
      *((_QWORD *)v12 + 1) = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpCallbackListLock, 0LL);
      v13 = (_QWORD *)qword_140C15888;
      v14 = v12 + 40;
      if ( *(__int64 **)qword_140C15888 != &ExpCallbackListHead )
        __fastfail(3u);
      *((_QWORD *)v12 + 6) = qword_140C15888;
      *v14 = &ExpCallbackListHead;
      *v13 = v14;
      qword_140C15888 = (__int64)(v12 + 40);
      ExpUnlockCallbackListExclusive((__int64)CurrentThread);
      inserted = ObInsertObjectEx(v12, 0LL, 0, 0LL, (__int64)&Handle);
      if ( inserted >= 0 )
        goto LABEL_7;
    }
  }
  return inserted;
}
