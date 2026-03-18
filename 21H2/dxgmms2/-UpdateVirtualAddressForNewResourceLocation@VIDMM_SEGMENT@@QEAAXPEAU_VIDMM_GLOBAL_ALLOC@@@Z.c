/*
 * XREFs of ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00DB810
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00E8E3C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00EB2B0 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     VidSchMarkDeviceAsError @ 0x1C0018900 (VidSchMarkDeviceAsError.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00D5240 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
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
  unsigned __int64 v12; // rbp
  bool v13; // zf
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  char *v15; // rax
  char *v16; // rdi
  char *v17; // rsi
  unsigned __int64 v18; // r13
  __int64 **v19; // rbp
  __int64 *v20; // r14
  unsigned __int64 v21; // rdi
  int v22; // r8d
  int v23; // eax
  unsigned int v24; // edi
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // [rsp+20h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-88h]
  unsigned __int64 v28; // [rsp+50h] [rbp-88h]
  CVirtualAddressAllocator *v29; // [rsp+58h] [rbp-80h]
  unsigned __int64 v30; // [rsp+60h] [rbp-78h] BYREF
  char *v31; // [rsp+68h] [rbp-70h]
  char *v32; // [rsp+70h] [rbp-68h]
  unsigned __int64 v33; // [rsp+78h] [rbp-60h]
  char *v34; // [rsp+80h] [rbp-58h]
  char *v35; // [rsp+88h] [rbp-50h]
  char v37; // [rsp+E8h] [rbp+10h]
  char v38; // [rsp+F0h] [rbp+18h]
  int v39; // [rsp+F8h] [rbp+20h]

  v2 = this;
  v4 = VIDMM_SEGMENT::DriverId(a2[15]);
  v6 = (char *)(v5 + 272);
  v39 = v4;
  v7 = *(char **)(v5 + 272);
  while ( v7 != v6 )
  {
    v8 = *((_QWORD *)v2 + 1);
    v9 = v7;
    v29 = 0LL;
    v10 = 0LL;
    v7 = *(char **)v7;
    v11 = 0;
    v30 = 0LL;
    v12 = -1LL;
    v13 = (*(_BYTE *)(v8 + 40936) & 2) == 0;
    v35 = v7;
    v32 = 0LL;
    v37 = 0;
    v38 = 0;
    v27 = -1LL;
    if ( !v13 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *((VIDMM_PROCESS **)v9 - 6),
                                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 240LL),
                                  *((_DWORD *)a2 + 17) & 0x3F);
      v29 = VirtualAddressAllocator;
      v10 = (char *)VirtualAddressAllocator + 56;
      v32 = (char *)VirtualAddressAllocator + 56;
      if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 56));
        v37 = 1;
      }
    }
    v15 = v9 - 16;
    v16 = (char *)*((_QWORD *)v9 - 2);
    v31 = v15;
    if ( v16 != v15 )
    {
      v17 = v15;
      v18 = -1LL;
      do
      {
        v13 = (*((_DWORD *)a2 + 17) & 0x10000000) == 0;
        v19 = (__int64 **)(v16 - 40);
        v16 = *(char **)v16;
        v34 = v16;
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
              v22 = *((_DWORD *)a2 + 17) & 0x3F;
              v30 = 0LL;
              v26 = (unsigned __int64)a2[16];
              v33 = v21;
              v28 = v18;
              v23 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                      (__int64)v29,
                      (__int64)(v20 - 3),
                      v22,
                      v39,
                      v26,
                      0LL,
                      0,
                      (struct VIDMM_ALLOC **)&v30,
                      0LL);
              if ( v23 >= 0 )
              {
                v18 = v20[9];
                v21 = v20[10];
                v38 = 1;
                v11 |= 1 << ((*((_DWORD *)v20 + 10) >> 4) & 0x3F);
                if ( v28 < v18 )
                  v18 = v28;
                if ( v33 > v21 )
                  v21 = v33;
              }
              else
              {
                WdLogSingleEntry2(3LL, v19, v23);
                VidSchMarkDeviceAsError(v19[1][4]);
              }
              v20 = (__int64 *)*v20;
            }
            while ( v20 != (__int64 *)(v19 + 16) );
            v17 = v31;
            v30 = v21;
            v16 = v34;
            v27 = v18;
          }
          v2 = this;
        }
      }
      while ( v16 != v17 );
      v7 = v35;
      v6 = (char *)(a2 + 34);
      v10 = v32;
      v12 = v27;
    }
    if ( v37 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v38 )
    {
      v24 = 0;
      if ( v11 )
      {
        v25 = v30;
        do
        {
          if ( (v11 & 1) != 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v29, v24, v12, v25);
          ++v24;
          v11 >>= 1;
        }
        while ( v11 );
        v2 = this;
      }
    }
  }
}
