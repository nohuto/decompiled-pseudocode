/*
 * XREFs of DxgkCreateAllocation @ 0x1C01036E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     DxgkGetWin32kImportTable @ 0x1C0042A24 (DxgkGetWin32kImportTable.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0103720 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021CE50 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 */

__int64 __fastcall DxgkCreateAllocation(struct _D3DKMT_CREATEALLOCATION *a1)
{
  int AllocationInternal; // eax
  unsigned __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int (**Win32kImportTable)(void); // rax

  AllocationInternal = DxgkCreateAllocationInternal(a1, 0LL);
  v2 = AllocationInternal;
  if ( (AllocationInternal == -1071775488 || AllocationInternal == -1073741801)
    && (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    Win32kImportTable = (unsigned int (**)(void))DxgkGetWin32kImportTable(v5, v4);
    if ( (*Win32kImportTable)() )
    {
      if ( byte_1C00AEFF6 )
      {
        DxgCreateLiveDumpWithWdLogs(0x193u, 0x80FuLL, v2, 0LL, 0LL, 0);
        byte_1C00AEFF6 = 0;
      }
    }
  }
  return (unsigned int)v2;
}
