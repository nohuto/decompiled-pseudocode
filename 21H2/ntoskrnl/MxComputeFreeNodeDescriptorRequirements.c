/*
 * XREFs of MxComputeFreeNodeDescriptorRequirements @ 0x140A45D90
 * Callers:
 *     MiFindLargestLoaderDescriptor @ 0x140A45420 (MiFindLargestLoaderDescriptor.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x1403B1630 (MiRestrictRangeToNode.c)
 *     memset @ 0x140414300 (memset.c)
 *     MxComputePfnPagesNeeded @ 0x140A46040 (MxComputePfnPagesNeeded.c)
 */

__int64 __fastcall MxComputeFreeNodeDescriptorRequirements(__int64 a1, void *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 *v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  ULONG_PTR v10; // r12
  ULONG_PTR v11; // r14
  __int64 v12; // rdi
  __int64 result; // rax
  ULONG_PTR v14; // [rsp+60h] [rbp+8h]
  __int64 *v15; // [rsp+68h] [rbp+10h]

  memset(a2, 0, 0x200uLL);
  v4 = 0xFFFFFFFFLL;
  v5 = -1LL;
  v6 = -1LL;
  v7 = *(__int64 **)(a1 + 32);
  v15 = (__int64 *)(a1 + 32);
  if ( v7 != (__int64 *)(a1 + 32) )
  {
    while ( 1 )
    {
      v8 = *((int *)v7 + 4);
      if ( (unsigned int)v8 > 0x28 || (v9 = 0x1C5C0C00048LL, !_bittest64(&v9, v8)) )
      {
        v10 = v7[4];
        v11 = v7[3];
        if ( v10 )
          break;
      }
LABEL_9:
      v7 = (__int64 *)*v7;
      if ( v7 == v15 )
        goto LABEL_10;
    }
    while ( 1 )
    {
      v14 = MiRestrictRangeToNode(v11, v10);
      v12 = *((unsigned int *)MiSearchNumaNodeTable(v11) + 2);
      if ( v6 != -1 )
      {
        if ( (_DWORD)v12 == (_DWORD)v4
          && (((unsigned __int64)(48 * v6) >> 18) & 0x3FFFFFF8) - 0x904BFFFFFF8LL >= (((48 * v11) >> 18) & 0x3FFFFFF8)
                                                                                   - 0x904C0000000LL )
        {
          goto LABEL_8;
        }
        *((_QWORD *)a2 + (unsigned int)v4) += MxComputePfnPagesNeeded(v5, v6);
      }
      v5 = v11;
LABEL_8:
      v4 = v12;
      v6 = v14 + v11;
      v11 += v14;
      v10 -= v14;
      if ( !v10 )
        goto LABEL_9;
    }
  }
LABEL_10:
  result = MxComputePfnPagesNeeded(v5, v6);
  *((_QWORD *)a2 + v4) += result;
  return result;
}
