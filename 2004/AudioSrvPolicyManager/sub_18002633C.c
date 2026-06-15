/*
 * XREFs of sub_18002633C @ 0x18002633C
 * Callers:
 *     PbmReportAppInteractivityChange @ 0x1800230D0 (PbmReportAppInteractivityChange.c)
 *     PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x180023150 (PbmSwitchSoftNonInteractiveAppsToHardNonInteractive.c)
 *     PbmReportHostedAppStateChange @ 0x1800231A0 (PbmReportHostedAppStateChange.c)
 *     PbmReportAppClosing @ 0x180023230 (PbmReportAppClosing.c)
 *     PbmAllowMediaPlaybackForApp @ 0x1800232A0 (PbmAllowMediaPlaybackForApp.c)
 *     PbmReportApplicationState @ 0x180024200 (PbmReportApplicationState.c)
 *     PbmLaunchBackgroundTask @ 0x1800242E0 (PbmLaunchBackgroundTask.c)
 *     TS_SessionGetAudioProtocol @ 0x18002ACB0 (TS_SessionGetAudioProtocol.c)
 *     TS_RegisterAudioProtocolNotification @ 0x18002AD60 (TS_RegisterAudioProtocolNotification.c)
 *     TS_UnregisterAudioProtocolNotification @ 0x18002ADC0 (TS_UnregisterAudioProtocolNotification.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_18000FD24 @ 0x18000FD24 (sub_18000FD24.c)
 *     sub_18001A9E0 @ 0x18001A9E0 (sub_18001A9E0.c)
 *     sub_1800216CC @ 0x1800216CC (sub_1800216CC.c)
 *     sub_180025690 @ 0x180025690 (sub_180025690.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     memset @ 0x18003A7D8 (memset.c)
 */

__int64 __fastcall sub_18002633C(RPC_BINDING_HANDLE BindingHandle, int *a2, _DWORD *a3)
{
  int v6; // r14d
  unsigned int LastError; // ebx
  __int64 v8; // r8
  int v9; // edi
  HANDLE CurrentThread; // rax
  int v11; // eax
  LPVOID TokenInformation; // [rsp+20h] [rbp-79h]
  int v14; // [rsp+30h] [rbp-69h] BYREF
  void *TokenHandle; // [rsp+38h] [rbp-61h] BYREF
  _DWORD RpcCallAttributes[28]; // [rsp+40h] [rbp-59h] BYREF

  memset(&RpcCallAttributes[2], 0, 0x68uLL);
  TokenHandle = 0LL;
  v6 = 0;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_BYTE *)off_18004F000 + 28) & 0x10) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800216CC(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_180044DE8, BindingHandle);
  }
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  LastError = RpcServerInqCallAttributesW(BindingHandle, RpcCallAttributes);
  if ( !LastError )
  {
    v9 = RpcCallAttributes[16];
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_BYTE *)off_18004F000 + 28) & 0x10) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 4u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xBu, &stru_180044DE8, RpcCallAttributes[16]);
    }
    LastError = RpcImpersonateClient(BindingHandle);
    if ( !LastError )
    {
      v6 = 1;
      CurrentThread = GetCurrentThread();
      if ( !OpenThreadToken(CurrentThread, 8u, 1, &TokenHandle) )
      {
        LastError = GetLastError();
        goto LABEL_19;
      }
      LastError = sub_18001A9E0(TokenHandle, 0LL, 0LL, 0LL, &v14);
      if ( !LastError )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_BYTE *)off_18004F000 + 28) & 0x10) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 5u )
        {
          LODWORD(TokenInformation) = v14;
          sub_18000FD24(*((_QWORD *)off_18004F000 + 2), LastError + 12, &stru_180044DE8, v9, TokenInformation);
        }
        v11 = v14;
        *a2 = v9;
        *a3 = v11;
LABEL_19:
        if ( !LastError )
          goto LABEL_24;
      }
    }
  }
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_BYTE *)off_18004F000 + 28) & 0x10) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 2u )
  {
    sub_180025690(*((_QWORD *)off_18004F000 + 2), 0xDu, v8, LastError);
  }
LABEL_24:
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v6 )
    RpcRevertToSelf();
  return LastError;
}
