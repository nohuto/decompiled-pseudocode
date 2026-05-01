/*
 * XREFs of ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18041DE50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x18041D608 (-IsJointResizeEnabled@JointResize@@AEAA_NXZ.c)
 */

__int64 __fastcall JointResize::OnSettingChanged(__int64 a1, int a2)
{
  __int64 v3; // rdi
  char IsJointResizeEnabled; // al
  __int64 *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 5 )
  {
    v3 = a1 - 104;
    IsJointResizeEnabled = JointResize::IsJointResizeEnabled((JointResize *)(a1 - 104));
    v5 = *(__int64 **)(a1 + 48);
    v6 = a1 - 16;
    v7 = *v5;
    if ( IsJointResizeEnabled )
    {
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v7 + 72))(v5, v6 & -(__int64)(v3 != 0));
      if ( v8 < 0 )
      {
        v9 = 414LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v7 + 80))(v5, v6 & -(__int64)(v3 != 0));
      if ( v8 < 0 )
      {
        v9 = 418LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
