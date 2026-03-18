/*
 * XREFs of ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C03242FC
 * Callers:
 *     DxgkDestroyOutputDuplInternal @ 0x1C03247E8 (DxgkDestroyOutputDuplInternal.c)
 *     DxgkOutputDuplGetFrameInfo @ 0x1C03249B0 (DxgkOutputDuplGetFrameInfo.c)
 *     DxgkOutputDuplGetMetaData @ 0x1C0324B80 (DxgkOutputDuplGetMetaData.c)
 *     DxgkOutputDuplGetPointerShapeData @ 0x1C0324D70 (DxgkOutputDuplGetPointerShapeData.c)
 *     DxgkOutputDuplReleaseFrame @ 0x1C0325080 (DxgkOutputDuplReleaseFrame.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C0323DF0 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(struct OUTPUTDUPL_MGR *, __int64))
{
  unsigned int v6; // esi
  unsigned int v7; // ebp
  struct _KTHREAD **Current; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  struct DXGADAPTER *v12; // [rsp+50h] [rbp-28h] BYREF
  DXGADAPTER *v13; // [rsp+58h] [rbp-20h] BYREF

  v6 = a2;
  v7 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, (__int64)a4);
  if ( Current )
  {
    v12 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v13, v7, Current, &v12, 1);
    v11 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(v12, v10, v6, a3, a4);
    if ( v13 )
      DXGADAPTER::ReleaseReference(v13);
    return v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, 43LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 43LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
