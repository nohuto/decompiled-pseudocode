/*
 * XREFs of ?WriteVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK@@@Z @ 0x1C0236540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::WriteVirtualFunctionConfigBlock(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK *a2,
        __int64 a3)
{
  __int64 v4; // rax

  v4 = WdLogNewEntry5_WdWarning(this, a2, a3);
  *(_QWORD *)(v4 + 24) = a2->VirtualFunctionIndex;
  WdLogEvent5_WdWarning(v4);
  return 0LL;
}
