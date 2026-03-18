/*
 * XREFs of ?ResolveGpuTimestamp@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801AE490
 * Callers:
 *     ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x1801AE428 (-ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CComputeScribbleStopwatch::ResolveGpuTimestamp(CComputeScribbleStopwatch *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD *v6; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7[0] = 0LL;
  v7[1] = 8LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD **))(**((_QWORD **)this + 5) + 64LL))(
         *((_QWORD *)this + 5),
         0LL,
         v7,
         &v6);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *((_QWORD *)this + 7) = *v6;
    v5 = *((_QWORD *)this + 5);
    v8 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v5 + 72LL))(v5, 0LL, &v8);
    result = 0LL;
    *((_BYTE *)this + 64) = 1;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  return result;
}
