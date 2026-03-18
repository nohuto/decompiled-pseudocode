/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C02090E0
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000EFE8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0011C8C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C002B1B0 (__report_rangecheckfailure.c)
 *     memcmp @ 0x1C002CB10 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C01FAAC8 (MonitorUnifyCCDMonitorString.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C02BBB60 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C03B090C (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(DXGMONITOR *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rsi
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // r9
  struct _LIST_ENTRY *Flink; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 *v20; // rax
  unsigned __int16 *v21; // rdi
  char v22; // al
  char v23; // cl
  _QWORD *v24; // rdx
  __int64 v25; // r8
  const UNICODE_STRING *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r9
  ULONG v29; // ecx
  unsigned __int16 v30; // di
  __int64 v31; // rax
  struct _UNICODE_STRING *v32; // rbx
  int v34; // eax
  unsigned int v35; // edx
  __int64 v36; // rax
  _BYTE v37[4]; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 v38; // [rsp+2Ch] [rbp-75h] BYREF
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v40[24]; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+68h] [rbp-39h] BYREF
  __int16 v43; // [rsp+B8h] [rbp+17h] BYREF

  if ( *((_QWORD *)this + 50) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 78) != 1 )
  {
    v21 = (unsigned __int16 *)((char *)this + 392);
    *((_QWORD *)this + 55) = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 392), L"SIMULATED");
    v22 = 0;
    *((_BYTE *)this + 384) = 0;
    goto LABEL_30;
  }
  v2 = (_QWORD *)*((_QWORD *)this + 27);
  if ( v2[20] )
  {
    v41 = 0LL;
    memset(SourceString, 0, 0x46uLL);
    v3 = v2[16];
    if ( !v3 )
      v3 = v2[17];
    *(_QWORD *)v40 = 4587520LL;
    *(_QWORD *)&v40[8] = SourceString;
    v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 64LL))(v3, v40);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 72LL))(v3, v40);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 80LL))(v3, v40);
        v5 = v7;
        if ( v7 >= 0 )
        {
          if ( (int)RtlStringCchLengthW(SourceString, 0x23uLL, &v41) < 0 )
            WdLogSingleEntry0(1LL);
          v8 = v41;
          if ( v41 > 0x17 )
            WdLogSingleEntry0(1LL);
          v37[0] = 0;
          v38 = 0;
          v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *, unsigned __int16 *))(*(_QWORD *)v3 + 88LL))(v3, v37, &v38);
          v10 = v9;
          if ( v9 < 0 )
          {
            WdLogSingleEntry1(3LL, v9);
            MonitorLogBadEDID(v10);
          }
          v11 = v38;
          v12 = v37[0];
          SourceString[v8] = 95;
          v13 = v8 + 1;
          SourceString[v13++] = a0123456789abcd_0[(unsigned __int64)v12 >> 4];
          SourceString[v13++] = a0123456789abcd_0[v12 & 0xF];
          SourceString[v13++] = 95;
          SourceString[v13++] = a0123456789abcd_0[(unsigned __int64)v11 >> 12];
          SourceString[v13++] = a0123456789abcd_0[(v11 >> 8) & 0xF];
          SourceString[v13++] = a0123456789abcd_0[(unsigned __int8)v11 >> 4];
          SourceString[v13++] = a0123456789abcd_0[v11 & 0xF];
          SourceString[v13++] = 95;
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
          SourceString[v13++] = a0123456789abcd_0[(unsigned __int64)v14 >> 4];
          SourceString[v13] = a0123456789abcd_0[v14 & 0xF];
          v15 = v13 + 1;
          if ( 2 * v15 >= 0x46 )
            _report_rangecheckfailure();
          SourceString[v15] = 0;
          if ( v15 >= 0x23 )
            WdLogSingleEntry0(1LL);
          KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
          Flink = DXGMONITOR::_UniqueEntryList.Flink;
          v18 = 0LL;
          while ( Flink != &DXGMONITOR::_UniqueEntryList )
          {
            v18 = (__int64)Flink;
            if ( HIDWORD(Flink[1].Flink) == v15 && !memcmp(&Flink[1].Blink, SourceString, 2 * v15) )
              goto LABEL_48;
            Flink = Flink->Flink;
          }
          if ( !Flink )
          {
LABEL_48:
            if ( !v18 )
              WdLogSingleEntry0(1LL);
            v34 = *(_DWORD *)(v18 + 16);
            if ( !v34 )
            {
              WdLogSingleEntry0(1LL);
              v34 = *(_DWORD *)(v18 + 16);
            }
            *(_DWORD *)(v18 + 16) = v34 + 1;
            goto LABEL_27;
          }
          v19 = operator new[](2 * v15 + 32, 0x4D677844u, 256LL, v16);
          v18 = v19;
          if ( !v19 )
          {
            WdLogSingleEntry0(6LL);
            KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
            return 3221225495LL;
          }
          *(_DWORD *)(v19 + 20) = v15;
          *(_DWORD *)(v19 + 16) = 1;
          if ( RtlStringCchCopyW((unsigned __int16 *)(v19 + 24), v15 + 1, SourceString) < 0 )
            WdLogSingleEntry0(1LL);
          *(_WORD *)(v18 + 2 * v15 + 24) = 0;
          v20 = (__int64 *)qword_1C0131AA8;
          if ( *(struct _LIST_ENTRY **)qword_1C0131AA8 != &DXGMONITOR::_UniqueEntryList )
            __fastfail(3u);
          *(_QWORD *)v18 = &DXGMONITOR::_UniqueEntryList;
          *(_QWORD *)(v18 + 8) = v20;
          *v20 = v18;
          qword_1C0131AA8 = v18;
LABEL_27:
          *((_QWORD *)this + 55) = v18;
          KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
          v21 = (unsigned __int16 *)((char *)this + 392);
          if ( !RtlCreateUnicodeString((PUNICODE_STRING)((char *)this + 392), SourceString) )
            goto LABEL_54;
          v22 = 1;
          goto LABEL_29;
        }
      }
    }
    WdLogSingleEntry1(3LL, v5);
    MonitorLogBadEDID((unsigned int)v5);
  }
  v21 = (unsigned __int16 *)((char *)this + 392);
  *((_QWORD *)this + 55) = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 392), L"NOEDID");
  v22 = 0;
LABEL_29:
  *((_BYTE *)this + 384) = v22;
LABEL_30:
  v23 = v22;
  if ( *((_QWORD *)this + 50) && v22 )
  {
    MonitorUnifyCCDMonitorString(v21);
    v23 = *((_BYTE *)this + 384);
  }
  *(_OWORD *)((char *)this + 408) = *(_OWORD *)v21;
  if ( v23 )
    *((_WORD *)this + 204) -= 6;
  v24 = (_QWORD *)*((_QWORD *)this + 21);
  v25 = *(_QWORD *)(*(_QWORD *)(v24[3] + 16LL) + 216LL);
  v26 = (const UNICODE_STRING *)((*(_QWORD *)(v25 + 64) + 4768LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(v25 + 64) + 4776LL) != 0LL));
  if ( v26 )
  {
    v27 = *((_QWORD *)this + 21);
    String = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*v24 + 80LL))(v27) )
    {
      v35 = *((_DWORD *)this + 45);
      v36 = *((_QWORD *)this + 21);
      memset(v40, 0, sizeof(v40));
      DXGADAPTER::GetVirtualMonitorInfo(
        *(DXGADAPTER **)(*(_QWORD *)(v36 + 24) + 16LL),
        v35,
        (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v40);
      if ( *(_WORD *)&v40[8] )
        String = *(struct _UNICODE_STRING *)&v40[8];
    }
    v43 = 0;
    if ( !String.Length )
    {
      v29 = *((_DWORD *)this + 45);
      *(_QWORD *)&String.Length = 1310720LL;
      String.Buffer = (wchar_t *)&v43;
      if ( RtlIntegerToUnicodeString(v29, 0x10u, &String) < 0 )
        WdLogSingleEntry0(1LL);
    }
    v30 = String.Length + v26->Length + 8;
    v31 = operator new[](v30, 0x4D677844u, 256LL, v28);
    if ( v31 )
    {
      v32 = (struct _UNICODE_STRING *)((char *)this + 424);
      *v32 = 0LL;
      v32->MaximumLength = v30;
      v32->Buffer = (wchar_t *)v31;
      RtlAppendUnicodeToString(v32, L"_");
      RtlAppendUnicodeStringToString(v32, v26);
      RtlAppendUnicodeToString(v32, L"_");
      RtlAppendUnicodeStringToString(v32, &String);
      return 0LL;
    }
    else
    {
LABEL_54:
      WdLogSingleEntry0(6LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*(_QWORD *)(v24[3] + 16LL) + 216LL));
    return 3221225473LL;
  }
}
