/*
 * XREFs of ?OpenSurfacesResourcesLocalForCreator@DXGSWAPCHAIN@@AEAAJPEAUSWAPCHAIN_SURF_INFO@1@PEAUSWAPCHAIN_CLIENT_SURF_INFO@1@PEAX@Z @ 0x1C02AB678
 * Callers:
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02AA250 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     McTemplateK0pqp_EtwWriteTransfer @ 0x1C004C3E4 (McTemplateK0pqp_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0171A20 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenSurfacesResourcesLocalForCreator(
        struct _KTHREAD **this,
        struct DXGSWAPCHAIN::SWAPCHAIN_SURF_INFO *a2,
        struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_SURF_INFO *a3,
        void *a4)
{
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  PVOID v15; // rbx
  __int64 v16; // rax
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 CurrentProcess; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  PERESOURCE *Global; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // r15d
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  struct DXGPROCESS *Current; // rsi
  unsigned int v40; // edi
  unsigned int v41; // ecx
  __int64 v42; // rdx
  int v43; // r8d
  __int64 v44; // rax
  PVOID *Object; // [rsp+20h] [rbp-40h]
  char v46; // [rsp+38h] [rbp-28h]
  __int64 v47; // [rsp+40h] [rbp-20h] BYREF
  struct DXGSYNCOBJECT *v48; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v49[8]; // [rsp+50h] [rbp-10h] BYREF
  char v50; // [rsp+58h] [rbp-8h]
  unsigned int v51; // [rsp+A0h] [rbp+40h] BYREF
  PVOID v52; // [rsp+A8h] [rbp+48h] BYREF

  if ( this[2] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 2057LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *(_QWORD *)a2 = 0LL;
  v52 = 0LL;
  v9 = ObReferenceObjectByHandle(a4, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v52, 0LL);
  v12 = v9;
  if ( v9 < 0 )
    goto LABEL_4;
  v15 = v52;
  if ( v52 )
  {
    v16 = *((_QWORD *)v52 + 2);
    if ( v16 )
    {
      v17 = (__int64 *)(v16 + 136);
      v18 = 0LL;
      v19 = *v17;
      if ( (__int64 *)*v17 != v17 )
        v18 = *(_QWORD *)(v19 - 40);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      {
        LODWORD(Object) = (a2 - this[7]) / 112;
        McTemplateK0pqp_EtwWriteTransfer(v19, (a2 - this[7]) / 112, v18, this, Object, v18);
      }
    }
  }
  ObfDereferenceObject(v15);
  v47 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v21, v20);
  v25 = PsGetCurrentProcess(v24, v23);
  v46 = 1;
  v26 = ObDuplicateObject(v25, a4, CurrentProcess, &v47, 0, 0, 6, v46);
  v12 = v26;
  if ( v26 < 0 )
  {
LABEL_4:
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = a4;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  else
  {
    *((_QWORD *)a3 + 3) = v47;
    *((_QWORD *)a3 + 2) = a4;
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v11, v10);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v49, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v49, v28);
    v51 = 0;
    v31 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v30, v29);
    v34 = DXGGLOBAL::OpenSyncObject(v31, *((unsigned int *)a2 + 7), &v48, &v51, 0LL);
    if ( v34 >= 0 )
    {
      Current = DXGPROCESS::GetCurrent(v33, v32);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
      v40 = v51;
      v41 = (v51 >> 6) & 0xFFFFFF;
      if ( v41 < *((_DWORD *)Current + 64) )
      {
        v42 = *((_QWORD *)Current + 30);
        v43 = *(_DWORD *)(v42 + 16LL * v41 + 8);
        if ( ((v51 >> 25) & 0x60) == (v43 & 0x60) && (v43 & 0x1F) != 0 )
        {
          if ( (*(_DWORD *)(v42 + 16 * (((unsigned __int64)v51 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
          {
            v44 = WdLogNewEntry5_WdAssertion((v51 >> 25) & 0x60, v42);
            *(_QWORD *)(v44 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v44);
            v42 = *((_QWORD *)Current + 30);
          }
          *(_DWORD *)(v42 + 16 * (((unsigned __int64)v40 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 27) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      *((_DWORD *)a3 + 2) = v40;
      if ( v50 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v49);
      *(_BYTE *)a3 = 1;
    }
    else
    {
      v35 = WdLogNewEntry5_WdError(v33, v32);
      v36 = *((unsigned int *)a2 + 7);
      v37 = v35;
      *(_QWORD *)(v35 + 24) = v36;
      *(_QWORD *)(v35 + 32) = PsGetCurrentProcess(v36, v38);
      WdLogEvent5_WdError(v37);
      if ( v50 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v49);
    }
    return (unsigned int)v34;
  }
}
