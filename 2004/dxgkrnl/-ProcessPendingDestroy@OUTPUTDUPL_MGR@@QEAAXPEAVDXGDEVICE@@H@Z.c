/*
 * XREFs of ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C0103A80
 * Callers:
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C0114920 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0114A00 (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0157A60 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0157ABC (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1C0297F90 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C029CAC8 (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C004980C (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C029869C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C02A0AD4 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::ProcessPendingDestroy(struct _KTHREAD ***this, struct DXGDEVICE *a2, int a3)
{
  struct _KTHREAD **v5; // rcx
  struct _KTHREAD **v7; // r14
  struct _KTHREAD **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _KTHREAD **v12; // rbx
  __int64 i; // rsi
  struct _KTHREAD *v14; // rax
  struct _KTHREAD ***v15; // rcx
  char v16[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+30h] [rbp-28h]

  v5 = *this;
  if ( v5 && !DXGADAPTER::IsCoreResourceSharedOwner(v5[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 2332LL;
    WdLogEvent5_WdAssertion(v11);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, this[3], 0);
  DXGPUSHLOCK::AcquireExclusive(v17);
  v7 = (struct _KTHREAD **)(this + 4);
  v18 = 2;
  v8 = this[4];
  while ( v8 != v7 )
  {
    v12 = v8;
    v8 = (struct _KTHREAD **)*v8;
    if ( a2 )
    {
      if ( a2 == OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v12) )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v12 + 10); i = (unsigned int)(i + 1) )
          DXGDXGIKEYEDMUTEX::CloseFromDevice(v12[i + 6]);
      }
    }
    if ( a3 || !OUTPUTDUPL_CONTEXT::GetProducerDevice((OUTPUTDUPL_CONTEXT *)v12) )
    {
      v14 = *v12;
      if ( *((struct _KTHREAD ***)*v12 + 1) != v12 || (v15 = (struct _KTHREAD ***)v12[1], *v15 != v12) )
        __fastfail(3u);
      *v15 = (struct _KTHREAD **)v14;
      *((_QWORD *)v14 + 1) = v15;
      OUTPUTDUPL_CONTEXT::`scalar deleting destructor'((OUTPUTDUPL_CONTEXT *)v12);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
}
