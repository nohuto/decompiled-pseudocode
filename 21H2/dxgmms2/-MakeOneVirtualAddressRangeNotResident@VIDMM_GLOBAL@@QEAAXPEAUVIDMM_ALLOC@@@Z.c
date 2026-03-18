/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0085748
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0084CC0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00852A0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0B78 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00AAB04 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C008A930 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, VIDMM_PROCESS ***a2)
{
  VIDMM_PROCESS **v3; // rcx
  VIDMM_PROCESS *v5; // r13
  _QWORD *v6; // rbp
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  unsigned int v8; // eax
  size_t v9; // rbx
  unsigned int v10; // ebx
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 **v14; // r14
  __int64 *i; // rsi
  __int64 j; // rdi
  CVirtualAddressAllocator *v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // r9d
  unsigned __int64 v24[64]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v25[64]; // [rsp+220h] [rbp-248h] BYREF

  v3 = *a2;
  *((_BYTE *)a2 + 26) = 0;
  v5 = v3[1];
  if ( (*((_DWORD *)v5 + 24) & 2) != 0 )
  {
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                v3[1],
                                *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                *((_DWORD *)*v3 + 17) & 0x3F);
  }
  else
  {
    v6 = *(_QWORD **)(*((_QWORD *)v5 + 2) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
    if ( !v6 || !*(_DWORD *)(*v6 + 40928LL) )
      return;
    VirtualAddressAllocator = (struct CVirtualAddressAllocator *)v6[63];
  }
  if ( VirtualAddressAllocator )
  {
    v8 = *((_DWORD *)this + 1754);
    if ( v8 )
    {
      v9 = 8LL * v8;
      memset(v25, -1, v9);
      memset(v24, 0, v9 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    v10 = 0;
    v11 = 0;
    if ( *((struct _KTHREAD **)VirtualAddressAllocator + 8) != KeGetCurrentThread() )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)VirtualAddressAllocator + 56, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v23 = *((_DWORD *)VirtualAddressAllocator + 20);
          if ( v23 != -1 && (byte_1C006E941 & 1) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventBlockThread, v13, v23);
        }
        ExAcquirePushLockExclusiveEx((char *)VirtualAddressAllocator + 56, 0LL);
      }
      v11 = 2;
      *((_QWORD *)VirtualAddressAllocator + 8) = KeGetCurrentThread();
    }
    v14 = (__int64 **)(a2 + 16);
    for ( i = *v14; i != (__int64 *)v14; i = (__int64 *)*i )
    {
      if ( (i[5] & 0xC00) != 0 )
      {
        CVirtualAddressAllocator::UncommitVirtualAddressRange(
          VirtualAddressAllocator,
          (struct VIDMM_MAPPED_VA_RANGE *)(i - 3),
          0LL,
          0);
        v18 = *((_DWORD *)i + 10);
        v19 = (v18 >> 4) & 0x3F;
        v20 = v25[v19];
        if ( v20 >= i[9] )
          v20 = i[9];
        v21 = i[10];
        v25[v19] = v20;
        v22 = v24[v19];
        if ( v22 <= v21 )
          v22 = v21;
        v24[v19] = v22;
        _bittestandset((int *)&v10, (v18 >> 4) & 0x3F);
      }
    }
    if ( v11 == 2 )
    {
      *((_QWORD *)VirtualAddressAllocator + 8) = 0LL;
      ExReleasePushLockExclusiveEx((char *)VirtualAddressAllocator + 56, 0LL);
      KeLeaveCriticalRegion();
    }
    for ( j = 0LL; v10; v10 >>= 1 )
    {
      if ( (v10 & 1) != 0 )
      {
        v17 = VIDMM_PROCESS::GetVirtualAddressAllocator(v5, *(_DWORD *)(*((_QWORD *)this + 3) + 240LL), j);
        CVirtualAddressAllocator::FlushGpuVaTlb(v17, j, v25[j], v24[j]);
      }
      j = (unsigned int)(j + 1);
    }
  }
}
