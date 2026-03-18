/*
 * XREFs of ?GetDeviceLocation@ADAPTER_RENDER@@QEAAXW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C0357824
 * Callers:
 *     DxgkDdiGetDeviceLocation @ 0x1C0359618 (DxgkDdiGetDeviceLocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::GetDeviceLocation(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _BYTE v10[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]

  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1736);
  else
    v6 = *(_QWORD *)(a1 + 1728);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(v6 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v7 = *a3;
  v12 = 1;
  if ( a2 == 1 )
    v8 = *(_QWORD *)(a1 + 1736);
  else
    v8 = *(_QWORD *)(a1 + 1728);
  if ( v8
    && (unsigned int)v7 < *(_DWORD *)(v8 + 12)
    && *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v7)
    && (_mm_lfence(), (v9 = *(_QWORD *)(*(_QWORD *)(v8 + 24) + 8 * v7)) != 0) )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 88LL))(v9, a3);
  }
  else
  {
    WdLogSingleEntry1(2LL, *a3);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid virtual GPU index: %I64n", *a3, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
