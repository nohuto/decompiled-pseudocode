/*
 * XREFs of ?OpenSurfacesResourcesLocalForOpener@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@HPEAPEAX@Z @ 0x1C02A6FA0
 * Callers:
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02A5634 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02A6B40 (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?SwitchClient@DXGSWAPCHAIN@@AEAA?AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z @ 0x1C004A120 (-SwitchClient@DXGSWAPCHAIN@@AEAA-AW4SWAPCHAIN_CLIENT_TYPE@1@W421@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C015E270 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C02A612C (-DestroySwapchainLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
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
  __int64 v36; // rdx
  struct DXGPROCESS *Current; // r15
  unsigned int v38; // r14d
  unsigned int v39; // ecx
  __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  bool v44; // zf
  struct DXGSYNCOBJECT *v45; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v46[8]; // [rsp+48h] [rbp-50h] BYREF
  char v47; // [rsp+50h] [rbp-48h]
  __int64 v48; // [rsp+A0h] [rbp+8h]
  unsigned int v49; // [rsp+B0h] [rbp+18h] BYREF

  if ( this[2] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2143LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = DXGSWAPCHAIN::SwitchClient((__int64)this, a3 == 0);
  v11 = v9 == 0 ? 0x30 : 0;
  v12 = *(__int64 *)((char *)this + v11 + 104);
  if ( !v12 )
    return 3221225558LL;
  v14 = 32LL * v9;
  v48 = 32LL * (a3 == 0);
  LOBYTE(v10) = -(v9 == 0);
  CurrentProcess = PsGetCurrentProcess(v10, v11);
  v16 = ObDuplicateObject(
          v12,
          *(_QWORD *)((char *)a2 + v14 + 72),
          CurrentProcess,
          (char *)a2 + v48 + 72,
          *((_DWORD *)this + 16),
          0,
          4,
          1);
  v19 = v16;
  if ( v16 >= 0 )
  {
    if ( a4 )
      *a4 = *(void **)((char *)a2 + v48 + 72);
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v18, v17);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v46, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v46, v26);
    v49 = 0;
    v29 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v28, v27);
    LODWORD(v19) = DXGGLOBAL::OpenSyncObject(v29, *((unsigned int *)a2 + 7), &v45, &v49, 0LL);
    if ( (int)v19 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v31, v30);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v38 = v49;
      v39 = (v49 >> 6) & 0xFFFFFF;
      if ( v39 < *((_DWORD *)Current + 64) )
      {
        v40 = *((_QWORD *)Current + 30);
        if ( ((v49 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16LL * v39 + 8) & 0x60)
          && (*(_DWORD *)(v40 + 16LL * v39 + 8) & 0x1F) != 0 )
        {
          v41 = 2 * (((unsigned __int64)v49 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v40 + 16 * (((unsigned __int64)v49 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v42 = WdLogNewEntry5_WdAssertion((v49 >> 25) & 0x60, v40);
            *(_QWORD *)(v42 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v42);
            v40 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v40 + 8 * v41 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v44 = v47 == 0;
      *(_DWORD *)((char *)a2 + v48 + 56) = v38;
      if ( !v44 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46, v43);
      *((_BYTE *)a2 + v48 + 48) = 1;
    }
    else
    {
      v32 = WdLogNewEntry5_WdError(v31, v30);
      v33 = *((unsigned int *)a2 + 7);
      v34 = v32;
      *(_QWORD *)(v32 + 24) = v33;
      *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v33, v35);
      WdLogEvent5_WdError(v34);
      if ( v47 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v46, v36);
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
