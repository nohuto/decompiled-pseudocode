/*
 * XREFs of ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C020CE28
 * Callers:
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C020CC8C (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C001CBB4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ??$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@Z$$QEAPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@Z @ 0x1C001FA00 (--$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlF.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0027208 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1C0027F88 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ParseResolutionKeyName @ 0x1C020CF8C (ParseResolutionKeyName.c)
 *     ParseFreqRangeValue @ 0x1C03B9604 (ParseFreqRangeValue.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_ProcessMonitorResolutionKey(
        DxgMonitor::MonitorModes *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  unsigned __int16 NameLength; // ax
  NTSTATUS v6; // eax
  unsigned int v7; // edi
  __int64 v8; // r9
  int v9; // r15d
  int v10; // r12d
  unsigned __int16 v11; // si
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  void *v17; // rcx
  void *v19; // rbx
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rdi
  int valid; // eax
  DxgMonitor::MonitorModes *v24; // rdi
  DxgMonitor::MonitorModes **v25; // rcx
  int v26; // [rsp+30h] [rbp-39h] BYREF
  int v27; // [rsp+34h] [rbp-35h] BYREF
  int v28; // [rsp+38h] [rbp-31h] BYREF
  void *v29; // [rsp+40h] [rbp-29h] BYREF
  NTSTATUS (__stdcall *v30)(HANDLE); // [rsp+48h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING v32; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1h] BYREF
  WCHAR SourceString[8]; // [rsp+78h] [rbp+Fh] BYREF

  NameLength = a3->NameLength;
  KeyHandle = 0LL;
  v26 = 0;
  v27 = 0;
  v32.Length = NameLength;
  v32.MaximumLength = NameLength;
  *(_DWORD *)(&v32.MaximumLength + 1) = 0;
  v32.Buffer = a3->Name;
  if ( !(unsigned __int8)ParseResolutionKeyName(&v32, &v26, &v27) )
  {
    WdLogSingleEntry0(2LL);
    v7 = -1073741823;
    goto LABEL_10;
  }
  if ( KeyHandle )
  {
    v29 = KeyHandle;
    v30 = ZwClose;
    wistd::invoke<void (*)(_UNICODE_STRING *),wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0> *>(
      (__int64 (__fastcall **)(_QWORD))&v30,
      &v29);
  }
  v6 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, a2, &v32);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    goto LABEL_10;
  }
  wcscpy(SourceString, L"ModeX");
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v9 = v26;
  v10 = v27;
  v11 = 1;
  while ( 1 )
  {
    v29 = 0LL;
    SourceString[4] = v11 + 48;
    v12 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, &v29, v8);
    v15 = v12;
    if ( v12 < 0 )
    {
      v16 = WdLogNewEntry5_WdTrace(v14, v13);
      *(_QWORD *)(v16 + 24) = v11;
      v17 = v29;
      *(_QWORD *)(v16 + 32) = v15;
      if ( v17 )
        goto LABEL_11;
      goto LABEL_8;
    }
    v19 = v29;
    v27 = 0;
    v26 = 0;
    v28 = 0;
    LODWORD(v30) = 0;
    if ( !(unsigned __int8)ParseFreqRangeValue(
                             (_DWORD)v29,
                             (unsigned int)&v27,
                             (unsigned int)&v26,
                             (unsigned int)&v28,
                             (__int64)&v30) )
      break;
    v21 = operator new[](0x40uLL, 0x4D677844u, 256LL, v20);
    v22 = (_QWORD *)v21;
    if ( !v21 )
    {
      WdLogSingleEntry0(2LL);
      v7 = -1073741801;
      goto LABEL_25;
    }
    *(_DWORD *)(v21 + 4) = v27;
    *(_DWORD *)(v21 + 12) = v26;
    *(_DWORD *)(v21 + 20) = v28;
    *(_DWORD *)v21 = 4;
    *(_DWORD *)(v21 + 36) = 1;
    *(_DWORD *)(v21 + 40) = v9;
    *(_DWORD *)(v21 + 44) = v10;
    *(_DWORD *)(v21 + 8) = 1;
    *(_DWORD *)(v21 + 16) = 1;
    *(_DWORD *)(v21 + 24) = 1;
    *(_DWORD *)(v21 + 28) = (_DWORD)v30;
    *(_DWORD *)(v21 + 32) = 1;
    valid = IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v21);
    if ( valid < 0 )
    {
      WdLogSingleEntry1(3LL, valid);
      operator delete(v22);
    }
    else
    {
      v24 = (DxgMonitor::MonitorModes *)(v22 + 6);
      v25 = (DxgMonitor::MonitorModes **)*((_QWORD *)this + 23);
      if ( *v25 != (DxgMonitor::MonitorModes *)((char *)this + 176) )
        __fastfail(3u);
      *(_QWORD *)v24 = (char *)this + 176;
      *((_QWORD *)v24 + 1) = v25;
      *v25 = v24;
      *((_QWORD *)this + 23) = v24;
      ++*((_DWORD *)this + 42);
      ++*((_DWORD *)this + 43);
    }
    if ( v19 )
    {
      v17 = v19;
LABEL_11:
      operator delete[](v17);
    }
LABEL_8:
    if ( ++v11 >= 9u )
    {
      v7 = 0;
      goto LABEL_10;
    }
  }
  WdLogSingleEntry1(2LL, v11);
  v7 = -1073741823;
LABEL_25:
  if ( v19 )
    operator delete[](v19);
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  return v7;
}
