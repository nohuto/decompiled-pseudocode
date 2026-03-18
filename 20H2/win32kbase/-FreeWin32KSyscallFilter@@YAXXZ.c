/*
 * XREFs of ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00BBF60
 * Callers:
 *     InitializeWin32KSyscallFilter @ 0x1C008E730 (InitializeWin32KSyscallFilter.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0120150 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void FreeWin32KSyscallFilter(void)
{
  PVOID *v0; // rbx
  __int64 v1; // rdi

  v0 = (PVOID *)gaWin32KFilterBitmap;
  v1 = 7LL;
  do
  {
    if ( *v0 )
    {
      ExFreePoolWithTag(*v0, 0);
      *v0 = 0LL;
    }
    ++v0;
    --v1;
  }
  while ( v1 );
  if ( gafServiceFilterAuditCache )
  {
    ExFreePoolWithTag(gafServiceFilterAuditCache, 0);
    gafServiceFilterAuditCache = 0LL;
  }
  if ( gafServiceFilterAuditStackCache )
  {
    ExFreePoolWithTag(gafServiceFilterAuditStackCache, 0);
    gafServiceFilterAuditStackCache = 0LL;
  }
}
