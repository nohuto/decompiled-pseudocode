/*
 * XREFs of ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0083D0C
 * Callers:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0083ECC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0012E10 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     ExFreeToPagedLookasideList @ 0x1C0025EA0 (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A598 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0073180 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0073C90 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00839BC (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0083ECC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(
        VIDMM_PAGE_DIRECTORY *this,
        PRKPROCESS **a2,
        unsigned __int64 a3)
{
  __int64 v6; // r15
  PRKPROCESS *v7; // rbp
  unsigned int NumPde; // eax
  char *v9; // r9
  unsigned __int64 v10; // rsi
  unsigned int v11; // r8d
  unsigned int v12; // r12d
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  PRKPROCESS *v17; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v18; // r8
  void *v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-88h]
  unsigned int v21; // [rsp+34h] [rbp-84h]
  __int64 v22; // [rsp+38h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-78h] BYREF

  VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
    (struct VIDMM_ALLOC **)this,
    (struct CVirtualAddressAllocator *)a2,
    a3,
    1u,
    1u);
  v6 = 0LL;
  v7 = a2[11];
  if ( *((_QWORD *)this + 4) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde((CVirtualAddressAllocator *)a2, this);
    v20 = NumPde;
    v10 = a3;
    v11 = 2 * NumPde;
    v12 = 0;
    if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
      v11 = NumPde;
    v21 = v11;
    v13 = *((_QWORD *)v7[5027]
          + 198 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
          + 6 * (*(_DWORD *)this & 7)
          + 16);
    v22 = v13;
    if ( v11 )
    {
      v14 = v20;
      v15 = 0LL;
      do
      {
        v9 = (char *)*((_QWORD *)this + 4);
        if ( *(_QWORD *)&v9[v15] )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v6 + *((_QWORD *)this + 3)) & 0x400LL) != 0 )
              ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v7 + 5032), *(PVOID *)&v9[v15]);
            else
              VIDMM_PAGE_TABLE::DestroyPageTable(
                *(struct VIDMM_ALLOC ***)&v9[v15],
                (struct CVirtualAddressAllocator *)a2,
                v10);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
              *(VIDMM_PAGE_DIRECTORY **)&v9[v15],
              (struct CVirtualAddressAllocator *)a2,
              v10);
          }
          v11 = v21;
          v14 = v20;
          *(_QWORD *)(v15 + *((_QWORD *)this + 4)) = 0LL;
          v9 = (char *)*((_QWORD *)this + 4);
          v13 = v22;
        }
        v16 = v10 + v13;
        v10 = a3;
        if ( v12 != v14 )
          v10 = v16;
        v13 = v22;
        ++v12;
        v6 += 16LL;
        v15 += 8LL;
      }
      while ( v12 < v11 );
    }
    operator delete(v9);
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( *((_QWORD *)this + 2) )
  {
    v17 = a2[12];
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v17, &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(
      (VIDMM_GLOBAL *)v7,
      *((struct _KEVENT **)this + 2),
      0LL,
      0,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1,
      0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)this + 2) = 0LL;
  }
  v18 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)this + 1);
  if ( v18 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation((VIDMM_GLOBAL *)v7, 0LL, v18, 0);
    *((_QWORD *)this + 1) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 3);
  if ( v19 )
  {
    operator delete(v19);
    *((_QWORD *)this + 3) = 0LL;
  }
}
