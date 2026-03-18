/*
 * XREFs of ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C0298438
 * Callers:
 *     DxgkDestroyOutputDuplInternal @ 0x1C0298908 (DxgkDestroyOutputDuplInternal.c)
 *     DxgkOutputDuplGetFrameInfo @ 0x1C0298AB0 (DxgkOutputDuplGetFrameInfo.c)
 *     DxgkOutputDuplGetMetaData @ 0x1C0298C90 (DxgkOutputDuplGetMetaData.c)
 *     DxgkOutputDuplGetPointerShapeData @ 0x1C0298E90 (DxgkOutputDuplGetPointerShapeData.c)
 *     DxgkOutputDuplReleaseFrame @ 0x1C0299160 (DxgkOutputDuplReleaseFrame.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C0298078 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v5; // rsi
  unsigned int v7; // r15d
  DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **v11; // rdi
  __int64 v12; // rax
  bool IsRemoteConnection; // al
  BOOL v15; // ebx
  struct DXGADAPTER **v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned int v20; // ebx
  struct DXGADAPTER *v21; // [rsp+30h] [rbp-38h] BYREF
  DXGADAPTER *v22; // [rsp+38h] [rbp-30h] BYREF

  v5 = (unsigned int)a1;
  v7 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v11 = (struct _KTHREAD **)Current;
  if ( Current )
  {
    IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current);
    v15 = IsRemoteConnection;
    v16 = &v21;
    v21 = 0LL;
    if ( IsRemoteConnection )
      v16 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v22, (unsigned int)v5, v11, v16, 1);
    if ( v15 || v21 )
    {
      v20 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(v21, v17, v7, a3, a4);
    }
    else
    {
      v19 = WdLogNewEntry5_WdWarning(0LL, v17, v18);
      v20 = -1073741811;
      *(_QWORD *)(v19 + 24) = v5;
      *(_QWORD *)(v19 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v19);
    }
    if ( v22 )
      DXGADAPTER::ReleaseReferenceNoTracking(v22);
    return v20;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = 43LL;
    WdLogEvent5_WdError(v12);
    return -1073741811LL;
  }
}
