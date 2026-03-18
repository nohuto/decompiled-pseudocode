/*
 * XREFs of DxgkPrepareCcdDatabaseForAccess @ 0x1C02EF4A8
 * Callers:
 *     DxgkEscape @ 0x1C00F72C0 (DxgkEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@Z @ 0x1C0026DF8 (--$invoke@P6AXPEAU_KEY_BASIC_INFORMATION@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAU_KEY_BASIC_INFORMAT.c)
 *     AdjustCcdDatabasePermissions @ 0x1C02EEA10 (AdjustCcdDatabasePermissions.c)
 *     CheckCallerMatchesSid @ 0x1C02EF12C (CheckCallerMatchesSid.c)
 *     CreateServiceSid @ 0x1C02EF3A8 (CreateServiceSid.c)
 */

__int64 DxgkPrepareCcdDatabaseForAccess()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  PSID v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  PSID Sid; // [rsp+20h] [rbp-30h] BYREF
  void (__fastcall *v12)(void *); // [rsp+28h] [rbp-28h] BYREF
  ULONG v13[6]; // [rsp+30h] [rbp-20h] BYREF

  v13[0] = 80;
  v13[1] = -123880637;
  v13[2] = 1617898341;
  v13[3] = -1424805804;
  v13[4] = 1466607281;
  v13[5] = 2109097600;
  CreateServiceSid(&Sid, v13);
  v2 = Sid;
  if ( !Sid )
  {
    v3 = WdLogNewEntry5_WdError(v1, v0);
    v4 = -1073741670LL;
LABEL_7:
    *(_QWORD *)(v3 + 24) = v4;
    WdLogEvent5_WdError(v3);
    goto LABEL_9;
  }
  v5 = CheckCallerMatchesSid(Sid);
  v4 = v5;
  if ( v5 < 0
    || (v8 = AdjustCcdDatabasePermissions(
               0LL,
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity\\",
               0,
               v2),
        v4 = v8,
        v8 < 0)
    || (v9 = AdjustCcdDatabasePermissions(
               0LL,
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
               0,
               v2),
        v4 = v9,
        v9 < 0) )
  {
    v3 = WdLogNewEntry5_WdError(v7, v6);
    goto LABEL_7;
  }
  LODWORD(v4) = 0;
LABEL_9:
  if ( v2 )
  {
    Sid = v2;
    v12 = wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag;
    wistd::invoke<void (*)(_KEY_BASIC_INFORMATION *),_KEY_BASIC_INFORMATION * &>(
      (__int64 (__fastcall **)(_QWORD))&v12,
      &Sid);
  }
  return (unsigned int)v4;
}
