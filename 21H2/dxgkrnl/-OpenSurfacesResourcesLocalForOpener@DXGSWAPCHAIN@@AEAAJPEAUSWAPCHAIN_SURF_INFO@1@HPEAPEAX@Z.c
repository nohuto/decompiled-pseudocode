/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02AB99C
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02AA004 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02AB53C (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C004BFC0 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0171A20 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C02AAB2C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForOpener(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        int a3,
        void **a4)
{
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v14; // r15
  __int64 CurrentProcess; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  PERESOURCE *Global; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  PERESOURCE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rdx
  struct DXGPROCESS *Current; // r15
  unsigned int v37; // r14d
  unsigned int v38; // ecx
  __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  bool v42; // zf
  struct DXGSYNCOBJECT *v43; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v44[8]; // [rsp+48h] [rbp-50h] BYREF
  char v45; // [rsp+50h] [rbp-48h]
  __int64 v46; // [rsp+A0h] [rbp+8h]
  unsigned int v47; // [rsp+B0h] [rbp+18h] BYREF

  if ( this[2] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2154LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DXGSWAPCHAIN::SwitchClient((__int64)this, a3 == 0);
  v11 = v9 == 0 ? 0x30 : 0;
  v12 = *(__int64 *)((char *)this + v11 + 104);
  if ( !v12 )
    return 3221225558LL;
  v14 = 32LL * v9;
  v46 = 32LL * (a3 == 0);
  LOBYTE(v10) = -(v9 == 0);
  CurrentProcess = PsGetCurrentProcess(v10, v11);
  v16 = ObDuplicateObject(
          v12,
          *(_QWORD *)((char *)a2 + v14 + 72),
          CurrentProcess,
          (char *)a2 + v46 + 72,
          *((_DWORD *)this + 16),
          0,
          4,
          1);
  v19 = v16;
  if ( v16 >= 0 )
  {
    if ( a4 )
      *a4 = *(void **)((char *)a2 + v46 + 72);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v18, v17);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v44, v26);
    v47 = 0;
    v29 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v28, v27);
    LODWORD(v19) = DXGGLOBAL::OpenSyncObject(v29, *((unsigned int *)a2 + 7), &v43, &v47, 0LL);
    if ( (int)v19 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v31, v30);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v37 = v47;
      v38 = (v47 >> 6) & 0xFFFFFF;
      if ( v38 < *((_DWORD *)Current + 64) )
      {
        v39 = *((_QWORD *)Current + 30);
        if ( ((v47 >> 25) & 0x60) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x60)
          && (*(_DWORD *)(v39 + 16LL * v38 + 8) & 0x1F) != 0 )
        {
          v40 = 2 * (((unsigned __int64)v47 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v39 + 16 * (((unsigned __int64)v47 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v41 = WdLogNewEntry5_WdAssertion((v47 >> 25) & 0x60, v39);
            *(_QWORD *)(v41 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v41);
            v39 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v39 + 8 * v40 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v42 = v45 == 0;
      *(_DWORD *)((char *)a2 + v46 + 56) = v37;
      if ( !v42 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
      *((_BYTE *)a2 + v46 + 48) = 1;
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v31, v30);
      v33 = *((unsigned int *)a2 + 7);
      v34 = v32;
      *(_QWORD *)(v32 + 24) = v33;
      *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v33, v35);
      WdLogEvent5_WdError(v34);
      if ( v45 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v18, v17);
    v21 = *(_QWORD *)((char *)a2 + v14 + 72);
    v22 = v20;
    *(_QWORD *)(v20 + 24) = v21;
    *(_QWORD *)(v20 + 32) = v12;
    v24 = PsGetCurrentProcess(v21, v23);
    *(_QWORD *)(v22 + 48) = v19;
    *(_QWORD *)(v22 + 40) = v24;
    WdLogEvent5_WdError(v22);
  }
  if ( (int)v19 < 0 )
    DXGSWAPCHAIN::DestroySwapchainLocalClient(
      (DXGSWAPCHAIN *)this,
      (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)((char *)this + (a3 != 0 ? 136LL : 88LL)));
  return (unsigned int)v19;
}
