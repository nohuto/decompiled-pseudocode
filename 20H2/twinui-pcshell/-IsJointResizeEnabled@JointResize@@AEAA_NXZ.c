/*
 * XREFs of ?IsJointResizeEnabled@JointResize@@AEAA_NXZ @ 0x18041D608
 * Callers:
 *     ?OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18041DE50 (-OnSettingChanged@JointResize@@UEAAJW4SETTING_IDENTIFIER@@@Z.c)
 *     ?SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z @ 0x18041E5B0 (-SubscribeToServices@JointResize@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

char __fastcall JointResize::IsJointResizeEnabled(JointResize *this)
{
  int v1; // eax
  char v2; // bl
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 20) + 32LL))(
         *((_QWORD *)this + 20),
         5LL,
         &v5);
  v2 = 0;
  if ( v1 >= 0 )
    return v5 != 0;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x2F6,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
