/*
 * XREFs of MxInitializeFreeNodeDescriptors @ 0x140A45500
 * Callers:
 *     MiFindLargestLoaderDescriptor @ 0x140A45420 (MiFindLargestLoaderDescriptor.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x1403B1630 (MiRestrictRangeToNode.c)
 *     MxPageAlwaysHot @ 0x140A45FC0 (MxPageAlwaysHot.c)
 *     MiInitializeBootMemoryDescriptor @ 0x140A45FE0 (MiInitializeBootMemoryDescriptor.c)
 */

_UNKNOWN **__fastcall MxInitializeFreeNodeDescriptors(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v3; // rbp
  ULONG_PTR i; // rbx
  ULONG_PTR v7; // rsi
  __int64 v8; // r15
  __int64 *v9; // rdi
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a1 + 32);
  for ( i = *(_QWORD *)(a1 + 24); v3; v3 -= v7 )
  {
    v7 = MiRestrictRangeToNode(i, v3);
    v8 = *((unsigned int *)MiSearchNumaNodeTable(i) + 2);
    v9 = &MxBootFreeDescriptor[5 * v8];
    if ( v7 >= v9[1] || (result = (_UNKNOWN **)(*(_QWORD *)(a2 + 8 * v8) + 0x4000LL), v7 >= (unsigned __int64)result) )
    {
      if ( (unsigned int)MxPageAlwaysHot(v7 + i - 1) == 1
        || (v10 = v9[1]) == 0
        || !(unsigned int)MxPageAlwaysHot(*v9 - 1 + v10)
        || (result = (_UNKNOWN **)(*v9 + v9[1]), (unsigned __int64)result < *(_QWORD *)(a2 + 8 * v8) + 0x4000LL) )
      {
        MiInitializeBootMemoryDescriptor(v9, a1, i, v7);
        result = (_UNKNOWN **)0x140000000LL;
        MxFreeDescriptor[v8] = (__int64)v9;
      }
    }
    i += v7;
  }
  return result;
}
