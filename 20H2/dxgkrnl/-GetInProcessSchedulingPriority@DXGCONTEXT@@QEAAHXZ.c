/*
 * XREFs of ?GetInProcessSchedulingPriority@DXGCONTEXT@@QEAAHXZ @ 0x1C022DA4C
 * Callers:
 *     DxgkGetContextInProcessSchedulingPriority @ 0x1C02581E0 (DxgkGetContextInProcessSchedulingPriority.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::GetInProcessSchedulingPriority(DXGCONTEXT *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL);
  if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD))(v1 + 368))(*((_QWORD *)this + 37));
  else
    return (*(__int64 (__fastcall **)(_QWORD))(v1 + 360))(*((_QWORD *)this + 34));
}
