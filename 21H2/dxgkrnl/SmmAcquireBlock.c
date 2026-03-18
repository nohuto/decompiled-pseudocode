/*
 * XREFs of SmmAcquireBlock @ 0x1C006F67C
 * Callers:
 *     SmmAcquireBlock @ 0x1C006F67C (SmmAcquireBlock.c)
 *     ?SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C006F90C (-SmmAllocateLogicalAddress@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_KPEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmAllocateLogicalAddressAt @ 0x1C03C0F84 (SmmAllocateLogicalAddressAt.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmAcquireBlock @ 0x1C006F67C (SmmAcquireBlock.c)
 *     SmmGetAnyFreeBlockFromPool @ 0x1C006FD34 (SmmGetAnyFreeBlockFromPool.c)
 *     SmmGetFreeBlockFromPool @ 0x1C006FDD4 (SmmGetFreeBlockFromPool.c)
 *     SmmReleaseBlock @ 0x1C006FEF4 (SmmReleaseBlock.c)
 */

__int64 __fastcall SmmAcquireBlock(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // r15d
  char v7; // bp
  char v8; // r12
  __int64 result; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r9
  _QWORD *v13; // rdi
  _QWORD *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // r8
  int v17; // edx
  int v18; // r8d
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // r8

  v4 = (unsigned __int8)a2;
  v7 = a3;
  v8 = a2;
  if ( (unsigned __int8)a2 > *(_BYTE *)(a1 + 1324) )
  {
    WdLogSingleEntry4(3LL, a1, (unsigned __int8)a2, (unsigned __int8)a3, a4);
    return 0LL;
  }
  v10 = (_DWORD *)(a1 + 24LL * (unsigned __int8)a2);
  if ( !(_BYTE)a3 || (result = SmmGetFreeBlockFromPool(a1 + 24LL * (unsigned __int8)a2, a2, a4)) == 0 )
  {
    if ( *(_DWORD **)v10 != v10 && !v7 )
      return SmmGetAnyFreeBlockFromPool(v10);
    LOBYTE(a3) = v7;
    v11 = SmmAcquireBlock(a1, (unsigned int)(v4 + 1), a3, a4);
    v13 = (_QWORD *)v11;
    if ( !v11 )
      return 0LL;
    v14 = (_QWORD *)v11;
    v15 = operator new[](0x28uLL, 0x36737844u, 64LL, v12);
    v16 = (_QWORD *)v15;
    if ( !v15 )
    {
      _InterlockedIncrement(&dword_1C0130B74);
      WdLogSingleEntry1(6LL, 1120LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            0,
            v17,
            v18,
            0LL,
            1,
            -1,
            L"Failed to allocate logical block",
            1120LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
      SmmReleaseBlock(a1, v13);
      return 0LL;
    }
    v19 = (unsigned __int64)(v8 & 0x3F) << 53;
    v20 = v13[4] & 0xF80FFFFFFFFFFFFFuLL | v19 & 0xFFEFFFFFFFFFFFFFuLL;
    v13[4] = v20;
    *(_QWORD *)(v15 + 32) = *(_QWORD *)(v15 + 32) & 0xF800000000000000uLL | v19 & 0xFFEFFFFFFFFFFFFFuLL | (v20 + (1LL << v4)) & 0xFFFFFFFFFFFFFLL;
    v21 = *v13;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 )
LABEL_25:
      __fastfail(3u);
    *v16 = v21;
    v16[1] = v13;
    *(_QWORD *)(v21 + 8) = v16;
    *v13 = v16;
    if ( v7 )
    {
      v22 = v16[4] & 0xFFFFFFFFFFFFFLL;
      if ( a4 < v22 || a4 >= (1LL << v4) + v22 )
      {
LABEL_23:
        v23 = *(_QWORD *)v10;
        v24 = v16 + 2;
        if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) == v10 )
        {
          *v24 = v23;
          result = (__int64)v14;
          v24[1] = v10;
          *(_QWORD *)(v23 + 8) = v24;
          *(_QWORD *)v10 = v24;
          ++v10[4];
          return result;
        }
        goto LABEL_25;
      }
    }
    else if ( (*(_DWORD *)(a1 + 1320) & 1) == 0 )
    {
      goto LABEL_23;
    }
    v14 = v16;
    v16 = v13;
    goto LABEL_23;
  }
  return result;
}
