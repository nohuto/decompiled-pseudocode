/*
 * XREFs of ?Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x180098D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800991A8 (-NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800992F4 (-DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 */

void __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::Revert(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys(this);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  if ( *((_BYTE *)this + 124) )
  {
    v3 = CreativeFramework::Actions::SetLockScreenHotspotsService::NotifyForLockScreenUpdates(this);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
        (const char *)(unsigned int)v3);
      JUMPOUT(0x180098D5ELL);
    }
  }
}
