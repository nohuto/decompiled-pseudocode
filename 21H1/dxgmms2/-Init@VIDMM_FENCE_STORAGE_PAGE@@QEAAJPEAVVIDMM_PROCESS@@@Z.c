/*
 * XREFs of ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C005F488
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00118C8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0015430 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0015CBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0015CF0 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C0061390 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C006F798 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C0087FB8 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00BB768 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::Init(VIDMM_FENCE_STORAGE_PAGE *this, struct VIDMM_PROCESS *a2)
{
  int v4; // edi
  void *CurrentPartitionHandle; // rcx
  _QWORD *v6; // r14
  int v7; // edi
  struct _MDL *Mdl; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v28[64]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+20h] BYREF

  v30 = 0LL;
  v29 = 4096LL;
  v4 = 0x8000000;
  CurrentPartitionHandle = 0LL;
  if ( *((PVOID *)this + 20) != VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
  {
    v4 = 134479872;
    CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  }
  v6 = (_QWORD *)((char *)this + 104);
  v7 = MmCreateSection((char *)this + 104, 0LL, 0LL, &v29, 4, v4, CurrentPartitionHandle, 0LL);
  if ( v7 < 0 )
  {
    *v6 = 0LL;
  }
  else
  {
    v27 = 4096LL;
    v7 = MmMapViewInSystemSpaceEx(*v6, (char *)this + 112, &v27, &v30, 0LL);
    if ( v7 >= 0 )
    {
      Mdl = VidMmiAllocateMdl(*((PVOID *)this + 14), 0x1000uLL);
      *((_QWORD *)this + 15) = Mdl;
      if ( Mdl )
      {
        MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
        *((_BYTE *)this + 128) = 1;
        v13 = *((_QWORD *)this + 20);
        if ( *(_BYTE *)(v13 + 64) )
        {
          if ( !a2 )
            a2 = *(struct VIDMM_PROCESS **)v13;
        }
        else if ( !a2 )
        {
          if ( *((_QWORD *)this + 18) )
          {
            v16 = WdLogNewEntry5_WdAssertion(v11, v10, v12);
            *(_QWORD *)(v16 + 24) = 378LL;
            WdLogEvent5_WdAssertion(v16);
          }
          if ( *((_QWORD *)this + 17) )
          {
            v17 = WdLogNewEntry5_WdAssertion(v11, v10, v12);
            *(_QWORD *)(v17 + 24) = 379LL;
            WdLogEvent5_WdAssertion(v17);
          }
          return 0LL;
        }
        *((_QWORD *)this + 4) = a2;
        v7 = VIDMM_PROCESS::MapHostAddressesToGuest(
               a2,
               *((struct _MDL **)this + 15),
               0x1000uLL,
               (void **)this + 18,
               (unsigned __int64 *)this + 17);
        if ( v7 >= 0 )
        {
          v22 = *((_QWORD *)this + 20);
          if ( !*(_BYTE *)(v22 + 64) )
          {
            if ( *(_QWORD *)v22 )
            {
              v23 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
              *(_QWORD *)(v23 + 24) = 366LL;
              WdLogEvent5_WdAssertion(v23);
              v22 = *((_QWORD *)this + 20);
            }
            *(_BYTE *)(v22 + 65) = 1;
            *((_BYTE *)this + 152) = 1;
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v28,
              (struct _KTHREAD **)(*((_QWORD *)this + 4) + 64LL));
            v24 = (_QWORD *)((char *)this + 16);
            v25 = *((_QWORD *)this + 4) + 48LL;
            v26 = *(_QWORD *)v25;
            if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 )
              __fastfail(3u);
            *v24 = v26;
            *((_QWORD *)this + 3) = v25;
            *(_QWORD *)(v26 + 8) = v24;
            *(_QWORD *)v25 = v24;
            DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v28);
          }
          return 0LL;
        }
        v21 = WdLogNewEntry5_WdAssertion(v19, v18, v20);
        *(_QWORD *)(v21 + 24) = 354LL;
        WdLogEvent5_WdAssertion(v21);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
        v15 = WdLogNewEntry5_WdLowResource(v9);
        *(_QWORD *)(v15 + 24) = 293LL;
        WdLogEvent5_WdLowResource(v15);
        v7 = -1073741801;
      }
    }
  }
  VIDMM_FENCE_STORAGE_PAGE::FreeStorage(this);
  return (unsigned int)v7;
}
