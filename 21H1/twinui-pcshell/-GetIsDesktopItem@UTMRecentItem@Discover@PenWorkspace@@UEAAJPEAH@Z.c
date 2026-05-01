/*
 * XREFs of ?GetIsDesktopItem@UTMRecentItem@Discover@PenWorkspace@@UEAAJPEAH@Z @ 0x180201D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::GetIsDesktopItem(
        PenWorkspace::Discover::UTMRecentItem *this,
        int *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = *((_QWORD *)this + 3);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v5 = v4(v3, &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 48LL))(v11, &v10);
    v6 = v5;
    if ( v5 >= 0 )
    {
      *a2 = v10 == 2;
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 90LL;
  }
  else
  {
    v7 = 87LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v6;
}
