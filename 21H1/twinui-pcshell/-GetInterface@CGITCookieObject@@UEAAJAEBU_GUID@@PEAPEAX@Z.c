/*
 * XREFs of ?GetInterface@CGITCookieObject@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180079940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITCookieObject::GetInterface(CGITCookieObject *this, const struct _GUID *a2, void **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *, void **))(**((_QWORD **)this + 7) + 40LL))(
         *((_QWORD *)this + 7),
         *((unsigned int *)this + 12),
         a2,
         a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"shell\\lib\\gitreglist.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
