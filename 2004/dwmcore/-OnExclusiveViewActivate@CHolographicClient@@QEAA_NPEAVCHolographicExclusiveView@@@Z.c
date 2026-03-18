/*
 * XREFs of ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NPEAVCHolographicExclusiveView@@@Z @ 0x1802595B4
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x180254FB8 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicClient::OnExclusiveViewActivate(
        CHolographicClient *this,
        struct CHolographicExclusiveView *a2)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(__int64, _QWORD, char *, _QWORD, _DWORD); // rax

  v2 = *((_QWORD *)this + 3);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, char *, _QWORD, _DWORD))(*(_QWORD *)v2 + 120LL);
  if ( a2 )
    return v3(v2, *((unsigned int *)a2 + 36), (char *)a2 + 152, *((unsigned int *)a2 + 17), *((_DWORD *)a2 + 16));
  else
    return v3(v2, 0LL, 0LL, 0LL, 0);
}
