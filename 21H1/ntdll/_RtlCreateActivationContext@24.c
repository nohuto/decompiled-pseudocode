/*
 * XREFs of _RtlCreateActivationContext@24 @ 0x4B2E3290
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlpInitializeAssemblyStorageMap@12 @ 0x4B2E33A0 (_RtlpInitializeAssemblyStorageMap@12.c)
 *     _RtlpValidateActivationContextData@12 @ 0x4B2E33ED (_RtlpValidateActivationContextData@12.c)
 *     @RtlpPlaceActivationContextOnLiveList@4 @ 0x4B33DA1A (@RtlpPlaceActivationContextOnLiveList@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

NTSTATUS __cdecl RtlCreateActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT_DATA ActivationContextData,
        ULONG ExtraBytes,
        PACTIVATION_CONTEXT_NOTIFY_ROUTINE NotificationRoutine,
        PVOID NotificationContext,
        PACTIVATION_CONTEXT *ActivationContext)
{
  int v6; // ebx
  _DWORD *v7; // edi
  NTSTATUS v8; // esi
  _DWORD *Heap; // eax
  _ACTIVATION_CONTEXT *v10; // ebx
  SIZE_T v12; // [esp-8h] [ebp-10h]

  v7 = 0;
  if ( ActivationContextData == (PACTIVATION_CONTEXT_DATA)"Actx " )
  {
    DbgPrintEx(51, 0, (int)"SXS: %s() passed the empty activation context data\n", (int)"RtlCreateActivationContext");
    return -1073741811;
  }
  if ( ActivationContext )
    *ActivationContext = 0;
  HIDWORD(v12) = v6;
  if ( !Flags && ActivationContextData && ExtraBytes <= 0x10000 && ActivationContext )
  {
    v8 = RtlpValidateActivationContextData(ActivationContext);
    if ( v8 < 0 )
      return v8;
    LODWORD(v12) = ExtraBytes + 304;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    v7 = Heap;
    if ( !Heap )
      return -1073741801;
    v10 = (_ACTIVATION_CONTEXT *)(Heap + 1);
    *Heap = 1733124929;
    v8 = RtlpInitializeAssemblyStorageMap(
           *(ULONG *)((char *)&ActivationContextData->FormatVersion + ActivationContextData->AssemblyRosterOffset) <= 0x20
         ? Heap + 27
         : 0);
    if ( v8 >= 0 )
    {
      v10->Flags = 0;
      v10->NotificationContext = ActivationContextData;
      v10->SentNotifications[0] = (ULONG)NotificationRoutine;
      v10->SentNotifications[1] = (ULONG)NotificationContext;
      v10->RefCount = 1;
      memset(v7 + 8, 0, 0x20u);
      memset(&v10->DisabledNotifications[2], 0, 0x20u);
      memset(&v10[1].NotificationRoutine, 0, 0x40u);
      v10[1].ActivationContextData = 0;
      if ( g_SxsKeepActivationContextsAlive )
        RtlpPlaceActivationContextOnLiveList(v10);
      v8 = 0;
      *ActivationContext = v10;
      return v8;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  return v8;
}
