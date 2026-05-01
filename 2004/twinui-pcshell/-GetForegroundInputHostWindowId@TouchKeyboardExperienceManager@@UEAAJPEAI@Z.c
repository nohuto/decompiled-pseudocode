/*
 * XREFs of ?GetForegroundInputHostWindowId@TouchKeyboardExperienceManager@@UEAAJPEAI@Z @ 0x18034B160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetForegroundInputHostWindowId(
        TouchKeyboardExperienceManager *this,
        unsigned int *a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 61);
  if ( !v2 )
  {
    v3 = -2147467259;
    v4 = 3421LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  *a2 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( v6 && (v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 616LL))(v6), v3 = v7, v7 < 0) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x966,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7);
  else
    v3 = 0;
  if ( v3 < 0 )
  {
    v4 = 3422LL;
    goto LABEL_3;
  }
  return 0LL;
}
