/*
 * XREFs of RtlNtStatusToDosError @ 0x180051950
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x1800016FC (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x1800019A0 (EtwReplyNotification.c)
 *     RtlGetUserInfoHeap @ 0x180001BC0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlSizeHeap @ 0x180024160 (RtlSizeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     EtwpSetProviderTraits @ 0x180042B48 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042ECC (EtwpRegisterProvider.c)
 *     EtwpStartUmLogger @ 0x1800482B0 (EtwpStartUmLogger.c)
 *     EtwpStopUmLogger @ 0x18004BEF0 (EtwpStopUmLogger.c)
 *     EtwpFinalizeLogFileHeader @ 0x18004C0E8 (EtwpFinalizeLogFileHeader.c)
 *     EtwpGenerateFileName @ 0x18004C468 (EtwpGenerateFileName.c)
 *     EtwpEventWriteFull @ 0x180050388 (EtwpEventWriteFull.c)
 *     EtwLogTraceEvent @ 0x180050CA0 (EtwLogTraceEvent.c)
 *     EtwSendNotification @ 0x180051690 (EtwSendNotification.c)
 *     EtwTraceMessageVa @ 0x1800517F0 (EtwTraceMessageVa.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800518B0 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwEventActivityIdControl @ 0x18005CC10 (EtwEventActivityIdControl.c)
 *     RtlValidateHeap @ 0x18005F680 (RtlValidateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180061ED0 (EtwEventWriteNoRegistration.c)
 *     EtwWriteUMSecurityEvent @ 0x18007C8F0 (EtwWriteUMSecurityEvent.c)
 *     EtwpTrackProviderBinary @ 0x180081E38 (EtwpTrackProviderBinary.c)
 *     EtwpProviderArrivalCallback @ 0x180087974 (EtwpProviderArrivalCallback.c)
 *     EtwSetMark @ 0x18008AEC0 (EtwSetMark.c)
 *     EtwRegisterSecurityProvider @ 0x18008C5A0 (EtwRegisterSecurityProvider.c)
 *     RtlCompactHeap @ 0x1800F23B0 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2E30 (RtlSetUserFlagsHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800F89A0 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8D5C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F91A4 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F93AC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F96A0 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F9844 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9990 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9F14 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800FA0E0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA274 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FA3F8 (RtlDebugWalkHeap.c)
 *     EtwEventWriteString @ 0x180110700 (EtwEventWriteString.c)
 *     EtwpUseDescriptorType @ 0x180110930 (EtwpUseDescriptorType.c)
 *     EtwTraceEventInstance @ 0x180110A80 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x180110C20 (EtwpBufferingModeFlush.c)
 *     EtwpIncrementUmLoggerFile @ 0x180111000 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1801114C0 (EtwpUpdateUmLogger.c)
 * Callees:
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  unsigned __int32 v1; // edx
  struct _TEB *v2; // rax
  ULONG result; // eax
  unsigned int v4; // eax
  unsigned int v5; // r9d
  __int64 v6; // r8
  unsigned int v7; // ecx
  unsigned int v8; // r10d
  int v9; // eax

  v1 = Status;
  v2 = NtCurrentTeb();
  if ( v2 )
    v2->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  result = Status;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) != 0x70000 || ((HIBYTE(Status) - 128) & 0xFFFFFFBF) != 0 )
    {
      if ( (Status & 0xF0000000) == 0xD0000000 )
        v1 = Status & 0xCFFFFFFF;
      v4 = 0;
      v5 = 313;
      do
      {
        v6 = (v5 + v4) >> 1;
        v7 = RtlpRunTable[2 * v6];
        v8 = v1 - v7;
        if ( v1 >= v7 )
        {
          if ( v8 < (unsigned __int8)byte_180130554[8 * v6] )
          {
            v9 = (unsigned __int16)word_180130556[4 * v6];
            if ( byte_180130555[8 * v6] == 1 )
              return (unsigned __int16)RtlpStatusTable[v8 + v9];
            else
              return (unsigned __int16)RtlpStatusTable[2 * v8 + v9] | ((unsigned __int16)RtlpStatusTable[2 * v8 + 1 + v9] << 16);
          }
          v4 = v6 + 1;
        }
        else
        {
          v5 = v6 - 1;
        }
      }
      while ( v4 <= v5 );
      if ( (v1 & 0xFFFF0000) == 0xC0010000 )
        return (unsigned __int16)v1;
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v1);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      return 317;
    }
    else
    {
      return (unsigned __int16)v1;
    }
  }
  return result;
}
