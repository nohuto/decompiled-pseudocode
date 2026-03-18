/*
 * XREFs of ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x1C03B8F5C
 * Callers:
 *     MonitorSetAppOverride @ 0x1C03B0ED4 (MonitorSetAppOverride.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001C71C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ??$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@Z$$QEAPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@Z @ 0x1C001FA00 (--$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlF.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C03B9128 (-_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsageState::SetAppOverride(
        __int64 **this,
        GUID *Guid,
        struct _GUID *a3,
        int a4,
        unsigned __int64 a5,
        bool a6,
        const struct _UNICODE_STRING *a7)
{
  __int64 v8; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  NTSTATUS AppOverrideKey; // eax
  unsigned __int64 v14; // r12
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rax
  NTSTATUS v20; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 p_GuidString; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-20h] BYREF
  void (__stdcall *v24)(PUNICODE_STRING); // [rsp+50h] [rbp-10h] BYREF

  v8 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
  if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
    v8 = *(_QWORD *)Guid->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
  v11 = 0;
  if ( !v8 )
  {
    v12 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v12 && (!a7 || a7->Length) )
    {
      GuidString = 0LL;
      AppOverrideKey = RtlStringFromGUID(Guid, &GuidString);
      if ( AppOverrideKey < 0 )
        goto LABEL_14;
      p_GuidString = 0LL;
      AppOverrideKey = DxgMonitor::MonitorUsageState::_GetAppOverrideKey(
                         (DxgMonitor::MonitorUsageState *)this,
                         &GuidString,
                         &p_GuidString);
      if ( AppOverrideKey < 0 )
        goto LABEL_14;
      v14 = p_GuidString;
      if ( !a6 && p_GuidString != a5 )
      {
        AppOverrideKey = -1073741811;
LABEL_14:
        v11 = AppOverrideKey;
LABEL_15:
        v24 = RtlFreeUnicodeString;
        p_GuidString = (unsigned __int64)&GuidString;
        wistd::invoke<void (*)(_UNICODE_STRING *),wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0> *>(
          (__int64 (__fastcall **)(_QWORD))&v24,
          &p_GuidString);
        return v11;
      }
      v16 = this[1];
      v17 = *v16;
      KeyHandle = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HANDLE *))(v17 + 8))(v16, 0LL, &KeyHandle);
      if ( v18 >= 0 )
      {
        if ( a4 )
        {
          (*(void (__fastcall **)(__int64 *, HANDLE, wchar_t *, unsigned __int64))(*this[1] + 112))(
            this[1],
            KeyHandle,
            GuidString.Buffer,
            v14);
LABEL_19:
          v19 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1;
          if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1 )
            v19 = *(_QWORD *)Guid->Data4 - *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4;
          if ( !v19 )
          {
            *((_BYTE *)this + 20) = 0;
            *((_BYTE *)this + 21) = a4 != 0;
            *((_DWORD *)this + 4) = a4 != 0 ? 2 : 0;
          }
          goto LABEL_26;
        }
        v20 = ZwDeleteValueKey(KeyHandle, &GuidString);
        v18 = v20;
        if ( v20 >= 0 )
          goto LABEL_19;
        WdLogSingleEntry2(2LL, this, v20);
      }
      v11 = v18;
LABEL_26:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
      goto LABEL_15;
    }
  }
  return 3221225485LL;
}
