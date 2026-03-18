/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00AA698
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00AA598 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000242C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002E2C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C008661C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        struct VIDMM_ALLOC **a3)
{
  char v3; // r13
  CVirtualAddressAllocator *i; // rbx
  __int64 v6; // rbp
  char *v8; // r15
  char *v9; // rax
  struct _MDL *FullMDL; // r9
  int v11; // ecx
  int v12; // eax
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v14; // r9d
  VIDMM_SEGMENT *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+50h] [rbp-58h]
  __int64 v20; // [rsp+B8h] [rbp+10h]

  v20 = a2;
  v3 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    a2 = v20;
    v3 = 1;
  }
  for ( i = this[3]; i != (CVirtualAddressAllocator *)(this + 3); i = *(CVirtualAddressAllocator **)i )
  {
    v6 = 0LL;
    if ( *((_DWORD *)this[11] + 1754) )
    {
      while ( 1 )
      {
        if ( _bittest64(&a2, (unsigned int)v6) )
        {
          v8 = (char *)*((_QWORD *)i + 3 * v6 + 7);
          if ( v8 != (char *)i + 16 * v6 + 8 * (unsigned int)v6 + 56 )
            break;
        }
LABEL_7:
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)this[11] + 1754) )
          goto LABEL_8;
      }
      v9 = (char *)i + 16 * v6 + 8 * (unsigned int)v6 + 56;
      while ( 2 )
      {
        FullMDL = 0LL;
        v19 = 0LL;
        v11 = (int)(*((_DWORD *)v8 + 14) << 28) >> 28;
        if ( v11 == 1 )
          goto LABEL_23;
        if ( v11 == 2 )
        {
          FullMDL = *(struct _MDL **)(*((_QWORD *)v8 + 6) + 56LL);
        }
        else
        {
          if ( v11 <= 2 )
            goto LABEL_31;
          if ( v11 > 5 )
          {
            if ( v11 != 6 )
            {
              if ( v11 == 7 )
              {
                FullMDL = *(struct _MDL **)(*((_QWORD *)v8 + 6) + 64LL);
                break;
              }
LABEL_31:
              v8 = *(char **)v8;
              if ( v8 == v9 )
              {
                a2 = v20;
                goto LABEL_7;
              }
              continue;
            }
            v12 = -2;
LABEL_28:
            v17 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (__int64)this,
                    (__int64)(v8 - 8),
                    v6,
                    v12,
                    *((_QWORD *)v8 + 8) + v19,
                    (__int64)FullMDL,
                    0,
                    a3,
                    0LL);
            if ( v17 < 0 )
            {
              WdLogSingleEntry4(1LL, v17, *((_QWORD *)v8 + 11), *((_QWORD *)v8 + 12), (unsigned int)v6);
              DxgkLogInternalTriageEvent(v18, 0x40000LL);
              goto LABEL_9;
            }
LABEL_30:
            v9 = (char *)i + 16 * v6 + 8 * (unsigned int)v6 + 56;
            goto LABEL_31;
          }
LABEL_23:
          VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v11, *((_QWORD *)v8 + 6));
          if ( *(_DWORD *)(VidMmGlobalAllocFromOwner + 112) == v14 )
            goto LABEL_30;
          v15 = *(VIDMM_SEGMENT **)(VidMmGlobalAllocFromOwner + 120);
          if ( (*((_DWORD *)v15 + 20) & 0x1001) == 0 )
          {
            v12 = VIDMM_SEGMENT::DriverId(v15);
            v19 = *(_QWORD *)(v16 + 128);
            goto LABEL_28;
          }
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)VidMmGlobalAllocFromOwner, 0LL);
        }
        break;
      }
      v12 = 0;
      goto LABEL_28;
    }
LABEL_8:
    ;
  }
LABEL_9:
  if ( v3 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
