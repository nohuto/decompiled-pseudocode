/*
 * XREFs of ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x1802832FC
 * Callers:
 *     ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x180283790 (-IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@App.c)
 *     ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x180283910 (-IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@Applicat.c)
 *     ?get_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJPEAE@Z @ 0x180283E40 (-get_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJPEAE@Z.c)
 *     ?put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z @ 0x180283F30 (-put_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180469F64 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 */

__int64 __fastcall TabAppPolicySettings::GetCallerAppId(unsigned __int16 **a1, unsigned __int16 **a2)
{
  int CallingProcessAppId; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)a1, a2);
  if ( CallingProcessAppId == -2147023728 )
    CallingProcessAppId = -2147009196;
  if ( CallingProcessAppId < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)CallingProcessAppId);
  return (unsigned int)CallingProcessAppId;
}
