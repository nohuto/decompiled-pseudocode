/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BDAA4
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006FD28 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00B2CC0 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001D90 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015054 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006FD28 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00898C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        struct VIDMM_ALLOC **a3)
{
  CVirtualAddressAllocator *i; // rsi
  __int64 v5; // rdi
  char **v6; // rcx
  char *v7; // r14
  char *v8; // rax
  struct _MDL *FullMDL; // r9
  int v10; // r12d
  int v11; // ecx
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v13; // r9d
  VIDMM_SEGMENT *v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r12
  _QWORD *v21; // rax
  __int64 v23; // [rsp+50h] [rbp-58h]
  char v24; // [rsp+B0h] [rbp+8h]
  __int64 v25; // [rsp+B8h] [rbp+10h]

  v25 = a2;
  v24 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    a2 = v25;
    v24 = 1;
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
          v6 = (char **)((char *)i + 32 * v5 + 8 * (unsigned int)v5 + 56);
          v7 = *v6;
          if ( *v6 != (char *)v6 )
            break;
        }
LABEL_24:
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)this[11] + 1750) )
          goto LABEL_25;
      }
      v8 = (char *)i + 32 * v5 + 8 * (unsigned int)v5 + 56;
LABEL_8:
      FullMDL = 0LL;
      v23 = 0LL;
      v10 = 0;
      v11 = (int)(*((_DWORD *)v7 + 14) << 28) >> 28;
      if ( v11 != 1 )
      {
        if ( v11 == 2 )
          goto LABEL_14;
        if ( v11 <= 2 )
          goto LABEL_22;
        if ( v11 > 5 )
        {
          if ( v11 == 6 )
          {
            v10 = -2;
            goto LABEL_20;
          }
          if ( v11 == 7 )
          {
LABEL_14:
            FullMDL = (struct _MDL *)**((_QWORD **)v7 + 6);
LABEL_20:
            v16 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (__int64)this,
                    (__int64)(v7 - 8),
                    (unsigned int)v5,
                    v10,
                    *((_QWORD *)v7 + 8) + v23,
                    (__int64)FullMDL,
                    0,
                    a3,
                    0LL);
            v20 = v16;
            if ( v16 < 0 )
            {
              v21 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18, v17, v19);
              v21[3] = v20;
              v21[4] = *((_QWORD *)v7 + 11);
              v21[5] = *((_QWORD *)v7 + 12);
              v21[6] = (unsigned int)v5;
              WdLogEvent5_WdAssertion(v21);
              break;
            }
LABEL_21:
            v8 = (char *)i + 32 * v5 + 8 * (unsigned int)v5 + 56;
          }
LABEL_22:
          v7 = *(char **)v7;
          if ( v7 == v8 )
          {
            a2 = v25;
            goto LABEL_24;
          }
          goto LABEL_8;
        }
      }
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v11, *((_QWORD *)v7 + 6));
      if ( *(_DWORD *)(VidMmGlobalAllocFromOwner + 120) != v13 )
      {
        v14 = *(VIDMM_SEGMENT **)(VidMmGlobalAllocFromOwner + 128);
        if ( (*((_DWORD *)v14 + 20) & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)VidMmGlobalAllocFromOwner, 0LL);
        }
        else
        {
          v10 = VIDMM_SEGMENT::DriverId(v14);
          v23 = *(_QWORD *)(v15 + 136);
        }
        goto LABEL_20;
      }
      goto LABEL_21;
    }
LABEL_25:
    ;
  }
  if ( v24 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
