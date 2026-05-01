/*
 * XREFs of ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800487E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025E490 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18025F1A8 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180261944 (-RemovedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v3; // eax
  const WCHAR *v7; // rdx
  __int64 result; // rax
  LSTATUS ValueW; // eax
  bool v10; // zf
  int v11; // ebx
  __int64 v12; // rdx
  int pdwType; // [rsp+20h] [rbp-38h]
  DWORD v14; // [rsp+40h] [rbp-18h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-14h] BYREF
  _DWORD v16[4]; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int pvData; // [rsp+68h] [rbp+10h] BYREF

  v3 = dword_1805CC764;
  if ( !dword_1805CC764 )
  {
    v14 = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell",
               L"PrereleaseExperience",
               0x10000012u,
               &v14,
               &pvData,
               &pcbData);
    if ( !ValueW )
    {
      if ( v14 == 4 )
      {
        if ( pvData <= 1 )
        {
          v10 = pvData == 1;
          goto LABEL_16;
        }
      }
      else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
      {
        ValueW = 0;
        v10 = (_WORD)pvData == 49;
LABEL_16:
        LOBYTE(ValueW) = v10;
        if ( ValueW )
        {
          dword_1805CC764 = 1;
          goto LABEL_8;
        }
      }
    }
    v3 = 2;
    dword_1805CC764 = 2;
  }
  if ( v3 != 1 )
  {
    v7 = L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App";
    goto LABEL_4;
  }
LABEL_8:
  v7 = L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App";
LABEL_4:
  result = (*(__int64 (__fastcall **)(struct IApplicationView *, const WCHAR *, _DWORD *))(*(_QWORD *)a2 + 152LL))(
             a2,
             v7,
             v16);
  if ( (int)result < 0 )
    return result;
  if ( v16[0] )
  {
    if ( !a3 )
    {
      v11 = PeoplePaneViewManager::AddedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
      if ( v11 >= 0 )
        return 0LL;
      v12 = 546LL;
      goto LABEL_33;
    }
    if ( a3 <= 0 )
      return 0LL;
    if ( a3 > 2 )
    {
      if ( a3 == 7 )
      {
        v11 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 1);
        if ( v11 >= 0 )
          return 0LL;
        v12 = 554LL;
        goto LABEL_33;
      }
      if ( a3 == 9 )
      {
        v11 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 104), a2, 0);
        if ( v11 >= 0 )
          return 0LL;
        v12 = 557LL;
        goto LABEL_33;
      }
      if ( a3 != 11 )
        return 0LL;
    }
    v11 = PeoplePaneViewManager::RemovedApplicationView((PeoplePaneViewManager *)(a1 - 104), a2);
    if ( v11 >= 0 )
      return 0LL;
    v12 = 551LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11,
      pdwType);
    return (unsigned int)v11;
  }
  return 0LL;
}
