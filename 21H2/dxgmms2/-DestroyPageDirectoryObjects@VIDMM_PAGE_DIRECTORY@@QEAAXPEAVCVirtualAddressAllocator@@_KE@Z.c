/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C009E880
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009E854 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0014CA4 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     ExFreeToPagedLookasideList @ 0x1C001E5D2 (ExFreeToPagedLookasideList.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0089AE0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008D5A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009E854 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00A0030 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00A0644 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  struct CVirtualAddressAllocator *v3; // rbx
  VIDMM_GLOBAL *v6; // rdi
  unsigned int NumPde; // eax
  unsigned int v8; // r15d
  unsigned __int64 v9; // rbp
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // rdi
  void *v15; // r9
  PRKPROCESS *v16; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v17; // r8
  void *v18; // rcx
  VIDMM_GLOBAL *v20; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v3 = a2;
  VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, a2, a3, 1u, 1);
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)v3 + 11);
  v20 = v6;
  if ( *((_QWORD *)this + 6) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(v3, this);
    v8 = NumPde;
    v9 = a3;
    v10 = 2 * NumPde;
    if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
      v10 = NumPde;
    v11 = 0LL;
    v12 = 0;
    v13 = *(_QWORD *)(*((_QWORD *)v6 + 5028)
                    + 48 * ((*(_DWORD *)this & 7) + 33 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F))
                    + 128);
    if ( v10 )
    {
      v14 = 0LL;
      do
      {
        v15 = *(void **)(v14 + *((_QWORD *)this + 6));
        if ( v15 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v11 + *((_QWORD *)this + 5)) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v20 + 40256), v15);
            else
              VIDMM_PAGE_TABLE::DestroyPageTable((VIDMM_PAGE_TABLE *)v15, a2, v9);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v15, a2, v9, (unsigned __int8)v15);
          }
          *(_QWORD *)(v14 + *((_QWORD *)this + 6)) = 0LL;
        }
        v9 += v13;
        if ( v12 == v8 )
          v9 = a3;
        ++v12;
        v11 += 16LL;
        v14 += 8LL;
      }
      while ( v12 < v10 );
      v6 = v20;
    }
    operator delete(*((void **)this + 6));
    v3 = a2;
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v16 = (PRKPROCESS *)*((_QWORD *)v3 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v16, &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(
      v6,
      *((struct _KEVENT **)this + 3),
      0LL,
      0LL,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)this + 3) = 0LL;
  }
  v17 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 2);
  if ( v17 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((struct _KTHREAD **)v6, 0LL, v17, 0LL);
    *((_QWORD *)this + 2) = 0LL;
  }
  v18 = (void *)*((_QWORD *)this + 5);
  if ( v18 )
  {
    operator delete(v18);
    *((_QWORD *)this + 5) = 0LL;
  }
}
