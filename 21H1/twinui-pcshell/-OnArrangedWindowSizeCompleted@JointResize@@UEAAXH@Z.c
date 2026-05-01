/*
 * XREFs of ?OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z @ 0x1803FA730
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801881C4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x1803F99FC (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?Commit@JointResize@@AEAAJXZ @ 0x1803F9A68 (-Commit@JointResize@@AEAAJXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1803F9DA8 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x1803F9E4C (-HideDropFeedback@JointResize@@AEAAJ_N@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowSizeCompleted(JointResize *this, int a2)
{
  __int64 v4; // rcx
  JointResize *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  WINBOOL v9; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 136) )
  {
    *((_BYTE *)this + 136) = 0;
    v4 = *((_QWORD *)this + 11);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
      if ( a2 )
      {
        v7 = JointResize::Commit((JointResize *)((char *)this - 88));
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x15A,
            (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
            (const char *)(unsigned int)v7);
      }
      LOBYTE(v6) = a2 == 0;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 40LL))(*((_QWORD *)this + 16), v6);
      v5 = (JointResize *)((char *)this - 88);
      v8 = JointResize::HideDropFeedback((JointResize *)((char *)this - 88), 1);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15F,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v8);
    }
    else
    {
      v5 = (JointResize *)((char *)this - 88);
    }
    JointResize::DestroyGhostDivider(v5);
    JointResize::Cleanup(v5);
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)this + 352,
      v9);
  }
}
