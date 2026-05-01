/*
 * XREFs of ?TabletModeChanged@ChromeManager@@UEAAJ_N@Z @ 0x180406840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ChromeManager::TabletModeChanged(ChromeManager *this, char a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
  if ( v5 < 0 )
  {
    v6 = 80LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\chromemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  LOBYTE(v4) = a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3), v4);
  if ( v5 < 0 )
  {
    v6 = 81LL;
    goto LABEL_3;
  }
  return 0LL;
}
