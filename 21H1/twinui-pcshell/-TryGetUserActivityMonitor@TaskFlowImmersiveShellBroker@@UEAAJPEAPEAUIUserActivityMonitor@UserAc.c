/*
 * XREFs of ?TryGetUserActivityMonitor@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@@Z @ 0x180078A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011C428 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::TryGetUserActivityMonitor(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor **a2)
{
  char *v2; // rcx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this - 16;
  if ( v2 )
  {
    v3 = (**(__int64 (__fastcall ***)(char *, GUID *, struct Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor **))v2)(
           v2,
           &GUID_a66b424a_5568_56e8_bbb8_a3401dfdf5bd,
           a2);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x599,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\com.h",
        (const char *)(unsigned int)v3,
        v5);
      __debugbreak();
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
