/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0071A84
 * Callers:
 *     GenerateMouseMove @ 0x1C0070470 (GenerateMouseMove.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C009E310 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0062C68 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1C0071C58 (ApiSetEditionUpdateCursorAsync.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C01A4E88 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(_DWORD *a1, int a2)
{
  _DWORD *v3; // r14
  CInputThread *v4; // rdi
  int v5; // ebx
  bool v6; // di
  struct tagPOINT v7; // rax
  int v8; // r8d
  int v9; // r9d
  BOOL v10; // [rsp+30h] [rbp-49h] BYREF
  __int128 v11; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+48h] [rbp-31h]
  struct tagPOINT v13; // [rsp+50h] [rbp-29h] BYREF

  v3 = a1;
  if ( a1[2] != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v6 = 1;
  if ( (a2 & 4) == 0 )
  {
    v4 = gpInputThread;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v5 = *((_DWORD *)v4 + 4);
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    if ( v5 == 2 )
      v6 = 0;
  }
  if ( (a2 & 1) != 0 )
  {
    a1 = gpsi;
    *(_QWORD *)&v11 = *((_QWORD *)gpsi + 620);
    *(_QWORD *)(v3 + 17) = v11;
    v3[19] = 18;
    *((_QWORD *)gpsi + 619) = 0LL;
    v7 = gptCursorAsync;
    *((_QWORD *)v3 + 439) = 0LL;
    *((struct tagPOINT *)v3 + 438) = v7;
  }
  if ( (a2 & 2) != 0 )
  {
    if ( gpqCursor )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    RIMLockExclusive((__int64)(v3 + 972));
    *((_BYTE *)v3 + 3904) = 1;
    *((_QWORD *)v3 + 487) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 972, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 64LL) )
  {
    v10 = v6;
    LODWORD(v11) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C024C960,
      (unsigned int)&unk_1C02215C2,
      v8,
      v9,
      (__int64)&v11,
      (__int64)&v10);
  }
  if ( v6 )
  {
    v12 = 0LL;
    v11 = 0LL;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v13, (__int64)&v11, 4, 2304);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
    CMouseProcessor::SynthesizeMouse((CMouseProcessor *)v3, (struct tagPOINT)&v13, 0LL, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  }
  else
  {
    ApiSetEditionUpdateCursorAsync();
  }
}
