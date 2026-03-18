/*
 * XREFs of SecureChannel_SendRequestSynchronously @ 0x1C004F778
 * Callers:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0005050 (TR_AddTRBRangeToSecureTransferRing.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0017C0C (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     XilCommand_AllocateSecureResources @ 0x1C002EF40 (XilCommand_AllocateSecureResources.c)
 *     XilCommand_CreateSecureObject @ 0x1C002F0D4 (XilCommand_CreateSecureObject.c)
 *     XilCommand_FreeSecureResources @ 0x1C002F288 (XilCommand_FreeSecureResources.c)
 *     XilCommand_InitializeSecureResources @ 0x1C002F3E8 (XilCommand_InitializeSecureResources.c)
 *     XilCommand_SendAbortRingCommandRequest @ 0x1C002F548 (XilCommand_SendAbortRingCommandRequest.c)
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x1C002F6A8 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C002F990 (XilCommand_SendAdvanceDequeuePointerRequest.c)
 *     XilCommand_SendQueryIsRingRunningRequest @ 0x1C002FAF4 (XilCommand_SendQueryIsRingRunningRequest.c)
 *     XilCommand_SendRequestToRingDoorbell @ 0x1C002FC64 (XilCommand_SendRequestToRingDoorbell.c)
 *     XilDeviceSlot_AllocateSecureResources @ 0x1C0035A04 (XilDeviceSlot_AllocateSecureResources.c)
 *     XilDeviceSlot_CreateSecureObject @ 0x1C0035B7C (XilDeviceSlot_CreateSecureObject.c)
 *     XilDeviceSlot_FreeSecureResources @ 0x1C0035D04 (XilDeviceSlot_FreeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureResources @ 0x1C0035E88 (XilDeviceSlot_InitializeSecureResources.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0035FF4 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 *     XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C00361A0 (XilDeviceSlot_SendClearDeviceContextRequest.c)
 *     XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0036308 (XilDeviceSlot_SendQueryEndpointContextInfoRequest.c)
 *     XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0036494 (XilDeviceSlot_SendQuerySlotContextInfoRequest.c)
 *     XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C0036618 (XilDeviceSlot_SendSetDeviceContextRequest.c)
 *     XilEndpoint_CreateSecureObject @ 0x1C0036A80 (XilEndpoint_CreateSecureObject.c)
 *     XilEndpoint_DestroySecureObject @ 0x1C0036C60 (XilEndpoint_DestroySecureObject.c)
 *     XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C0036E2C (XilEndpoint_SendRequestToAllocateSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToFreeSecureStreamContextArray @ 0x1C0036F80 (XilEndpoint_SendRequestToFreeSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0037048 (XilEndpoint_SendRequestToGetSecureStreamContextArray.c)
 *     XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0037250 (XilEndpoint_SendRequestToSetSecureStreamContextArray.c)
 *     Register_MapSecureMmio @ 0x1C003C164 (Register_MapSecureMmio.c)
 *     Register_ReadSecureMmio @ 0x1C003C240 (Register_ReadSecureMmio.c)
 *     Register_UnmapSecureMmio @ 0x1C003C55C (Register_UnmapSecureMmio.c)
 *     Register_WriteSecureMmio @ 0x1C003C624 (Register_WriteSecureMmio.c)
 *     TR_AcquireSecureSegments @ 0x1C003E014 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C003E52C (TR_CreateSecureObject.c)
 *     TR_FreeSecureTransferSegments @ 0x1C003EA5C (TR_FreeSecureTransferSegments.c)
 *     TR_InitializeTransferSegment @ 0x1C003EB98 (TR_InitializeTransferSegment.c)
 *     TR_SendCompleteStageRequest @ 0x1C003EDCC (TR_SendCompleteStageRequest.c)
 *     XilUsbDevice_CreateSecureObject @ 0x1C0044C18 (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C0044DC0 (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C0044F60 (XilUsbDevice_SendRequestToRingDoorbell.c)
 *     SecureDmaEnabler_Unmap @ 0x1C004F578 (SecureDmaEnabler_Unmap.c)
 *     Controller_CreateSecureObject @ 0x1C007444C (Controller_CreateSecureObject.c)
 *     Controller_DestroySecureObject @ 0x1C0074504 (Controller_DestroySecureObject.c)
 *     Register_CreateSecureObject @ 0x1C0076790 (Register_CreateSecureObject.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C0077014 (SecureDmaEnabler_CreateSecureObject.c)
 *     SecureDmaEnabler_MapMemory @ 0x1C0077114 (SecureDmaEnabler_MapMemory.c)
 * Callees:
 *     Controller_LowerAndTrackIrql @ 0x1C00052C8 (Controller_LowerAndTrackIrql.c)
 *     Controller_RaiseAndTrackIrql @ 0x1C0005358 (Controller_RaiseAndTrackIrql.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C004F660 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x1C004F6F8 (McTemplateK0qqx_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_DP @ 0x1C004FAA4 (WPP_RECORDER_SF_DP.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C004FB7C (WPP_RECORDER_SF_Ld.c)
 */

__int64 __fastcall SecureChannel_SendRequestSynchronously(__int64 a1, GUID *a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rdx
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v10; // rcx
  unsigned int Data1; // eax
  __int64 v12; // rax
  char v13; // r13
  __int64 v14; // rcx
  int v15; // edx
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *BugCheckParameter4; // [rsp+20h] [rbp-71h]
  char v24; // [rsp+50h] [rbp-41h]
  int v25; // [rsp+54h] [rbp-3Dh]
  unsigned int v26; // [rsp+58h] [rbp-39h]
  _QWORD v27[2]; // [rsp+80h] [rbp-11h] BYREF
  int v28; // [rsp+90h] [rbp-1h]
  int v29; // [rsp+94h] [rbp+3h]
  GUID v30; // [rsp+98h] [rbp+7h] BYREF

  v6 = 0LL;
  HIDWORD(v27[0]) = 0;
  v29 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v24 = 0;
  v10 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
  Data1 = a2[2].Data1;
  a2[1].Data1 = v10;
  v26 = v10;
  v25 = Data1;
  v30 = GUID_NULL;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v12 )
    {
      EtwActivityIdControl(3u, a2);
      v10 = v26;
    }
    v30 = *a2;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqqq_EtwWriteTransfer(v10, v6, a2, a2[2].Data1, a3, a5, v10);
    v13 = 1;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    LODWORD(v6) = 0;
  }
  else
  {
    v13 = 0;
  }
  v27[0] = 1LL;
  v29 = 0;
  v27[1] = a2;
  v28 = a3;
  if ( KeGetCurrentIrql() == 2 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    if ( !*(_QWORD *)(v14 + 8) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(v14 + 16), v6, 19, 13, (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids);
      }
      KeBugCheckEx(0x144u, 4uLL, 0LL, 2uLL, 3uLL);
    }
    Controller_LowerAndTrackIrql(*(_QWORD **)(v14 + 8));
    v24 = 1;
  }
  BugCheckParameter4 = v27;
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01023 + 3592))(
          WdfDriverGlobals,
          *(_QWORD *)a1,
          0LL,
          6078464LL);
  if ( v24 )
    Controller_RaiseAndTrackIrql(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL));
  if ( v16 >= 0 )
  {
    if ( a5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DP(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v15, v17, v18, (unsigned int)v27, a5, 0);
      v16 = -1073741306;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
      v15,
      19,
      14,
      (__int64)&WPP_6c69e57299f2371bca16af19cce5473c_Traceguids,
      v16);
  }
  if ( v16 >= 0 )
  {
    v19 = v25;
  }
  else
  {
    v19 = v25;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v15, v17, v18, (_DWORD)BugCheckParameter4, v25, v16);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( v13 )
  {
    v20 = 1000000000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0qqx_EtwWriteTransfer(v21, v20 % *(_QWORD *)(a1 + 16), &v30, v19, v26, v20 / *(_QWORD *)(a1 + 16));
  }
  return (unsigned int)v16;
}
