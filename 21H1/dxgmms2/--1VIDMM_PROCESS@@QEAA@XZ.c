/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0076CD0
 * Callers:
 *     VidMmTerminateProcess @ 0x1C0002020 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C002215C (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001710 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C000230C (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0011C9C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C0077574 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0081478 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0084B98 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00BCE78 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this)
{
  __int64 v2; // rbp
  DXGGLOBAL *Global; // rax
  VIDMM_GLOBAL **v4; // rdi
  DXGGLOBAL *v5; // rax
  __int64 v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void *v8; // rdi
  CVirtualAddressAllocator *v9; // rcx
  void *v10; // rcx
  volatile signed __int32 *v11; // rcx
  unsigned int i; // esi
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 **v15; // rdx
  struct _PCW_INSTANCE *v16; // rcx
  VIDMM_GLOBAL *v17; // rcx
  VIDMM_GLOBAL ***v18; // rdx
  __int64 v19; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v2 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global) )
    {
      do
      {
        v4 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8 * v2);
        if ( v4 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v4 + 41040));
          for ( i = 0; i < *((_DWORD *)*v4 + 1750); ++i )
          {
            v13 = (__int64 *)((char *)v4[6] + 296 * i);
            v14 = *v13;
            if ( *v13 )
            {
              if ( *(__int64 **)(v14 + 8) != v13 )
                goto LABEL_35;
              v15 = (__int64 **)v13[1];
              if ( *v15 != v13 )
                goto LABEL_35;
              *v15 = (__int64 *)v14;
              *(_QWORD *)(v14 + 8) = v15;
              *v13 = 0LL;
              v13[1] = 0LL;
            }
            v16 = (struct _PCW_INSTANCE *)v13[31];
            if ( v16 )
              PcwCloseInstance(v16);
          }
          v17 = v4[3];
          if ( *((VIDMM_GLOBAL ***)v17 + 1) != v4 + 3 || (v18 = (VIDMM_GLOBAL ***)v4[4], *v18 != v4 + 3) )
LABEL_35:
            __fastfail(3u);
          *v18 = (VIDMM_GLOBAL **)v17;
          *((_QWORD *)v17 + 1) = v18;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v2) = 0LL;
          v19 = (__int64)*v4 + 41040;
          *(_QWORD *)(v19 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v19, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v4, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v4);
        }
        v2 = (unsigned int)(v2 + 1);
        v5 = DXGGLOBAL::GetGlobal();
      }
      while ( (unsigned int)v2 < (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v5) );
    }
    operator delete(*((void **)this + 2));
  }
  v6 = *((_QWORD *)this + 4);
  if ( !v6 || (*(_BYTE *)(v6 + 347) & 0x20) == 0 )
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    if ( v7 )
    {
      (**v7)(v7, 1LL);
      v6 = *((_QWORD *)this + 4);
    }
  }
  if ( v6 && (*(_BYTE *)(v6 + 347) & 0x20) != 0 )
    VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(this);
  v8 = (void *)*((_QWORD *)this + 5);
  if ( v8 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v8);
  }
  v9 = (CVirtualAddressAllocator *)*((_QWORD *)this + 27);
  if ( v9 )
    CVirtualAddressAllocator::DestroyVaAllocator(v9);
  v10 = (void *)*((_QWORD *)this + 37);
  if ( v10 != (void *)-1LL )
    ObCloseHandle(v10, 0);
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 36);
  if ( v11 )
    VidMmiClosePartition(v11);
}
