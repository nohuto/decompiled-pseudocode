/*
 * XREFs of ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B5B68
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00C5078 (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00C76E0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CAC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     VidSchMarkDeviceAsError @ 0x1C0015CB0 (VidSchMarkDeviceAsError.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F95C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006FD28 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00ADF74 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(VIDMM_SEGMENT *this, VIDMM_SEGMENT **a2)
{
  VIDMM_SEGMENT *v2; // r12
  int v4; // eax
  __int64 v5; // rdx
  char *v6; // r14
  char *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rdi
  char *v10; // r13
  unsigned int v11; // ebx
  unsigned __int64 v12; // r15
  bool v13; // zf
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  char *v15; // rax
  char *v16; // rdi
  char *v17; // rsi
  unsigned __int64 v18; // r13
  __int64 **v19; // r15
  __int64 *v20; // r14
  unsigned __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edi
  unsigned __int64 v27; // [rsp+20h] [rbp-C8h]
  __int64 v28; // [rsp+50h] [rbp-98h]
  int v29; // [rsp+50h] [rbp-98h]
  unsigned __int64 v30; // [rsp+58h] [rbp-90h]
  unsigned __int64 v31; // [rsp+58h] [rbp-90h]
  CVirtualAddressAllocator *v32; // [rsp+60h] [rbp-88h]
  char *v33; // [rsp+68h] [rbp-80h]
  char *v34; // [rsp+70h] [rbp-78h]
  struct VIDMM_ALLOC *v35; // [rsp+78h] [rbp-70h] BYREF
  unsigned __int64 v36; // [rsp+80h] [rbp-68h]
  char *v37; // [rsp+88h] [rbp-60h]
  char *v38; // [rsp+90h] [rbp-58h]
  char v40; // [rsp+F8h] [rbp+10h]
  char v41; // [rsp+100h] [rbp+18h]
  int v42; // [rsp+108h] [rbp+20h]

  v2 = this;
  v4 = VIDMM_SEGMENT::DriverId(a2[16]);
  v6 = (char *)(v5 + 288);
  v42 = v4;
  v7 = *(char **)(v5 + 288);
  while ( v7 != v6 )
  {
    v8 = *((_QWORD *)v2 + 1);
    v9 = v7;
    v32 = 0LL;
    v10 = 0LL;
    v7 = *(char **)v7;
    v11 = 0;
    v30 = 0LL;
    v12 = -1LL;
    v13 = (*(_BYTE *)(v8 + 40936) & 2) == 0;
    v38 = v7;
    v34 = 0LL;
    v40 = 0;
    v41 = 0;
    v28 = -1LL;
    if ( !v13 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *((VIDMM_PROCESS **)v9 - 6),
                                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 232LL),
                                  *((_DWORD *)a2 + 19) & 0x3F);
      v32 = VirtualAddressAllocator;
      v10 = (char *)VirtualAddressAllocator + 56;
      v34 = (char *)VirtualAddressAllocator + 56;
      if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 56));
        v40 = 1;
      }
    }
    v15 = v9 - 16;
    v16 = (char *)*((_QWORD *)v9 - 2);
    v33 = v15;
    if ( v16 != v15 )
    {
      v17 = v15;
      v18 = -1LL;
      do
      {
        v13 = (*((_DWORD *)a2 + 19) & 0x8000000) == 0;
        v19 = (__int64 **)(v16 - 40);
        v16 = *(char **)v16;
        v37 = v16;
        if ( !v13 )
          VIDMM_GLOBAL::BuildInitContextAllocation(*((ADAPTER_RENDER ***)v2 + 1), v19);
        if ( (*(_BYTE *)(*((_QWORD *)v2 + 1) + 40936LL) & 2) != 0 && *((_BYTE *)v19 + 26) )
        {
          v20 = v19[16];
          if ( v20 != (__int64 *)(v19 + 16) )
          {
            v21 = v30;
            do
            {
              v22 = *((_DWORD *)a2 + 19) & 0x3F;
              v35 = 0LL;
              v27 = (unsigned __int64)a2[17];
              v36 = v21;
              v31 = v18;
              v29 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      (__int64)v32,
                      (__int64)(v20 - 3),
                      v22,
                      v42,
                      v27,
                      0LL,
                      0,
                      &v35,
                      0LL);
              if ( v29 >= 0 )
              {
                v18 = v20[9];
                v21 = v20[10];
                v41 = 1;
                v11 |= 1 << ((*((_DWORD *)v20 + 10) >> 4) & 0x3F);
                if ( v31 < v18 )
                  v18 = v31;
                if ( v36 > v21 )
                  v21 = v36;
              }
              else
              {
                v25 = WdLogNewEntry5_WdWarning(v24, v23);
                *(_QWORD *)(v25 + 32) = v29;
                *(_QWORD *)(v25 + 24) = v19;
                WdLogEvent5_WdWarning(v25);
                VidSchMarkDeviceAsError(v19[1][4]);
              }
              v20 = (__int64 *)*v20;
            }
            while ( v20 != (__int64 *)(v19 + 16) );
            v17 = v33;
            v30 = v21;
            v16 = v37;
            v28 = v18;
          }
          v2 = this;
        }
      }
      while ( v16 != v17 );
      v7 = v38;
      v6 = (char *)(a2 + 36);
      v10 = v34;
      v12 = v28;
    }
    if ( v40 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v41 )
    {
      v26 = 0;
      if ( v11 )
      {
        do
        {
          if ( (v11 & 1) != 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v32, v26, v12, v30);
          ++v26;
          v11 >>= 1;
        }
        while ( v11 );
        v2 = this;
      }
    }
  }
}
