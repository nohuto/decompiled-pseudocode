/*
 * XREFs of ?SendInputModalityEvent@InputServiceProxy@@UEAAJUInputModalityInfo@@@Z @ 0x1801040C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::SendInputModalityEvent(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // xmm0_8
  __int64 v4; // rax
  int v5; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(__int64 **)(a1 + 32);
  if ( v2 )
  {
    v3 = *a2;
    v4 = *v2;
    v8 = *((_DWORD *)a2 + 2);
    *(_QWORD *)v7 = v3;
    v5 = (*(__int64 (__fastcall **)(__int64 *, int *))(v4 + 256))(v2, v7);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        225LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
  }
  return 0LL;
}
