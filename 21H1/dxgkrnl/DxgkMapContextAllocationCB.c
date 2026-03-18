/*
 * XREFs of DxgkMapContextAllocationCB @ 0x1C024D5B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013B6C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkMapContextAllocationCB(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 DxgAdapter; // rax
  __int64 v6; // rbx
  _BYTE v8[8]; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v8);
  DxgAdapter = DpiGetDxgAdapter(a1, v4);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(DxgAdapter + 2680) + 640LL) + 8LL)
                                                  + 840LL))(
         *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2680) + 648LL),
         a2);
  if ( v8[0] )
    KeUnstackDetachProcess(&ApcState);
  return v6;
}
