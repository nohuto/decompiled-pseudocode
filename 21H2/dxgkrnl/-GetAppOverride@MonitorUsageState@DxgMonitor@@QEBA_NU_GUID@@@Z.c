/*
 * XREFs of ?GetAppOverride@MonitorUsageState@DxgMonitor@@QEBA_NU_GUID@@@Z @ 0x1C0217440
 * Callers:
 *     ?_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02173CC (-_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_T.c)
 * Callees:
 *     ??$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@wistd@@YAX$$QEAP6AXPEAU_UNICODE_STRING@@@Z$$QEAPEAV?$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1?RtlFreeUnicodeString@@YAX0@Z$$T$0A@@wil@@@Z @ 0x1C001FA00 (--$invoke@P6AXPEAU_UNICODE_STRING@@@ZPEAV-$unique_struct@U_UNICODE_STRING@@$$A6AXPEAU1@@Z$1-RtlF.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x1C03B9128 (-_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

bool __fastcall DxgMonitor::MonitorUsageState::GetAppOverride(DxgMonitor::MonitorUsageState *this, GUID *Guid)
{
  bool v3; // bl
  __int64 v4; // rcx
  unsigned __int64 p_GuidString; // [rsp+30h] [rbp-30h] BYREF
  __int64 v7; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-20h] BYREF
  void (__stdcall *v9)(PUNICODE_STRING); // [rsp+50h] [rbp-10h] BYREF

  GuidString = 0LL;
  v3 = 0;
  if ( RtlStringFromGUID(Guid, &GuidString) >= 0 )
  {
    v4 = *((_QWORD *)this + 1);
    v7 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, wchar_t *, __int64 *))(*(_QWORD *)v4 + 72LL))(
           v4,
           2LL,
           GuidString.Buffer,
           &v7) )
    {
      p_GuidString = 0LL;
      if ( DxgMonitor::MonitorUsageState::_GetAppOverrideKey(this, &GuidString, &p_GuidString) >= 0 )
        v3 = p_GuidString == v7;
    }
  }
  v9 = RtlFreeUnicodeString;
  p_GuidString = (unsigned __int64)&GuidString;
  wistd::invoke<void (*)(_UNICODE_STRING *),wil::unique_struct<_UNICODE_STRING,void (_UNICODE_STRING *),&void RtlFreeUnicodeString(_UNICODE_STRING *),std::nullptr_t,0> *>(
    (__int64 (__fastcall **)(_QWORD))&v9,
    &p_GuidString);
  return v3;
}
