/*
 * XREFs of ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C00749C4
 * Callers:
 *     GenerateMouseMove @ 0x1C0074450 (GenerateMouseMove.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C00B0270 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C006CC98 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0070254 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C007477C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0074948 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ApiSetEditionUpdateCursorAsync @ 0x1C0074B98 (ApiSetEditionUpdateCursorAsync.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C019F128 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MoveMouseWindowManagement(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  _DWORD *v5; // r14
  CInputThread *v6; // rdi
  int v7; // ebx
  bool v8; // di
  struct tagPOINT v9; // rax
  int v10; // r8d
  int v11; // r9d
  BOOL v12; // [rsp+30h] [rbp-49h] BYREF
  __int128 v13; // [rsp+38h] [rbp-41h] BYREF
  __int64 v14; // [rsp+48h] [rbp-31h]
  struct tagPOINT v15; // [rsp+50h] [rbp-29h] BYREF

  v4 = a2;
  v5 = a1;
  if ( a1[2] != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v8 = 1;
  if ( (v4 & 4) == 0 )
  {
    v6 = gpInputThread;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v6, 0LL);
    v7 = *((_DWORD *)v6 + 4);
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
    if ( v7 == 2 )
      v8 = 0;
  }
  if ( (v4 & 1) != 0 )
  {
    a1 = gpsi;
    *(_QWORD *)&v13 = *((_QWORD *)gpsi + 620);
    *(_QWORD *)(v5 + 17) = v13;
    v5[19] = 18;
    *((_QWORD *)gpsi + 619) = 0LL;
    v9 = gptCursorAsync;
    *((_QWORD *)v5 + 430) = 0LL;
    *((struct tagPOINT *)v5 + 429) = v9;
  }
  if ( (v4 & 2) != 0 )
  {
    if ( gpqCursor )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    RIMLockExclusive((__int64)(v5 + 954));
    *((_BYTE *)v5 + 3832) = 1;
    *((_QWORD *)v5 + 478) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 954, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 64LL) )
  {
    v12 = v8;
    LODWORD(v13) = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C0246A70,
      (unsigned int)&unk_1C021BA52,
      v10,
      v11,
      (__int64)&v13,
      (__int64)&v12);
  }
  if ( v8 )
  {
    v14 = 0LL;
    v13 = 0LL;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)&v15, (__int64)&v13, 4, 0x900u);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
    CMouseProcessor::SynthesizeMouse((CMouseProcessor *)v5, (struct tagPOINT)&v15, 0LL, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  }
  else
  {
    ApiSetEditionUpdateCursorAsync();
  }
}
