/*
 * XREFs of ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C013CEF0
 * Callers:
 *     DxgkInitializeDpi @ 0x1C013CFB0 (DxgkInitializeDpi.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0012CCC (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0012D7C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

NTSTATUS __fastcall DpiPersistence::SaveHKCUPathInSessionData(DpiPersistence *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  NTSTATUS result; // eax
  void *v8; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 88);
  if ( v4 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v3);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession )
  {
    KeyPath = 0LL;
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v8 = (void *)*((_QWORD *)SessionDataForSpecifiedSession + 2339);
      if ( v8 )
      {
        operator delete[](v8);
        *((_DWORD *)SessionDataForSpecifiedSession + 4676) = 0;
        *((_QWORD *)SessionDataForSpecifiedSession + 2339) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, KeyPath.MaximumLength);
      v10 = (int)RtlUnicodeStringCopy(UserRegistryPath, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v10 < 0 )
      {
        v15 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v15 + 24) = v10;
        WdLogEvent5_WdError(v15);
      }
      return v10;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v13 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v14);
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    return -1073741811;
  }
  return result;
}
