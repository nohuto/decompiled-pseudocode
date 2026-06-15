/*
 * XREFs of ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180029CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001BC0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_SF_ @ 0x1800050D0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x1800210EC (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     WPP_SF_ds @ 0x180025744 (WPP_SF_ds.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdDisplayNotificationCallback(void *a1, __int64 a2, _DWORD *a3)
{
  DWORD v4; // r15d
  signed int v5; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  int v7; // eax
  __int64 v8; // r8
  const char *v9; // rdx
  const char *v10; // rax
  struct TSSession *v11; // rsi
  int v12; // r12d
  int v13; // r14d
  _DWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // rax
  HANDLE ProcessHeap; // rax
  struct TSSession *v19; // rax
  __int64 v20; // rcx
  struct TSSession *v21; // rbx
  struct TSSession *v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+70h] [rbp+18h] BYREF

  v4 = (unsigned int)a1;
  v5 = 0;
  v23 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v24 = (__int64)v6;
  if ( a3[4] != 4
    || *(_QWORD *)a3 != *(_QWORD *)&GUID_SESSION_DISPLAY_STATUS.Data1
    || *((_QWORD *)a3 + 1) != *(_QWORD *)GUID_SESSION_DISPLAY_STATUS.Data4 )
  {
    goto LABEL_41;
  }
  v7 = TsSessionFromSessionId(v4, 0, 0LL, &v23);
  v9 = (const char *)&WPP_GLOBAL_Control;
  if ( v7 )
  {
    v5 = (unsigned __int16)v7 | 0x80070000;
    if ( v7 <= 0 )
      v5 = v7;
LABEL_35:
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids, v5);
      }
      AudPolicyLogError("TsSessionIdDisplayNotificationCallback", 2349, v5);
    }
    goto LABEL_41;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    if ( a3[5] == 2 )
    {
      v10 = "Dim";
    }
    else
    {
      v9 = "On";
      v10 = "Off";
      if ( a3[5] == 1 )
        v10 = "On";
    }
    WPP_SF_ds(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)v9, v8, v4, v10);
  }
  v11 = v23;
  v12 = *((_DWORD *)v23 + 57);
  v13 = a3[5] != 0;
  *((_DWORD *)v23 + 57) = v13;
  v14 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v14 > 4u )
  {
    LODWORD(v23) = *((_DWORD *)v11 + 57);
    v17 = "Display Setting Unchanged";
    if ( v12 != v13 )
      v17 = "Display Setting Changed";
    v24 = (__int64)v17;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)v14,
      byte_180046576,
      v15,
      v16,
      (const unsigned __int16 **)&v24,
      (__int64)&v23);
  }
  if ( v12 != v13 && (*((_DWORD *)v11 + 57) || g_bLowPowerEpoch || !*((_DWORD *)v11 + 58) || g_bApmSuspended) )
  {
    ProcessHeap = GetProcessHeap();
    v19 = (struct TSSession *)HeapAlloc(ProcessHeap, 0, 4uLL);
    v21 = v19;
    v23 = v19;
    if ( v19 )
      *(_DWORD *)v19 = v4;
    else
      v21 = 0LL;
    if ( v21 && (int)QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v20, (__int64)v21) < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids);
      }
      operator delete(v21, (const struct std::nothrow_t *)4);
      goto LABEL_35;
    }
  }
LABEL_41:
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
