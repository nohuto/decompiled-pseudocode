/*
 * XREFs of DxgkCreateAllocation @ 0x1C0156350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     DxgkGetWin32kImportTable @ 0x1C0043944 (DxgkGetWin32kImportTable.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00EE620 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021FEF0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 */

__int64 __fastcall DxgkCreateAllocation(struct _D3DKMT_CREATEALLOCATION *a1, __int64 a2, __int64 a3)
{
  int AllocationInternal; // eax
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int (**Win32kImportTable)(void); // rax

  AllocationInternal = DxgkCreateAllocationInternal(a1, 0LL, a3);
  v4 = AllocationInternal;
  if ( (AllocationInternal == -1071775488 || AllocationInternal == -1073741801)
    && (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    Win32kImportTable = (unsigned int (**)(void))DxgkGetWin32kImportTable(v7, v6);
    if ( (*Win32kImportTable)() )
    {
      if ( byte_1C00AFFF6 )
      {
        DxgCreateLiveDumpWithWdLogs(0x193u, 0x80FuLL, v4, 0LL, 0LL, 0);
        byte_1C00AFFF6 = 0;
      }
    }
  }
  return (unsigned int)v4;
}
