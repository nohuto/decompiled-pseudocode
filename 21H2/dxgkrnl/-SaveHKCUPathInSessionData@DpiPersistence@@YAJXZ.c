/*
 * XREFs of ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1C01D3878
 * Callers:
 *     DxgkInitializeDpi @ 0x1C01D3860 (DxgkInitializeDpi.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0019B80 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0019BFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

NTSTATUS __fastcall DpiPersistence::SaveHKCUPathInSessionData(DpiPersistence *this)
{
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int v3; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  NTSTATUS result; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  __int64 v10; // rdi
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  struct _UNICODE_STRING KeyPath; // [rsp+50h] [rbp-18h] BYREF

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( v2
    && (v3 = PsGetCurrentProcessSessionId(v1),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, v3)) != 0LL) )
  {
    KeyPath = 0LL;
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v8 = (void *)*((_QWORD *)SessionDataForSpecifiedSession + 2342);
      if ( v8 )
      {
        operator delete[](v8);
        *((_DWORD *)SessionDataForSpecifiedSession + 4682) = 0;
        *((_QWORD *)SessionDataForSpecifiedSession + 2342) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(
                           SessionDataForSpecifiedSession,
                           KeyPath.MaximumLength,
                           v6,
                           v7);
      v10 = (int)RtlUnicodeStringCopy(UserRegistryPath, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v10 < 0 )
      {
        WdLogSingleEntry1(2LL, v10);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"RtlFreeUnicodeString failed: (Status = 0x%I64x)",
          v10,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      return v10;
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v13 = PsGetCurrentProcessSessionId(v12);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v13,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
  return result;
}
