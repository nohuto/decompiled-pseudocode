/*
 * XREFs of ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x180193038
 * Callers:
 *     ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x180193C40 (-GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180049430 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::CopyCloakableWindowsFromGatherer(
        CWin32ApplicationView *this,
        unsigned int *a2,
        HWND **a3)
{
  __int64 v3; // r12
  unsigned int v7; // edi
  int v8; // ebx
  HWND v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // ebp
  HWND *v13; // r15
  unsigned __int64 v14; // r13
  HWND *v15; // rax
  unsigned __int64 v16; // r13
  HWND v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  *a2 = 0;
  *a3 = 0LL;
  v7 = *((_DWORD *)this + 60) + 1;
  if ( !is_mul_ok(v7, 8uLL) )
  {
    v8 = -2147024362;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = CTCoAllocPolicy::Alloc(this, 1, 8LL * (unsigned int)(*((_DWORD *)this + 60) + 1), (void **)a3);
  if ( v8 < 0 )
    goto LABEL_4;
  v10 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  v11 = GhostWindowFromHungWindow(v10);
  v12 = 1;
  if ( v11 )
    v10 = (HWND)v11;
  **a3 = v10;
  v13 = (HWND *)*((_QWORD *)this + 29);
  v14 = *((_QWORD *)this + 30);
  v15 = &v13[v14];
  v16 = (v14 * 8) >> 3;
  if ( v13 > v15 )
    v16 = 0LL;
  if ( v16 )
  {
    do
    {
      v17 = *v13;
      v18 = GhostWindowFromHungWindow(*v13);
      v19 = v12;
      ++v13;
      if ( v18 )
        v17 = (HWND)v18;
      ++v12;
      ++v3;
      (*a3)[v19] = v17;
    }
    while ( v3 != v16 );
  }
  *a2 = v7;
  return 0LL;
}
