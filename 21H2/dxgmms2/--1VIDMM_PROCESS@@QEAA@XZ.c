/*
 * XREFs of ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C008245C
 * Callers:
 *     VidMmTerminateProcess @ 0x1C00015B0 (VidMmTerminateProcess.c)
 *     ??_GVIDMM_PROCESS@@QEAAPEAXI@Z @ 0x1C002CA14 (--_GVIDMM_PROCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0001868 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000188C (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C00018B0 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014B6C (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ??1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ @ 0x1C0082D08 (--1VIDMM_PROCESS_FENCE_STORAGE@@QEAA@XZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C009D21C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A2170 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ @ 0x1C00E14B0 (-FreeVmProcessFencePageInGlobalStorage@VIDMM_PROCESS@@QEAAXXZ.c)
 */

void __fastcall VIDMM_PROCESS::~VIDMM_PROCESS(VIDMM_PROCESS *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  DXGGLOBAL *Global; // rax
  VIDMM_GLOBAL **v7; // rdi
  DXGGLOBAL *v8; // rax
  __int64 v9; // rdx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  void *v11; // rdi
  CVirtualAddressAllocator *v12; // rcx
  void *v13; // rcx
  volatile signed __int32 *v14; // rcx
  unsigned int i; // esi
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rdx
  struct _PCW_INSTANCE *v19; // rcx
  VIDMM_GLOBAL *v20; // rcx
  VIDMM_GLOBAL ***v21; // rdx
  __int64 v22; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_QWORD *)this + 2) )
  {
    v5 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    if ( (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
    {
      do
      {
        v7 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8 * v5);
        if ( v7 )
        {
          DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)*v7 + 41040));
          for ( i = 0; i < *((_DWORD *)*v7 + 1754); ++i )
          {
            v16 = (__int64 *)((char *)v7[6] + 296 * i);
            v17 = *v16;
            if ( *v16 )
            {
              if ( *(__int64 **)(v17 + 8) != v16 )
                goto LABEL_35;
              v18 = (__int64 **)v16[1];
              if ( *v18 != v16 )
                goto LABEL_35;
              *v18 = (__int64 *)v17;
              *(_QWORD *)(v17 + 8) = v18;
              *v16 = 0LL;
              v16[1] = 0LL;
            }
            v19 = (struct _PCW_INSTANCE *)v16[31];
            if ( v19 )
              PcwCloseInstance(v19);
          }
          v20 = v7[3];
          if ( *((VIDMM_GLOBAL ***)v20 + 1) != v7 + 3 || (v21 = (VIDMM_GLOBAL ***)v7[4], *v21 != v7 + 3) )
LABEL_35:
            __fastfail(3u);
          *v21 = (VIDMM_GLOBAL **)v20;
          *((_QWORD *)v20 + 1) = v21;
          *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5) = 0LL;
          v22 = (__int64)*v7 + 41040;
          *(_QWORD *)(v22 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v22, 0LL);
          KeLeaveCriticalRegion();
          VIDMM_GLOBAL::RequestNewBudget(*v7, 1);
          VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'((VIDMM_PROCESS_ADAPTER_INFO *)v7);
        }
        v5 = (unsigned int)(v5 + 1);
        v8 = DXGGLOBAL::GetGlobal();
      }
      while ( (unsigned int)v5 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(v8) );
    }
    operator delete(*((void **)this + 2));
  }
  v9 = *((_QWORD *)this + 4);
  if ( v9 && (*(_DWORD *)(v9 + 424) & 0x100) != 0 )
    goto LABEL_13;
  v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
  if ( v10 )
  {
    (**v10)(v10, 1LL);
    v9 = *((_QWORD *)this + 4);
  }
  if ( v9 )
  {
LABEL_13:
    if ( (*(_DWORD *)(v9 + 424) & 0x100) != 0 )
      VIDMM_PROCESS::FreeVmProcessFencePageInGlobalStorage(this);
  }
  v11 = (void *)*((_QWORD *)this + 5);
  if ( v11 )
  {
    VIDMM_PROCESS_FENCE_STORAGE::~VIDMM_PROCESS_FENCE_STORAGE(*((VIDMM_PROCESS_FENCE_STORAGE **)this + 5));
    operator delete(v11);
  }
  v12 = (CVirtualAddressAllocator *)*((_QWORD *)this + 27);
  if ( v12 )
    CVirtualAddressAllocator::DestroyVaAllocator(v12);
  v13 = (void *)*((_QWORD *)this + 37);
  if ( v13 != (void *)-1LL )
    ObCloseHandle(v13, 0);
  v14 = (volatile signed __int32 *)*((_QWORD *)this + 36);
  if ( v14 )
    VidMmiClosePartition(v14);
}
