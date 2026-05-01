/*
 * XREFs of ?GetFrameworkViewType@CWinRTApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180071490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetFrameworkViewType(
        CWinRTApplicationView *this,
        enum FRAMEWORK_VIEW_TYPE *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 6;
  v9 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 26))(
         *((_QWORD *)this + 26),
         &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e,
         &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 612LL;
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(__int64, enum FRAMEWORK_VIEW_TYPE *))(*(_QWORD *)v9 + 24LL))(v9, a2);
    v4 = v3;
    if ( v3 >= 0 )
      goto LABEL_3;
    v7 = 613LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v3);
LABEL_3:
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
