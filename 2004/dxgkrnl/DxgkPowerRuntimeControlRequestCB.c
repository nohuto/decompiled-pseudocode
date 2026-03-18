/*
 * XREFs of DxgkPowerRuntimeControlRequestCB @ 0x1C0042350
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D430 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0pj_EtwWriteTransfer @ 0x1C00391CC (McTemplateK0pj_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkPowerRuntimeControlRequestCB(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rdx
  __int64 DxgAdapter; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rax
  _BYTE v20[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v20);
  DxgAdapter = DpiGetDxgAdapter(a1, v11);
  v16 = DxgAdapter;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pj_EtwWriteTransfer(v14, &Dxgk_PowerRuntimeControlRequestCB, v15, DxgAdapter, a2);
  if ( v16 && *(_BYTE *)(v16 + 3241) )
  {
    v17 = PoFxPowerControl(*(_QWORD *)(v16 + 2808), a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v18 + 24) = 490LL;
    WdLogEvent5_WdError(v18);
    v17 = -1073741823;
  }
  if ( v20[0] )
    KeUnstackDetachProcess(&ApcState);
  return v17;
}
