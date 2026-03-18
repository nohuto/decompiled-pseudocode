/*
 * XREFs of ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C006FC40
 * Callers:
 *     SmmClosePhysicalObject @ 0x1C001B364 (SmmClosePhysicalObject.c)
 *     ?SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z @ 0x1C006F5C0 (-SysMmFreeAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAU_DXGK_ADL@@@Z.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C12CC (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C03C15D0 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 * Callees:
 *     SmmReleaseBlock @ 0x1C006FEF4 (SmmReleaseBlock.c)
 */

void __fastcall SmmFreeLogicalAddress(struct SYSMM_LOGICAL_ALLOCATOR *a1, struct SYSMM_LOGICAL_BLOCK *a2)
{
  char *v2; // rbx
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned __int64 v7; // r9
  struct SYSMM_LOGICAL_BLOCK *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rdx

  v2 = (char *)a1 + 1312;
  ExAcquirePushLockExclusiveEx((char *)a1 + 1312, 0LL);
  v5 = 0LL;
  v6 = 0LL;
  while ( a2 )
  {
    v7 = *((_QWORD *)a2 + 4);
    v8 = a2;
    if ( (v7 & 0x1000000000000000LL) != 0 )
      a2 = (struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a2 + 3);
    else
      a2 = 0LL;
    v9 = 1LL << ((v7 >> 53) & 0x3F);
    v5 += v9 << 12;
    if ( (v7 & 0x10000000000000LL) == 0 || ((v7 >> 60) & 1) != 0 )
      v10 = v9 << 12;
    else
      v10 = *((_QWORD *)v8 + 3);
    v6 += v10;
    SmmReleaseBlock(a1, v8);
  }
  *((_QWORD *)a1 + 162) -= v6;
  *((_QWORD *)a1 + 160) -= v5;
  *((_QWORD *)a1 + 163) += v6 - v5;
  *((_QWORD *)a1 + 161) += v5;
  ExReleasePushLockExclusiveEx(v2, 0LL);
}
