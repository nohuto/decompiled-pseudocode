/*
 * XREFs of ?Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x180099200
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x180099744 (-DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 */

void __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::Unstage(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys(this);
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v1);
    JUMPOUT(0x18009922CLL);
  }
}
