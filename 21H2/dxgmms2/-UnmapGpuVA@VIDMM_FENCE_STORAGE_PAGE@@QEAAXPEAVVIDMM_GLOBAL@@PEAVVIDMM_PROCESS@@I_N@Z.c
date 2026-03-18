/*
 * XREFs of ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C009B884
 * Callers:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1C009B850 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0018008 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0098DD4 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C009B7EC (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C009BA10 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00D931C (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PROCESS *a3,
        unsigned int a4,
        bool a5)
{
  char *v9; // rbx
  VIDMM_FENCE_STORAGE_PAGE *v10; // rax
  VIDMM_FENCE_STORAGE_PAGE *v11; // r14
  _QWORD *v12; // rcx
  _DWORD *v13; // rbx
  _QWORD *v14; // rdi
  struct VIDMM_PROCESS *v15; // r9
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v18; // r10
  struct CVirtualAddressAllocator *v19; // r15
  D3DGPU_VIRTUAL_ADDRESS v20; // r12
  struct VIDMM_PROCESS *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // rax
  VIDMM_FENCE_STORAGE_PAGE *v26; // rcx
  int v27; // eax
  bool v28; // r8
  char *v29; // [rsp+28h] [rbp-51h] BYREF
  char v30; // [rsp+30h] [rbp-49h]
  _D3DKMT_FREEGPUVIRTUALADDRESS v31; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v32[12]; // [rsp+58h] [rbp-21h] BYREF

  if ( (*((_BYTE *)a2 + 40936) & 2) != 0 )
  {
    v9 = (char *)this + 72;
    v29 = (char *)this + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    *((_QWORD *)v9 + 1) = KeGetCurrentThread();
    v10 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)this + 7);
    v30 = 1;
    while ( v10 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56) )
    {
      v11 = v10;
      v10 = *(VIDMM_FENCE_STORAGE_PAGE **)v10;
      if ( a2 == *((struct VIDMM_GLOBAL **)v11 + 6) )
      {
        v12 = (_QWORD *)*((_QWORD *)v11 + 4);
        if ( v12 != (_QWORD *)((char *)v11 + 32) )
        {
          while ( 1 )
          {
            v13 = v12 - 4;
            v14 = v12;
            v15 = (struct VIDMM_PROCESS *)*(v12 - 1);
            v12 = (_QWORD *)*v12;
            if ( a3 == v15 )
            {
              if ( !a5 )
                break;
              v27 = v13[13];
              if ( _bittest(&v27, a4) )
                break;
            }
            if ( v12 == (_QWORD *)((char *)v11 + 32) )
              goto LABEL_9;
          }
          if ( v13[12]-- == 1 )
          {
            if ( *((_BYTE *)v13 + 16) )
            {
              VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                          v15,
                                          *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL),
                                          a4);
              v19 = VirtualAddressAllocator;
              v20 = *(_QWORD *)v13;
              if ( *((_BYTE *)v13 + 17) == (_BYTE)v18 )
              {
                v21 = (struct VIDMM_PROCESS *)*((_QWORD *)VirtualAddressAllocator + 12);
                *(_QWORD *)&v31.hAdapter = v18;
                v31.BaseAddress = v20;
                v31.Size = 4096LL;
                VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(a2, v21, &v31, 1u);
              }
              else
              {
                memset(v32, 0, 0x58uLL);
                LODWORD(v32[0]) = 120;
                v32[6] = v20;
                v32[7] = 1LL;
                v32[5] = v19;
                LOBYTE(v32[8]) = 1;
                VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v32, v28);
              }
              VIDMM_PROCESS::CloseAdapter(*((struct _KTHREAD ***)v13 + 3), a2, v22, v23);
            }
            v24 = *v14;
            if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v25 = (_QWORD *)v14[1], (_QWORD *)*v25 != v14) )
              __fastfail(3u);
            *v25 = v24;
            *(_QWORD *)(v24 + 8) = v25;
            ExFreePoolWithTag(v13, 0);
            VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v26, (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)v11);
          }
        }
        break;
      }
    }
LABEL_9:
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v29);
  }
}
