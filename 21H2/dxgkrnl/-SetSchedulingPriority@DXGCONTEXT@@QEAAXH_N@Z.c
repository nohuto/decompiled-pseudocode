/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C00E1D40
 * Callers:
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C00E12D0 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C00E18D0 (DxgkSetContextSchedulingPriority.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C00E1CEC (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, unsigned int a2, unsigned __int8 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rax

  if ( !*((_BYTE *)this + 457) )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *(unsigned int *)(*(_QWORD *)(v5 + 40) + 352LL);
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 616LL) + 8LL);
    if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v7 + 328))(*((_QWORD *)this + 37), a2, a3, v6);
    else
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v7 + 320))(*((_QWORD *)this + 34), a2, a3, v6);
  }
  *((_DWORD *)this + 112) = a2;
}
