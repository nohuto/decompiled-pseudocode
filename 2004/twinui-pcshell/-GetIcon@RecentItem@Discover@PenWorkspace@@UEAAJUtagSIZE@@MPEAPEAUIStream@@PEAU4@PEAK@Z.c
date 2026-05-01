/*
 * XREFs of ?GetIcon@RecentItem@Discover@PenWorkspace@@UEAAJUtagSIZE@@MPEAPEAUIStream@@PEAU4@PEAK@Z @ 0x180224CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentItem::GetIcon(
        PenWorkspace::Discover::RecentItem *this,
        struct tagSIZE a2,
        float a3,
        struct IStream **a4,
        struct tagSIZE *a5,
        unsigned int *a6)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (*(__int64 (__fastcall **)(_QWORD, struct tagSIZE, struct tagSIZE *, struct IStream **, struct tagSIZE *, unsigned int *))(**((_QWORD **)this + 2) + 80LL))(
         *((_QWORD *)this + 2),
         a2,
         a5,
         a4,
         a5,
         a6);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentitem.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
