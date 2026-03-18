/*
 * XREFs of OutputDuplRemoteSessionReconnected @ 0x1C0299AD4
 * Callers:
 *     DxgkSessionReconnected @ 0x1C0164970 (DxgkSessionReconnected.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C011C210 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0297A04 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 */

void __fastcall OutputDuplRemoteSessionReconnected(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v2 = a1;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(a1, a2);
  v4 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3), 0);
    DXGPUSHLOCK::AcquireExclusive(v11);
    v12 = 2;
    v5 = OUTPUTDUPL_MGR::ReconfigureNumSources(v4, v2);
    v8 = v5;
    if ( v5 != -1073741801 )
    {
      if ( v5 >= 0 )
        goto LABEL_6;
      v9 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v9 + 24) = 3961LL;
      WdLogEvent5_WdAssertion(v9);
    }
    if ( v8 < 0 )
    {
LABEL_7:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
      return;
    }
LABEL_6:
    *((_DWORD *)v4 + 12) = 1;
    goto LABEL_7;
  }
}
