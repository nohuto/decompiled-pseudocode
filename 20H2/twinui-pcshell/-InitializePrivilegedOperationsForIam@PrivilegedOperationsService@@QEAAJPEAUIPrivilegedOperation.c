/*
 * XREFs of ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18022A428
 * Callers:
 *     ?InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18022A3D4 (-InitializePrivilegedOperationsForIam@@YAJPEAUIPrivilegedOperationsConsumer@@@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x18005F510 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x18022A884 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VC.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C03C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall PrivilegedOperationsService::InitializePrivilegedOperationsForIam(
        PrivilegedOperationsService *this,
        struct IPrivilegedOperationsConsumer *a2)
{
  struct PrivilegedOperationsService *v2; // rax
  __int64 *v3; // rdi
  char *v5; // r14
  CCriticalFailureHandler *v6; // rcx
  int v7; // ebx
  unsigned __int64 *v9; // [rsp+20h] [rbp-49h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-41h]
  int v11; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v12[3]; // [rsp+34h] [rbp-35h] BYREF
  _OWORD v13[6]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = PrivilegedOperationsService::s_this;
  v3 = (__int64 *)v13;
  *((_BYTE *)PrivilegedOperationsService::s_this + 256) = 1;
  v5 = (char *)v2 + 168;
  v13[0] = GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
  v13[1] = GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v13[2] = GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v13[3] = GUID_bf813bd9_98b6_45da_a60e_ac905433da90;
  v13[4] = GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
  v13[5] = GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  while ( 1 )
  {
    v7 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::PublishPrivilegedOperations(
           v5,
           a2,
           v3);
    v11 = v7;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v12) >= 0 )
      {
        switch ( v12[0] )
        {
          case 2u:
            v7 = -2023406815;
            goto LABEL_12;
          case 3u:
            v7 = -2023406814;
            goto LABEL_12;
          case 4u:
            v7 = -2147418094;
            goto LABEL_12;
          case 5u:
            v7 = -2147022986;
LABEL_12:
            v11 = v7;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( v7 < 0 )
    {
      if ( v7 != -2147024882 && v7 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v6,
          &v11,
          L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          0x39Cu,
          v9,
          v10);
        v7 = v11;
      }
      if ( v7 < 0 )
        break;
    }
    v3 += 2;
    if ( v3 == &v14 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x39C,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
