/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BE89C
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C007A8B4 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00B3BA0 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0012350 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015030 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C007A8B4 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085A68 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        struct VIDMM_ALLOC **a3)
{
  CVirtualAddressAllocator *i; // rdi
  __int64 v5; // rsi
  char *v6; // r15
  char *v7; // rax
  struct _MDL *FullMDL; // r9
  int v9; // r13d
  int v10; // ecx
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v12; // r9d
  VIDMM_SEGMENT *v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 v22; // [rsp+50h] [rbp-58h]
  char v23; // [rsp+B0h] [rbp+8h]
  __int64 v24; // [rsp+B8h] [rbp+10h]

  v24 = a2;
  v23 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    a2 = v24;
    v23 = 1;
  }
  for ( i = this[3]; i != (CVirtualAddressAllocator *)(this + 3); i = *(CVirtualAddressAllocator **)i )
  {
    v5 = 0LL;
    if ( *((_DWORD *)this[11] + 1750) )
    {
      while ( 1 )
      {
        if ( _bittest64(&a2, (unsigned int)v5) )
        {
          v6 = (char *)*((_QWORD *)i + 3 * v5 + 7);
          if ( v6 != (char *)i + 16 * v5 + 8 * (unsigned int)v5 + 56 )
            break;
        }
LABEL_24:
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)this[11] + 1750) )
          goto LABEL_25;
      }
      v7 = (char *)i + 16 * v5 + 8 * (unsigned int)v5 + 56;
LABEL_8:
      FullMDL = 0LL;
      v22 = 0LL;
      v9 = 0;
      v10 = (int)(*((_DWORD *)v6 + 14) << 28) >> 28;
      if ( v10 != 1 )
      {
        if ( v10 == 2 )
          goto LABEL_14;
        if ( v10 <= 2 )
          goto LABEL_22;
        if ( v10 > 5 )
        {
          if ( v10 == 6 )
          {
            v9 = -2;
            goto LABEL_20;
          }
          if ( v10 == 7 )
          {
LABEL_14:
            FullMDL = (struct _MDL *)**((_QWORD **)v6 + 6);
LABEL_20:
            v15 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (__int64)this,
                    (__int64)(v6 - 8),
                    (unsigned int)v5,
                    v9,
                    *((_QWORD *)v6 + 8) + v22,
                    (__int64)FullMDL,
                    0,
                    a3,
                    0LL);
            v19 = v15;
            if ( v15 < 0 )
            {
              v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v16, v18);
              v20[3] = v19;
              v20[4] = *((_QWORD *)v6 + 11);
              v20[5] = *((_QWORD *)v6 + 12);
              v20[6] = (unsigned int)v5;
              WdLogEvent5_WdAssertion(v20);
              break;
            }
LABEL_21:
            v7 = (char *)i + 16 * v5 + 8 * (unsigned int)v5 + 56;
          }
LABEL_22:
          v6 = *(char **)v6;
          if ( v6 == v7 )
          {
            a2 = v24;
            goto LABEL_24;
          }
          goto LABEL_8;
        }
      }
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v10, *((_QWORD *)v6 + 6));
      if ( *(_DWORD *)(VidMmGlobalAllocFromOwner + 120) != v12 )
      {
        v13 = *(VIDMM_SEGMENT **)(VidMmGlobalAllocFromOwner + 128);
        if ( (*((_DWORD *)v13 + 20) & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)VidMmGlobalAllocFromOwner, 0LL);
        }
        else
        {
          v9 = VIDMM_SEGMENT::DriverId(v13);
          v22 = *(_QWORD *)(v14 + 136);
        }
        goto LABEL_20;
      }
      goto LABEL_21;
    }
LABEL_25:
    ;
  }
  if ( v23 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
