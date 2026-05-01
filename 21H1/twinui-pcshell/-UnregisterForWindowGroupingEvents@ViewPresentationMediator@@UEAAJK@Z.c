/*
 * XREFs of ?UnregisterForWindowGroupingEvents@ViewPresentationMediator@@UEAAJK@Z @ 0x1802C18F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x180453E34 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall ViewPresentationMediator::UnregisterForWindowGroupingEvents(
        ViewPresentationMediator *this,
        unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CGITRegistrationList::Unregister((ViewPresentationMediator *)((char *)this + 152), a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109,
      (__int64)"pcshell\\twinui\\viewpresentationmediator\\lib\\viewpresentationmediator.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
