/*
 * XREFs of _RtlNtStatusToDosError@4 @ 0x4B2DAB70
 * Callers:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _EtwSetMark@16 @ 0x4B2AA6D0 (_EtwSetMark@16.c)
 *     _EtwEventWriteNoRegistration@16 @ 0x4B2ABD30 (_EtwEventWriteNoRegistration@16.c)
 *     _EtwpSetProviderTraits@16 @ 0x4B2B0AAD (_EtwpSetProviderTraits@16.c)
 *     _EtwpRegisterProvider@12 @ 0x4B2B0C39 (_EtwpRegisterProvider@12.c)
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     @RtlpReAllocateHeap@16 @ 0x4B2C2870 (@RtlpReAllocateHeap@16.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlSetLastWin32ErrorAndNtStatusFromNtStatus@4 @ 0x4B2DAAE0 (_RtlSetLastWin32ErrorAndNtStatusFromNtStatus@4.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     _EtwEventActivityIdControl@8 @ 0x4B2DC160 (_EtwEventActivityIdControl@8.c)
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     _RtlGetUserInfoHeap@20 @ 0x4B2E37E0 (_RtlGetUserInfoHeap@20.c)
 *     _RtlSetUserValueHeap@16 @ 0x4B2E3990 (_RtlSetUserValueHeap@16.c)
 *     _EtwpEventWriteFull@44 @ 0x4B2E3CCF (_EtwpEventWriteFull@44.c)
 *     _EtwTraceMessageVa@24 @ 0x4B2EA130 (_EtwTraceMessageVa@24.c)
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 *     _EtwpProviderArrivalCallback@8 @ 0x4B2F1DFF (_EtwpProviderArrivalCallback@8.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlCompactHeap@8 @ 0x4B3567C0 (_RtlCompactHeap@8.c)
 *     _RtlSetUserFlagsHeap@20 @ 0x4B357160 (_RtlSetUserFlagsHeap@20.c)
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlDebugCompactHeap@8 @ 0x4B35F26E (_RtlDebugCompactHeap@8.c)
 *     _RtlDebugCreateTagHeap@16 @ 0x4B35F5CA (_RtlDebugCreateTagHeap@16.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlDebugGetUserInfoHeap@20 @ 0x4B35FA2C (_RtlDebugGetUserInfoHeap@20.c)
 *     _RtlDebugQueryTagHeap@20 @ 0x4B35FB69 (_RtlDebugQueryTagHeap@20.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 *     _RtlDebugSetUserFlagsHeap@20 @ 0x4B36015A (_RtlDebugSetUserFlagsHeap@20.c)
 *     _RtlDebugSetUserValueHeap@16 @ 0x4B3602B5 (_RtlDebugSetUserValueHeap@16.c)
 *     _RtlDebugSizeHeap@12 @ 0x4B3603F5 (_RtlDebugSizeHeap@12.c)
 *     _RtlDebugWalkHeap@8 @ 0x4B360528 (_RtlDebugWalkHeap@8.c)
 *     _EtwEventWriteString@24 @ 0x4B380420 (_EtwEventWriteString@24.c)
 *     _EtwRegisterSecurityProvider@0 @ 0x4B380690 (_EtwRegisterSecurityProvider@0.c)
 *     _EtwWriteUMSecurityEvent@16 @ 0x4B3806D0 (_EtwWriteUMSecurityEvent@16.c)
 *     _EtwpTrackProviderBinary@8 @ 0x4B3808C0 (_EtwpTrackProviderBinary@8.c)
 *     _EtwpUseDescriptorType@16 @ 0x4B380958 (_EtwpUseDescriptorType@16.c)
 *     _EtwLogTraceEvent@12 @ 0x4B380CF0 (_EtwLogTraceEvent@12.c)
 *     _EtwTraceEventInstance@20 @ 0x4B380D50 (_EtwTraceEventInstance@20.c)
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 *     _EtwpIncrementUmLoggerFile@16 @ 0x4B381859 (_EtwpIncrementUmLoggerFile@16.c)
 *     _EtwpUpdateUmLogger@16 @ 0x4B3819CB (_EtwpUpdateUmLogger@16.c)
 *     _EtwReplyNotification@4 @ 0x4B382400 (_EtwReplyNotification@4.c)
 *     _EtwSendNotification@20 @ 0x4B382440 (_EtwSendNotification@20.c)
 *     _EtwpReceiveReplyDataBlock@36 @ 0x4B382527 (_EtwpReceiveReplyDataBlock@36.c)
 *     _EtwpGenerateFileName@12 @ 0x4B382A61 (_EtwpGenerateFileName@12.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  struct _TEB *v1; // eax
  ULONG v2; // edx
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v8; // ecx

  v1 = NtCurrentTeb();
  v2 = Status;
  if ( v1 )
    v1->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  if ( (Status & 0x20000000) == 0 )
  {
    if ( (Status & 0xFF0000) == 0x70000 && (HIBYTE(Status) == 192 || HIBYTE(Status) == 128) )
    {
      return (unsigned __int16)v2;
    }
    else
    {
      if ( (Status & 0xF0000000) == 0xD0000000 )
        v2 = Status & 0xCFFFFFFF;
      v3 = 0;
      v4 = 306;
      do
      {
        v5 = (v4 + v3) >> 1;
        v6 = RtlpRunTable[2 * v5];
        v7 = v2 - v6;
        if ( v2 < v6 )
        {
          v4 = v5 - 1;
        }
        else
        {
          if ( v7 < (unsigned __int8)byte_4B28A974[8 * v5] )
          {
            v8 = (unsigned __int16)word_4B28A976[4 * v5];
            if ( byte_4B28A975[8 * v5] == 1 )
              return (unsigned __int16)RtlpStatusTable[v8 + v7];
            else
              return (unsigned __int16)RtlpStatusTable[2 * v7 + v8] | ((unsigned __int16)word_4B288B62[2 * v7 + v8] << 16);
          }
          v3 = v5 + 1;
        }
      }
      while ( v3 <= v4 );
      if ( (v2 & 0xFFFF0000) == 0xC0010000 )
        return (unsigned __int16)v2;
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v2);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      return 317;
    }
  }
  return v2;
}
