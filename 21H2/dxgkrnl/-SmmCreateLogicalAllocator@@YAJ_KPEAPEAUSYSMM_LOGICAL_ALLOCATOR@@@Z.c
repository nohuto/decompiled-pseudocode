/*
 * XREFs of ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C10D4
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C01F5A3C (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     SmmAddBlockToPool @ 0x1C006F8B8 (SmmAddBlockToPool.c)
 *     SmmAllocateBlock @ 0x1C006F8E8 (SmmAllocateBlock.c)
 *     SmmGetLogicalPool @ 0x1C006FE3C (SmmGetLogicalPool.c)
 *     SmmGetLowerOrderFromPageCount @ 0x1C006FE50 (SmmGetLowerOrderFromPageCount.c)
 *     SmmGetOrderBlockSizeInPages @ 0x1C006FE6C (SmmGetOrderBlockSizeInPages.c)
 *     SmmInitializeLogicalBlock @ 0x1C006FE7C (SmmInitializeLogicalBlock.c)
 *     SmmAllocateLogicalAddressAt @ 0x1C03C0F84 (SmmAllocateLogicalAddressAt.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C12CC (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x1C03C1540 (SmmInitializeLogicalAllocator.c)
 */

__int64 __fastcall SmmCreateLogicalAllocator(
        unsigned __int64 a1,
        struct SYSMM_LOGICAL_ALLOCATOR **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 LowerOrderFromPageCount; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 Block; // rax
  _QWORD *v20; // r10
  _QWORD *v21; // rax
  _DWORD *LogicalPool; // rax
  __int64 v23; // r10
  int LogicalAddressAt; // edi

  if ( a1 < 0x2000 )
  {
    WdLogSingleEntry1(3LL, 0x2000LL);
    return 3221225485LL;
  }
  v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v7 = operator new[](0x530uLL, 0x35737844u, 64LL, a4);
  v8 = v7;
  if ( !v7 )
  {
    _InterlockedIncrement(&dword_1C0130B70);
    WdLogSingleEntry1(6LL, 1661LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate logical allocator",
      1661LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  SmmInitializeLogicalAllocator(v7, v6);
  v12 = v6 >> 12;
  v13 = v12;
  if ( v12 )
  {
    while ( 1 )
    {
      LowerOrderFromPageCount = (unsigned __int8)SmmGetLowerOrderFromPageCount(v13);
      Block = SmmAllocateBlock(v16, v15, v17, v18);
      if ( !Block )
        break;
      SmmInitializeLogicalBlock(Block, v12 - v13, LowerOrderFromPageCount);
      v21 = *(_QWORD **)(v8 + 1264);
      if ( *v21 != v8 + 1256 )
        __fastfail(3u);
      *v20 = v8 + 1256;
      v20[1] = v21;
      *v21 = v20;
      *(_QWORD *)(v8 + 1264) = v20;
      LogicalPool = (_DWORD *)SmmGetLogicalPool(v8, LowerOrderFromPageCount);
      SmmAddBlockToPool(LogicalPool, v23);
      v13 -= SmmGetOrderBlockSizeInPages(LowerOrderFromPageCount);
      if ( !v13 )
        goto LABEL_9;
    }
    WdLogSingleEntry1(3LL, LowerOrderFromPageCount);
    LogicalAddressAt = -1073741801;
    goto LABEL_11;
  }
LABEL_9:
  LogicalAddressAt = SmmAllocateLogicalAddressAt((_QWORD *)v8, v9, v10, v11, (_QWORD *)(v8 + 1272));
  if ( LogicalAddressAt < 0 )
  {
    WdLogSingleEntry1(3LL, 1736LL);
LABEL_11:
    SmmDestroyLogicalAllocator((struct SYSMM_LOGICAL_ALLOCATOR *)v8);
    return (unsigned int)LogicalAddressAt;
  }
  *(_QWORD *)(*(_QWORD *)(v8 + 1272) + 32LL) |= 0x800000000000000uLL;
  *(_DWORD *)(v8 + 1320) ^= (*(_DWORD *)(v8 + 1320) ^ ((unsigned int)dword_1C0130B08 >> 6)) & 1;
  result = 0LL;
  *a2 = (struct SYSMM_LOGICAL_ALLOCATOR *)v8;
  return result;
}
