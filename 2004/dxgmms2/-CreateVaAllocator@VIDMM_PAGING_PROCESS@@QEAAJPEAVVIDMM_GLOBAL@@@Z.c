/*
 * XREFs of ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00BDEB0
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0093C98 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00839E8 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ??0CVirtualAddressAllocator@@QEAA@XZ @ 0x1C0083C20 (--0CVirtualAddressAllocator@@QEAA@XZ.c)
 */

__int64 __fastcall VIDMM_PAGING_PROCESS::CreateVaAllocator(VIDMM_PAGING_PROCESS *this, struct VIDMM_GLOBAL *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  CVirtualAddressAllocator *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  CVirtualAddressAllocator *v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebp
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax

  *((_QWORD *)this + 2) = a2;
  if ( (*((_BYTE *)a2 + 40936) & 2) == 0 )
    return 0LL;
  v4 = 0LL;
  if ( !*((_DWORD *)a2 + 1750) )
    return 0LL;
  while ( 1 )
  {
    v5 = 1584LL * (unsigned int)v4;
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 5027) + v5 + 436) & 1) == 0 )
      goto LABEL_9;
    v6 = (CVirtualAddressAllocator *)operator new[](0x98uLL, 0x4B677844u, PagedPool);
    v10 = v6 ? CVirtualAddressAllocator::CVirtualAddressAllocator(v6) : 0LL;
    *((_QWORD *)this + v4 + 4) = v10;
    if ( !v10 )
      break;
    v13 = CVirtualAddressAllocator::InitializeVaAllocator(
            v10,
            1LL << *((_DWORD *)a2 + 10232),
            4096 << *(_DWORD *)(*((_QWORD *)a2 + 5027) + v5 + 68),
            a2,
            g_pVidMmSystemProcess);
    if ( v13 < 0 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12, v11, v14);
      *(_QWORD *)(v16 + 24) = 7395LL;
      WdLogEvent5_WdAssertion(v16);
      return (unsigned int)v13;
    }
LABEL_9:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)a2 + 1750) )
      return 0LL;
  }
  v17 = WdLogNewEntry5_WdAssertion(v8, v7, v9);
  *(_QWORD *)(v17 + 24) = 7386LL;
  WdLogEvent5_WdAssertion(v17);
  return 3221225495LL;
}
