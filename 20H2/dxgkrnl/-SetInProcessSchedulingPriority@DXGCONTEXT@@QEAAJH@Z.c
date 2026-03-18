/*
 * XREFs of ?SetInProcessSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C00E0F60
 * Callers:
 *     DxgkSetContextInProcessSchedulingPriority @ 0x1C00E0D70 (DxgkSetContextInProcessSchedulingPriority.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::SetInProcessSchedulingPriority(DXGCONTEXT *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r8

  v2 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 105) & 0x10) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, DXGCONTEXT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 616LL)
                                                                               + 8LL)
                                                                   + 344LL))(
             *((_QWORD *)this + 34),
             (unsigned int)a2,
             this);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 616LL) + 8LL);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v4 + 352))(*((_QWORD *)this + 37), a2, v4);
}
