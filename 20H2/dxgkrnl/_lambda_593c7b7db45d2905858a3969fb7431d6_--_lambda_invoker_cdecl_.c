/*
 * XREFs of _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C01137A0
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108EE0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C004974C (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C0102900 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01138D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02976BC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C029FAF4 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

__int64 __fastcall lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_(__int64 a1, struct DXGDEVICE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  struct _KTHREAD ***RemoteOutputDuplMgr; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 i; // rsi
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _BYTE v19[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 184)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168)) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v13 + 24) = 1507LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( *(_QWORD *)a1 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)a1 + 16LL)) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v14 + 24) = 2332LL;
      WdLogEvent5_WdAssertion(v14);
    }
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, *(struct _KTHREAD ***)(a1 + 24), 0);
  DXGPUSHLOCK::AcquireExclusive(v20);
  v9 = (_QWORD *)(a1 + 32);
  v21 = 2;
  v10 = *(_QWORD **)(a1 + 32);
  while ( v10 != v9 )
  {
    v15 = v10;
    v10 = (_QWORD *)*v10;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v15) )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v15 + 10); i = (unsigned int)(i + 1) )
          DXGDXGIKEYEDMUTEX::CloseFromDevice((DXGDXGIKEYEDMUTEX *)v15[i + 6]);
      }
    }
    if ( !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v15) )
    {
      v17 = *v15;
      if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v18 = (_QWORD *)v15[1], (_QWORD *)*v18 != v15) )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v15);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  RemoteOutputDuplMgr = (struct _KTHREAD ***)FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(RemoteOutputDuplMgr, a2, 0);
  return 0LL;
}
