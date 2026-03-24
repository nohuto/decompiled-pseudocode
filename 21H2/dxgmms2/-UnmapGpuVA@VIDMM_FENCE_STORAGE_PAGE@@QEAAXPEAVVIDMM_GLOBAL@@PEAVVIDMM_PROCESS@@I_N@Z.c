/*
 * XREFs of ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@I_N@Z @ 0x1C00860D0
 * Callers:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1C008609C (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0012D20 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C0062FD8 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F95C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C0084248 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1C008633C (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00B2C64 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PROCESS *a3,
        unsigned int a4,
        bool a5)
{
  VIDMM_FENCE_STORAGE_PAGE *v9; // rax
  VIDMM_FENCE_STORAGE_PAGE *v10; // r14
  _QWORD *v11; // rcx
  _DWORD *v12; // rbx
  _QWORD *v13; // rsi
  VIDMM_PROCESS *v14; // r9
  __int64 v16; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct CVirtualAddressAllocator *v18; // r15
  D3DGPU_VIRTUAL_ADDRESS v19; // r12
  struct VIDMM_PROCESS *v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  VIDMM_FENCE_STORAGE_PAGE *v23; // rcx
  int v24; // eax
  bool v25; // r8
  __int64 v26; // [rsp+28h] [rbp-51h] BYREF
  char v27; // [rsp+30h] [rbp-49h]
  _D3DKMT_FREEGPUVIRTUALADDRESS v28; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v29[12]; // [rsp+58h] [rbp-21h] BYREF

  if ( (*((_BYTE *)a2 + 40936) & 2) != 0 )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v26,
      (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 72));
    v9 = (VIDMM_FENCE_STORAGE_PAGE *)*((_QWORD *)this + 7);
    while ( v9 != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 56) )
    {
      v10 = v9;
      v9 = *(VIDMM_FENCE_STORAGE_PAGE **)v9;
      if ( a2 == *((struct VIDMM_GLOBAL **)v10 + 6) )
      {
        v11 = (_QWORD *)*((_QWORD *)v10 + 4);
        while ( v11 != (_QWORD *)((char *)v10 + 32) )
        {
          v12 = v11 - 4;
          v13 = v11;
          v14 = (VIDMM_PROCESS *)*(v11 - 1);
          v11 = (_QWORD *)*v11;
          if ( a3 == v14 )
          {
            if ( !a5 || (v24 = v12[13], _bittest(&v24, a4)) )
            {
              if ( v12[12]-- == 1 )
              {
                if ( *((_BYTE *)v12 + 16) )
                {
                  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                              v14,
                                              *(_DWORD *)(*((_QWORD *)a2 + 3) + 232LL),
                                              a4);
                  v18 = VirtualAddressAllocator;
                  v19 = *(_QWORD *)v12;
                  if ( *((_BYTE *)v12 + 17) )
                  {
                    memset(v29, 0, 0x58uLL);
                    LODWORD(v29[0]) = 120;
                    v29[6] = v19;
                    v29[7] = 1LL;
                    v29[5] = v18;
                    LOBYTE(v29[8]) = 1;
                    VIDMM_GLOBAL::QueueLazySystemCommandAndWait(a2, (struct _VIDMM_SYSTEM_COMMAND *)v29, v25);
                  }
                  else
                  {
                    *(_QWORD *)&v28.hAdapter = 0LL;
                    v20 = (struct VIDMM_PROCESS *)*((_QWORD *)VirtualAddressAllocator + 12);
                    v28.BaseAddress = v19;
                    v28.Size = 4096LL;
                    VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(a2, v20, &v28, 1);
                  }
                  VIDMM_PROCESS::CloseAdapter(*((struct _KTHREAD ***)v12 + 3), a2);
                }
                v21 = *v13;
                if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v22 = (_QWORD *)v13[1], (_QWORD *)*v22 != v13) )
                  __fastfail(3u);
                *v22 = v21;
                *(_QWORD *)(v21 + 8) = v22;
                ExFreePoolWithTag(v12, 0);
                VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v23, v10);
              }
              goto LABEL_10;
            }
          }
        }
        break;
      }
    }
LABEL_10:
    if ( v27 )
    {
      v16 = v26;
      *(_QWORD *)(v26 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
