/*
 * XREFs of ?UnregisterForAppLayoutChanges@TabletModePositionerManager@@UEAAJK@Z @ 0x1803F2CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x180477E64 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall TabletModePositionerManager::UnregisterForAppLayoutChanges(
        TabletModePositionerManager *this,
        unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CGITRegistrationList::Unregister((TabletModePositionerManager *)((char *)this + 24), a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x75,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
