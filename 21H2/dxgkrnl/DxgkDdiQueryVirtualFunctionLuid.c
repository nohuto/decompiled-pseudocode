/*
 * XREFs of DxgkDdiQueryVirtualFunctionLuid @ 0x1C023177C
 * Callers:
 *     ?DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z @ 0x1C0059150 (-DpiQueryVirtualFunctionLuid@@YAJPEAXGPEAU_LUID@@@Z.c)
 *     DpiMitigatedRangeUpdate @ 0x1C02C6AC0 (DpiMitigatedRangeUpdate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C004005C (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00400A4 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DxgkDdiQueryVirtualFunctionLuid(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rcx
  DXGVIRTUALGPUMANAGER *v7; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  _DWORD v12[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h]

  v12[1] = 0;
  v5 = a1[338];
  v12[0] = a3;
  v13 = a4;
  if ( (_DWORD)a2 == 1 )
    v7 = *(DXGVIRTUALGPUMANAGER **)(v5 + 1640);
  else
    v7 = *(DXGVIRTUALGPUMANAGER **)(v5 + 1632);
  if ( v7 && (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v7, a3)) != 0LL )
  {
    (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _DWORD *))(*(_QWORD *)VirtualGpuByIndex + 112LL))(
      VirtualGpuByIndex,
      v12);
    v9 = 0;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v7, a2);
    *(_QWORD *)(v10 + 24) = v12[0];
    WdLogEvent5_WdError(v10);
    v9 = -1073741811;
  }
  if ( bTracingEnabled )
    VgpuTrace(1, v9, a1, L"DxgkDdiQueryVirtualFunctionLuid", (wchar_t *)L"%d", a3);
  return v9;
}
