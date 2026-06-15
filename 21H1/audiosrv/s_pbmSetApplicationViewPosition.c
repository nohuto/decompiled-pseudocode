/*
 * XREFs of s_pbmSetApplicationViewPosition @ 0x1800F97D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 s_pbmSetApplicationViewPosition()
{
  int v0; // eax
  unsigned int v1; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !g_PolicyManager )
    return 0LL;
  v0 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 336LL))(g_PolicyManager);
  v1 = v0;
  if ( v0 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3DB,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v0);
  return v1;
}
