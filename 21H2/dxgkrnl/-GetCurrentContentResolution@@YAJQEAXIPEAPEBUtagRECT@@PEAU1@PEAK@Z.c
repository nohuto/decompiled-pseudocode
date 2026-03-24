/*
 * XREFs of ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C0145368
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0145660 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall GetCurrentContentResolution(
        DXGADAPTER *a1,
        unsigned int a2,
        const struct tagRECT **a3,
        struct tagRECT *a4,
        unsigned int *a5)
{
  __int64 v6; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  struct tagRECT v13; // xmm0
  const struct tagRECT *v14; // rax
  unsigned int v15; // ecx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v17 + 24) = 1010LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 112LL) + 3968 * v6;
  if ( !v11 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v18 + 24) = 1013LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v12 = *(_QWORD *)(v11 + 48);
  if ( v12 )
  {
    v13 = *(struct tagRECT *)(v11 + 652);
    v14 = (const struct tagRECT *)(v12 + 24);
    v15 = *(_DWORD *)(v12 + 40);
    *a3 = v14;
    *a4 = v13;
    *a5 = v15;
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(0LL, v9);
    *(_QWORD *)(v19 + 24) = v11;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
}
