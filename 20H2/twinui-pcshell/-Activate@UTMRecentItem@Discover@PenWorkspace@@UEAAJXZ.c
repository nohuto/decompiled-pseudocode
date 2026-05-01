/*
 * XREFs of ?Activate@UTMRecentItem@Discover@PenWorkspace@@UEAAJXZ @ 0x180224360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180219A30 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::UTMRecentItem::Activate(PenWorkspace::Discover::UTMRecentItem *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rbx
  int v3; // eax
  int v4; // edx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v1 = *((_QWORD *)this + 3);
  v2 = *(__int64 (__fastcall **)(__int64, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v1 + 128LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  v3 = v2(v1, &v10);
  v6 = v3;
  if ( v3 >= 0 )
  {
    v3 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
           v10,
           v4,
           v5);
    v6 = v3;
    if ( v3 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 118LL;
  }
  else
  {
    v7 = 116LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v6;
}
