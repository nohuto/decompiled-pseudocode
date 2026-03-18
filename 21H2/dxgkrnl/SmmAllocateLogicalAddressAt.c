/*
 * XREFs of SmmAllocateLogicalAddressAt @ 0x1C03C0F84
 * Callers:
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C10D4 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     ??$SmmAcquirePushLockExclusive@$0CF@@@YAXPEAU?$SYSMM_PUSHLOCK@$0CF@@@@Z @ 0x1C006D6F4 (--$SmmAcquirePushLockExclusive@$0CF@@@YAXPEAU-$SYSMM_PUSHLOCK@$0CF@@@@Z.c)
 *     ??$SmmReleasePushLockExclusive@$02@@YAXPEAU?$SYSMM_PUSHLOCK@$02@@@Z @ 0x1C006D73C (--$SmmReleasePushLockExclusive@$02@@YAXPEAU-$SYSMM_PUSHLOCK@$02@@@Z.c)
 *     SmmAcquireBlock @ 0x1C006F67C (SmmAcquireBlock.c)
 *     SmmGetLowerOrderFromPageCount @ 0x1C006FE50 (SmmGetLowerOrderFromPageCount.c)
 *     SmmGetOrderBlockSizeInBytes @ 0x1C006FE5C (SmmGetOrderBlockSizeInBytes.c)
 *     SmmNotifyBytesAllocate @ 0x1C006FECC (SmmNotifyBytesAllocate.c)
 *     SmmReleaseBlock @ 0x1C006FEF4 (SmmReleaseBlock.c)
 */

__int64 __fastcall SmmAllocateLogicalAddressAt(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // r15
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  unsigned __int8 LowerOrderFromPageCount; // al
  unsigned __int64 v13; // r9
  unsigned int v14; // ecx
  bool v15; // cf
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 OrderBlockSizeInBytes; // rax
  _QWORD *v21; // r9
  __int64 v22; // r8
  _QWORD *v23; // rdx

  v5 = 0;
  v6 = (__int64)(a1 + 164);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 4096LL;
  SmmAcquirePushLockExclusive<37>((__int64)(a1 + 164));
  while ( 1 )
  {
    LowerOrderFromPageCount = SmmGetLowerOrderFromPageCount(v11 >> 12);
    v14 = LowerOrderFromPageCount;
    v15 = (unsigned __int8)v18 < LowerOrderFromPageCount;
    v16 = (unsigned __int8)v18;
    v17 = v14;
    LOBYTE(v18) = 1;
    if ( v15 )
      v17 = v16;
    v19 = SmmAcquireBlock((__int64)a1, v17, v18, v13);
    if ( !v19 )
      break;
    if ( v9 )
      v9[3] = v19;
    if ( !v8 )
      v8 = (_QWORD *)v19;
    OrderBlockSizeInBytes = SmmGetOrderBlockSizeInBytes((*(_QWORD *)(v19 + 32) >> 53) & 0x3F);
    v21[2] = -1LL;
    v21[3] = 0LL;
    v10 += OrderBlockSizeInBytes;
    v21[4] = v22 | 0x1010000000000000LL;
    v9 = v21;
    v11 -= OrderBlockSizeInBytes;
    if ( !v11 )
    {
      *a5 = v8;
      SmmNotifyBytesAllocate(a1, 4096LL, 4096LL);
      goto LABEL_15;
    }
  }
  WdLogSingleEntry3(3LL, a1, 0LL, 4096LL);
  while ( v8 )
  {
    v23 = v8;
    v8 = (_QWORD *)v8[3];
    SmmReleaseBlock((__int64)a1, v23);
  }
  v5 = -1073741801;
LABEL_15:
  SmmReleasePushLockExclusive<3>(v6);
  return v5;
}
