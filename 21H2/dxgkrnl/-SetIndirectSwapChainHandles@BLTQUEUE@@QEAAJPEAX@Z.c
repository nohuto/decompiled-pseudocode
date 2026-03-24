/*
 * XREFs of ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C02FF31C
 * Callers:
 *     ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C0211EFC (-DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z.c)
 *     ?Cleanup@BLTQUEUE@@QEAAXXZ @ 0x1C02FCA58 (-Cleanup@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C02AC9AC (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C02ACB48 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 */

__int64 __fastcall BLTQUEUE::SetIndirectSwapChainHandles(BLTQUEUE *this, void *a2)
{
  struct _KMUTANT *v2; // rbx
  struct DXGSWAPCHAIN **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rax
  struct DXGFASTMUTEX *const *v10; // rax
  struct DXGFASTMUTEX *v11; // rdi
  __int64 v12; // rdx
  int v13; // edi
  _BYTE v15[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (struct _KMUTANT *)((char *)this + 2704);
  KeWaitForSingleObject((char *)this + 2704, Executive, 0, 0, 0LL);
  v5 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 337);
  if ( !v5 )
    goto LABEL_5;
  v8 = SwapChainAbandonInternal(*v5);
  if ( v8 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = this;
    *(_QWORD *)(v9 + 32) = **((_QWORD **)this + 337);
    WdLogEvent5_WdError(v9);
  }
  ObfDereferenceObject(*((PVOID *)this + 337));
  *((_QWORD *)this + 337) = 0LL;
  if ( v8 >= 0 )
  {
LABEL_5:
    v8 = 0;
    if ( a2 )
    {
      v10 = (struct DXGFASTMUTEX *const *)SwapChainOpenInternal(a2);
      *((_QWORD *)this + 337) = v10;
      if ( v10 )
      {
        v11 = *v10;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, *v10, 0);
        v13 = *((_DWORD *)v11 + 47);
        if ( v15[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v12);
        *((_DWORD *)this + 691) = v13;
        *((_DWORD *)this + 690) = 1;
      }
      else
      {
        v8 = -1073741823;
      }
    }
  }
  KeReleaseMutex(v2, 0);
  return (unsigned int)v8;
}
