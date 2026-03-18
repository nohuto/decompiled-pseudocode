/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081254
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C007D0FC (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007F2D8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0001550 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C007C6C0 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007DD20 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00807B8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C008130C (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E6F68 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v5; // r12
  VIDMM_RECYCLE_HEAP_MGR *v6; // rcx
  unsigned __int64 SmallAllocationBlockSize; // rax
  __int64 v8; // r8
  __int64 v9; // r11
  unsigned __int64 v10; // rcx
  char v11; // si
  __int64 v13; // rax
  struct VIDMM_RECYCLE_RANGE *v14; // r9
  struct VIDMM_RECYCLE_RANGE *v15; // r10
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  char v17; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v19; // eax
  int v20; // ebp
  VIDMM_RECYCLE_RANGE *v21; // rsi
  VIDMM_RECYCLE_RANGE *v22; // r15
  _QWORD *v23; // rcx
  char v24; // bl
  struct VIDMM_RECYCLE_RANGE *v25; // rax
  __int64 v26; // r8
  struct VIDMM_RECYCLE_RANGE *v27; // rdi
  unsigned int v28; // edi
  _QWORD *v29; // r8
  __int64 v30; // [rsp+70h] [rbp+8h] BYREF
  __int64 v31; // [rsp+78h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 136);
  v5 = *(VIDMM_RECYCLE_HEAP_MGR **)(a1[4] + 8);
  if ( VIDMM_RECYCLE_BLOCK::CleanupFreeBlock((VIDMM_RECYCLE_BLOCK *)a1, (struct VIDMM_RECYCLE_RANGE *)a2) )
    return 2LL;
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*(unsigned int *)a1[4];
  if ( (unsigned int)((_DWORD)v6 - 1) > 1 )
    return 0LL;
  SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(
                               v6,
                               (unsigned int)((_DWORD)v6 - 5) <= 1);
  v8 = a1[6];
  v9 = a1[5];
  v10 = v8 - v9;
  if ( v3 && v10 > SmallAllocationBlockSize && *(_QWORD *)(v3 + 40) == v8 )
  {
    v11 = 1;
    goto LABEL_6;
  }
  v11 = 0;
  if ( v3 || *(_QWORD *)(a2 + 40) != v8 || v10 <= SmallAllocationBlockSize )
  {
LABEL_6:
    if ( v11 )
    {
      v14 = *(struct VIDMM_RECYCLE_RANGE **)(v3 + 64);
      v15 = *(struct VIDMM_RECYCLE_RANGE **)(v3 + 72);
      NextRange = v14;
      v30 = 0LL;
      while ( !*((_DWORD *)NextRange + 16) )
      {
        if ( NextRange == v15 )
        {
          v13 = *((_QWORD *)v14 + 4);
          goto LABEL_19;
        }
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
    }
    return 0LL;
  }
  v13 = *(_QWORD *)(a2 + 32);
LABEL_19:
  v30 = v13;
  v31 = v8 - v13;
  if ( v13 == v9 )
  {
    v17 = 1;
    goto LABEL_24;
  }
  v17 = 0;
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v19 = (*((__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64))VirtualMemoryInterface + 2))(
          -1LL,
          &v30,
          &v31,
          0x8000LL);
  if ( v19 < 0 )
  {
    WdLogSingleEntry4(3LL, v30, a1, v19, **(_QWORD **)(*(_QWORD *)(a1[4] + 8) + 8LL));
    return 0LL;
  }
  a1[6] = v30;
LABEL_24:
  if ( v11 )
  {
    v20 = *(_DWORD *)(v3 + 88);
    v21 = *(VIDMM_RECYCLE_RANGE **)(v3 + 64);
    v22 = *(VIDMM_RECYCLE_RANGE **)(v3 + 72);
    if ( v20 != 2 && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1[4], v20, v3);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v5, (struct _SLIST_ENTRY *)v3);
    v23 = (_QWORD *)*((_QWORD *)v21 + 16);
    *v23 = a1 + 9;
    a1[10] = (__int64)v23;
    v24 = 0;
    while ( 1 )
    {
      v25 = VIDMM_RECYCLE_RANGE::GetNextRange(v21);
      if ( v21 == v22 )
        v24 = 1;
      v27 = v25;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v5, v21, v26);
      if ( v24 )
        break;
      v21 = v27;
    }
  }
  else
  {
    v28 = *(_DWORD *)(a2 + 88);
    if ( v28 != 2 && g_IsInternalRelease )
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(a1[4], v28, a2);
    v29 = *(_QWORD **)(a2 + 128);
    *v29 = a1 + 9;
    a1[10] = (__int64)v29;
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v5, (struct VIDMM_RECYCLE_RANGE *)a2, (__int64)v29);
  }
  if ( v17 )
    return 2LL;
  return 1LL;
}
