/*
 * XREFs of ?GetCoverWindow@ChromeManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180405B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ChromeManager::GetCoverWindow(ChromeManager *this, const struct _GUID *a2, void **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 2))(*((_QWORD *)this + 2), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\chromemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
