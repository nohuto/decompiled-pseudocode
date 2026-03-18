/*
 * XREFs of ?SetVirtualFunctionPowerState@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE@@@Z @ 0x1C0358EB4
 * Callers:
 *     DxgkDdiSetVirtualFunctionPowerState @ 0x1C035A448 (DxgkDdiSetVirtualFunctionPowerState.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::SetVirtualFunctionPowerState(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _BYTE v12[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]

  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1736);
  else
    v6 = *(_QWORD *)(a1 + 1728);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(v6 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v13);
  v7 = *a3;
  v14 = 1;
  if ( a2 == 1 )
    v8 = *(_QWORD *)(a1 + 1736);
  else
    v8 = *(_QWORD *)(a1 + 1728);
  if ( v8
    && (unsigned int)v7 < *(_DWORD *)(v8 + 12)
    && *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v7)
    && (_mm_lfence(), (v9 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v7)) != 0) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 96LL))(v9, a3);
  }
  else
  {
    WdLogSingleEntry1(2LL, *a3);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid virtual GPU index: %I64n", *a3, 0LL, 0LL, 0LL, 0LL);
    v10 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v10;
}
