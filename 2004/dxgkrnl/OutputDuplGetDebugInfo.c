/*
 * XREFs of OutputDuplGetDebugInfo @ 0x1C029D918
 * Callers:
 *     DxgkEscape @ 0x1C00F8350 (DxgkEscape.c)
 * Callees:
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009C94 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0114A50 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C015C580 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C02999C0 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDebugInfo(struct DXGADAPTER *a1, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  struct DXGADAPTER **v4; // rbx
  __int64 v5; // rdx
  struct DXGADAPTER **v6; // rax
  int OutputDuplManager; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int DebugInfo; // edi
  UINT *RemoteOutputDuplMgr; // rax
  DXGADAPTER *v15; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-20h] BYREF
  DXGADAPTER *v17; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-10h] BYREF
  OUTPUTDUPL_MGR *v19; // [rsp+70h] [rbp+8h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v17, (__int64)a2);
    v6 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v15, v5);
    OutputDuplManager = FindOutputDuplManager(a1, 0LL, v6, &v16, v4, &v18, &v19);
    DebugInfo = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = OutputDuplManager;
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = (UINT *)v19;
  }
  else
  {
    RemoteOutputDuplMgr = (UINT *)FindRemoteOutputDuplMgr(0LL, (__int64)a2);
  }
  if ( RemoteOutputDuplMgr )
  {
    DebugInfo = OUTPUTDUPL_MGR::GetDebugInfo(RemoteOutputDuplMgr, a2);
  }
  else
  {
    DebugInfo = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = 3004LL;
  }
LABEL_9:
  DXGADAPTER_REFERENCE::Assign(&v15, 0LL);
  DXGADAPTER_REFERENCE::Assign(&v17, 0LL);
  return DebugInfo;
}
