/*
 * XREFs of ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1C03B8C30
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209834 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _wcsnicmp_0 @ 0x1C002B232 (_wcsnicmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z @ 0x1C03B8BC4 (-_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
        __int64 **this,
        wchar_t *a2,
        bool *a3)
{
  DxgMonitor::MonitorColorState *v3; // rsi
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  _DWORD *v11; // rbx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // r14d
  __int64 v17; // r8
  unsigned int v18; // eax
  int v19; // r13d
  unsigned int v20; // r15d
  wchar_t *v21; // rsi
  wchar_t **v22; // r14
  wchar_t *v23; // rax
  int v24; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  wchar_t *Src; // [rsp+40h] [rbp-40h]
  DxgMonitor::MonitorColorState *v29; // [rsp+48h] [rbp-38h]
  bool *v30; // [rsp+50h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+68h] [rbp-18h] BYREF

  *(_DWORD *)a2 = 0;
  *a3 = 0;
  v3 = (DxgMonitor::MonitorColorState *)this;
  v29 = (DxgMonitor::MonitorColorState *)this;
  v4 = this[1];
  v30 = a3;
  Src = a2;
  LOBYTE(a2) = 1;
  v5 = *v4;
  KeyHandle = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, wchar_t *, __int64, HANDLE *))(v5 + 16))(v4, a2, 2LL, &KeyHandle);
  v9 = v6;
  if ( v6 < 0 )
  {
    v10 = WdLogNewEntry5_WdTrace(v8, v7);
    *(_QWORD *)(v10 + 24) = v3;
    *(_QWORD *)(v10 + 32) = v9;
    goto LABEL_34;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DisplayHdrLevel");
  ResultLength = 0;
  v11 = 0LL;
  KeyValueInformation = 0LL;
  v12 = ZwQueryValueKey(
          KeyHandle,
          &DestinationString,
          KeyValuePartialInformation,
          &KeyValueInformation,
          0x10u,
          &ResultLength);
  v16 = -1073741772;
  LODWORD(v9) = v12;
  if ( v12 != -1073741772 )
  {
    if ( v12 == -1073741789 || v12 == -2147483643 )
    {
      v11 = (_DWORD *)operator new[](ResultLength, 0x4D677844u, 256LL, v15);
      if ( !v11 )
      {
        WdLogSingleEntry0(2LL);
        v16 = -1073741801;
        goto LABEL_31;
      }
      LODWORD(v9) = ZwQueryValueKey(
                      KeyHandle,
                      &DestinationString,
                      KeyValuePartialInformation,
                      v11,
                      ResultLength,
                      &ResultLength);
    }
    if ( (int)v9 >= 0 )
    {
      v18 = v11[1];
      if ( v18 != 7 )
      {
        WdLogSingleEntry2(2LL, v3, v18);
        LODWORD(v9) = -1073741788;
        goto LABEL_32;
      }
      v19 = v11[2] >> 1;
      if ( (unsigned int)(v19 - 37) <= 0x95 && v19 - 1 == 37 * ((v19 - 1) / 0x25u) )
      {
        v20 = 0;
        if ( v19 != 37 )
        {
          v21 = Src;
          do
          {
            v22 = &off_1C0087D30;
            v23 = (wchar_t *)v11 + v20 + 6;
            Src = v23;
            while ( wcsnicmp_0(v23, *v22, 0x25uLL) )
            {
              v22 += 2;
              v23 = Src;
              if ( v22 == (wchar_t **)&_guard_eh_cont_table )
                goto LABEL_23;
            }
            *(_DWORD *)v21 |= *((_DWORD *)v22 + 2);
LABEL_23:
            if ( Src )
              v24 = wcsnlen(Src, v19 - v20);
            else
              v24 = 0;
            v20 += v24 + 1;
          }
          while ( v20 < v19 - 37 );
          v3 = v29;
        }
        DxgMonitor::MonitorColorState::_MarkDisplayHDRReadInMonitorStore(v3, v30);
        goto LABEL_32;
      }
      LODWORD(v9) = -1073741823;
      v17 = -1073741823LL;
    }
    else
    {
      v17 = (int)v9;
    }
    WdLogSingleEntry2(2LL, v3, v17);
    goto LABEL_32;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13) + 24) = v3;
LABEL_31:
  LODWORD(v9) = v16;
LABEL_32:
  if ( v11 )
    operator delete[](v11);
LABEL_34:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  return (unsigned int)v9;
}
