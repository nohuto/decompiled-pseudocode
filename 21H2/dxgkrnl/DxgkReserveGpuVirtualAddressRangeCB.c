/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1C0156940
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C00027C8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00067D8 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     DpiGetDxgAdapter @ 0x1C0013140 (DpiGetDxgAdapter.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGADAPTER *DxgAdapter; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int128 *v13; // rsi
  unsigned int v14; // ecx
  unsigned int v15; // edi
  __int64 v17; // rax
  int v18; // eax
  __int128 v19; // [rsp+20h] [rbp-29h] BYREF
  __int128 v20; // [rsp+30h] [rbp-19h]
  __int128 v21; // [rsp+40h] [rbp-9h]
  _BYTE v22[8]; // [rsp+50h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v22);
  if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v5, v4) + 347) & 0x10) != 0 )
  {
    v17 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v17 + 24) = 319LL;
    WdLogEvent5_WdError(v17);
    v15 = -1073741811;
  }
  else
  {
    DxgAdapter = (struct DXGADAPTER *)DpiGetDxgAdapter(a1, v6);
    Global = DXGGLOBAL::GetGlobal(v10, v9);
    if ( *((_BYTE *)Global + 1554)
      && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
           (struct DXGGLOBAL *)((char *)Global + 1548),
           DxgAdapter) )
    {
      v15 = -1073741637;
    }
    else
    {
      v12 = *((_QWORD *)DxgAdapter + 338);
      v13 = a2;
      v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 27) + 64LL) + 40LL) + 28LL);
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      if ( v14 <= 0x5003 )
      {
        v18 = *((_DWORD *)a2 + 4);
        v13 = &v19;
        *(_QWORD *)&v21 = 0LL;
        *((_QWORD *)&v20 + 1) = 0LL;
        LODWORD(v20) = v18;
        v19 = *a2;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(*(_QWORD *)(v12 + 640) + 8LL) + 832LL))(
              *(_QWORD *)(v12 + 648),
              v13);
      *((_QWORD *)a2 + 3) = *((_QWORD *)v13 + 3);
    }
  }
  if ( v22[0] )
    KeUnstackDetachProcess(&ApcState);
  return v15;
}
