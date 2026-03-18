/*
 * XREFs of ?FindFirstHWRenderAdapter@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0174510
 * Callers:
 *     <none>
 * Callees:
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00079D8 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall FindFirstHWRenderAdapter(struct DXGADAPTER *a1, _QWORD **a2)
{
  __int64 v2; // r8
  struct DXGADAPTER *v3; // rcx
  __int64 v4; // r9

  v2 = *a2[1];
  if ( (!v2 || (*(_DWORD *)(v2 + 348) & 1) == 0)
    && *((_DWORD *)a1 + 50) == 1
    && (g_VgpuReplaceWarp || !*((_BYTE *)a1 + 209))
    && (*((_DWORD *)a1 + 642) & 4) == 0
    && !*((_BYTE *)a1 + 2609)
    && *((_QWORD *)a1 + 338)
    && (*((_DWORD *)a1 + 87) & 0x10) == 0
    && !DXGADAPTER::IsComputeOnlyAdapter(a1) )
  {
    DXGADAPTER_REFERENCE::Assign(*(DXGADAPTER ***)(v4 + 8), v3);
  }
  return 0LL;
}
