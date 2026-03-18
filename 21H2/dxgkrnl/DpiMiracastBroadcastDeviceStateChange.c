/*
 * XREFs of DpiMiracastBroadcastDeviceStateChange @ 0x1C038C97C
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0061EE0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0062480 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0062950 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0063340 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C038D50C (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x1C00646C4 (McTemplateK0xqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastBroadcastDeviceStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int updated; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
    McTemplateK0xqq_EtwWriteTransfer(a1, a2, a3, *(_QWORD *)(a1 + 96), *(_DWORD *)(a1 + 408), *(_DWORD *)(a1 + 416));
  v4 = *(_QWORD *)(a1 + 592);
  if ( !v4 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x214uLL, 0x74727044u);
    *(_QWORD *)(a1 + 592) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741801LL;
      v7 = 6LL;
LABEL_9:
      WdLogSingleEntry1(v7, v6);
      return (unsigned int)v6;
    }
    *PoolWithTag = 1;
    memset((void *)(*(_QWORD *)(a1 + 592) + 4LL), 0, 0x208uLL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 592) + 4LL);
    DestinationString.MaximumLength = 518;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a1 + 160));
    v4 = *(_QWORD *)(a1 + 592);
  }
  *(_DWORD *)(v4 + 524) = *(_DWORD *)(a1 + 408);
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 528LL) = *(_DWORD *)(a1 + 416);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
              *(_QWORD *)(a1 + 592),
              532LL,
              0LL,
              a1 + 420,
              0,
              0);
  v6 = updated;
  if ( updated < 0 )
  {
    v7 = 2LL;
    goto LABEL_9;
  }
  return (unsigned int)v6;
}
