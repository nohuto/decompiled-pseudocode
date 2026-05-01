/*
 * XREFs of ?GetWindowDesktopId@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAU_GUID@@@Z @ 0x18044A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopsApi::GetWindowDesktopId(VirtualDesktopsApi *this, HWND a2, struct _GUID *a3)
{
  __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64, HWND, __int64 *); // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+18h] BYREF

  *a3 = GUID_NULL;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &SRWLock);
  v6 = *((_QWORD *)this + 12);
  if ( !v6 )
  {
    v7 = -2147019873;
    v8 = 89LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_10;
  }
  if ( !a2 )
  {
    v7 = -2147024809;
    v8 = 90LL;
    goto LABEL_5;
  }
  v13 = 0LL;
  v9 = *(__int64 (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v7 = v9(v6, a2, &v13);
  if ( v7 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v13 + 200LL))(v13, a3);
    v7 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
        (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
LABEL_10:
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return (unsigned int)v7;
}
