/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C01632E4
 * Callers:
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1C0162D68 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C0163290 (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z.c)
 *     DxgkSetContextSchedulingPriority @ 0x1C0163360 (DxgkSetContextSchedulingPriority.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, unsigned int a2, unsigned __int8 a3)
{
  __int64 v5; // rdx
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // r9

  if ( !*((_BYTE *)this + 441) )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = (*((_DWORD *)this + 101) & 0x10) == 0;
    v7 = *(_QWORD *)(v5 + 16);
    v8 = *(unsigned int *)(*(_QWORD *)(v5 + 40) + 432LL);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v7 + 624) + 8LL) + 320LL))(
        *((_QWORD *)this + 32),
        a2,
        a3,
        v8);
    else
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v7 + 624) + 8LL) + 328LL))(
        *((_QWORD *)this + 35),
        a2,
        a3,
        v8);
  }
  *((_DWORD *)this + 108) = a2;
}
