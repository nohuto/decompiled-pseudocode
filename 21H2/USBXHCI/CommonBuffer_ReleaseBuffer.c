/*
 * XREFs of CommonBuffer_ReleaseBuffer @ 0x1C000182C
 * Callers:
 *     TR_WdfEvtCleanupCallback @ 0x1C0001700 (TR_WdfEvtCleanupCallback.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0015FA0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_EvaluateContextCompletion @ 0x1C0018940 (Endpoint_EvaluateContextCompletion.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C0019034 (XilCommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003725C (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0037764 (XilEndpoint_FreeStreamContextArray.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0038C00 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 *     Endpoint_OnCancelEndpointConfigureCompletion_EpDropped @ 0x1C0038DA0 (Endpoint_OnCancelEndpointConfigureCompletion_EpDropped.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C0039230 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C00393F0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     TR_AcquireSecureSegments @ 0x1C003F134 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C003F59C (TR_CreateSecureObject.c)
 *     Crashdump_UcxEvtFreeDumpData @ 0x1C004AF60 (Crashdump_UcxEvtFreeDumpData.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C004B0C0 (Crashdump_UcxEvtGetDumpData.c)
 *     XilCoreCommand_FreeResources @ 0x1C00508AC (XilCoreCommand_FreeResources.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0050CC8 (XilCoreDeviceSlot_FreeResources.c)
 *     XilCoreUsbDevice_FreeResources @ 0x1C0050DA8 (XilCoreUsbDevice_FreeResources.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x1C00014F8 (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C004FDB8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 */

void __fastcall CommonBuffer_ReleaseBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbx

  v2 = *(_DWORD *)(a2 + 80);
  switch ( v2 )
  {
    case 1:
      v4 = a1 + 88;
      *(_BYTE *)(a1 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
      XilCoreCommonBuffer_ReleaseBufferInternal(v4, a2);
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 16), *(_BYTE *)(v4 + 25));
      return;
    case 2:
LABEL_7:
      ExFreePoolWithTag((PVOID)a2, 0x49434858u);
      return;
    case 3:
      SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(*(_QWORD *)a1 + 104LL), *(_QWORD *)(a2 + 88));
      goto LABEL_7;
  }
}
