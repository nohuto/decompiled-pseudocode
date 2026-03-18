/*
 * XREFs of ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C02597B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D4488 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0251114 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C0259534 (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C025A408 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 */

__int64 __fastcall SimpleHapticsController::HapticsDeviceNotify(
        char *NotificationStructure,
        SimpleHapticsController *Context)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+50h] [rbp+10h] BYREF
  __int64 v18; // [rsp+58h] [rbp+18h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v3 )
  {
    v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v8 )
    {
      v12 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v12 )
        v12 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( !v12 )
      {
        if ( (unsigned int)dword_1C032A2C0 > 4 )
        {
          v17 = (__int64)"SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (__int64)&dword_1C032A2C0,
            byte_1C02F259D,
            0LL,
            0LL,
            (void **)&v17);
        }
        v13 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 1);
        v2 = v13;
        if ( v13 < 0 )
        {
          if ( (unsigned int)dword_1C032A2C0 > 2 )
          {
            LODWORD(v17) = v13;
            v18 = (__int64)"Function failed.";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1C032A2C0,
              byte_1C02F2566,
              v14,
              v15,
              (void **)&v18,
              (__int64)&v17);
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::HapticsDeviceNotify",
            "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            809,
            v2,
            "Function failed.");
        }
      }
    }
    else
    {
      if ( (unsigned int)dword_1C032A2C0 > 4 )
      {
        v17 = (__int64)"SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          (__int64)&dword_1C032A2C0,
          byte_1C02F259D,
          0LL,
          0LL,
          (void **)&v17);
      }
      v9 = SimpleHapticsController::OpenHapticsDevice(Context);
      v2 = v9;
      if ( v9 < 0 )
      {
        if ( (unsigned int)dword_1C032A2C0 > 2 )
        {
          LODWORD(v17) = v9;
          v18 = (__int64)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C032A2C0,
            byte_1C02F2566,
            v10,
            v11,
            (void **)&v18,
            (__int64)&v17);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          803,
          v2,
          "Function failed.");
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C032A2C0 > 4 )
    {
      v17 = (__int64)"SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)&dword_1C032A2C0,
        byte_1C02F259D,
        0LL,
        0LL,
        (void **)&v17);
    }
    v5 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 0);
    v2 = v5;
    if ( v5 < 0 )
    {
      if ( (unsigned int)dword_1C032A2C0 > 2 )
      {
        LODWORD(v17) = v5;
        v18 = (__int64)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C032A2C0,
          byte_1C02F2566,
          v6,
          v7,
          (void **)&v18,
          (__int64)&v17);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::HapticsDeviceNotify",
        "clientcore\\windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        798,
        v2,
        "Function failed.");
    }
  }
  return v2;
}
