/*
 * XREFs of MiValidateMdlAllocationRequest @ 0x14029717C
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140294744 (MiAllocatePagesForMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateMdlAllocationRequest(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // r10d
  unsigned __int64 v12; // rdi
  ULONG_PTR v13; // rbx
  int v14; // eax
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  __int64 result; // rax
  unsigned int v21; // eax
  __int64 *v22; // rdx

  v9 = a9;
  if ( (a9 & 0x100) != 0 && (ULONG_PTR *)a2 != &MiSystemPartition )
    return 3221225485LL;
  v12 = a3 >> 12;
  v13 = a4 >> 12;
  if ( a4 >> 12 < 0xFFFFFFFFFLL )
  {
    if ( v13 >= *(_QWORD *)(a2 + 6920) && !v12 )
      v9 = a9 | 0x10000;
  }
  else
  {
    v13 = 0xFFFFFFFFFLL;
    v14 = a9 | 0x10000;
    if ( v12 )
      v14 = a9;
    v9 = v14;
  }
  if ( (a5 & 0xFFF) != 0 )
    return 3221225485LL;
  v15 = a5 >> 12;
  if ( ((v15 - 1) & v15) != 0 )
  {
    if ( (v9 & 0x40) != 0 )
      return 3221225485LL;
    v15 = 0LL;
  }
  if ( (v9 & 0x400) != 0 && ((v9 & 0x362) != 0 || (v9 & 0x10001) == 0 || ((a7 - 1) & 0xFFFFFFFD) != 0) )
    return 3221225485LL;
  v16 = a6;
  if ( a6 <= 0xFFFFE000 )
    goto LABEL_10;
  if ( (v9 & 4) != 0 )
    return 3221225485LL;
  v16 = 4294959104LL;
  if ( (v9 & 0x60) != 0 && v15 )
    v16 = ~((v15 << 12) - 1) & 0xFFFFE000;
LABEL_10:
  v17 = (unsigned __int64)(v16 + 4095) >> 12;
  if ( (v9 & 0x40) != 0 )
  {
    if ( (v12 & 0xFFFFFFFFFFEFFFFFuLL) != 0 || v13 < BugCheckParameter3 )
      return 3221225485LL;
    v21 = 0;
    v22 = MiLargePageSizes;
    do
    {
      if ( v15 == *v22 )
        break;
      ++v21;
      ++v22;
    }
    while ( v21 < 3 );
    if ( v21 == 3 || v17 % v15 && ((v9 & 4) != 0 || v17 < v15) )
      return 3221225485LL;
  }
  v18 = 32LL * (~(unsigned __int8)*(_DWORD *)(a2 + 4) & 0x20);
  *(_QWORD *)(a1 + 48) = v18;
  v19 = *(_QWORD *)(a2 + 7168) - v18;
  if ( (__int64)v19 <= 0 )
    return 3221225485LL;
  if ( v17 <= v19 )
    goto LABEL_13;
  if ( (v9 & 4) == 0 )
  {
    v17 = *(_QWORD *)(a2 + 7168) - v18;
    if ( (v9 & 0x40) != 0 )
    {
      if ( v19 % v15 && v19 < v15 )
        return 3221225626LL;
    }
    else if ( (v9 & 0x20) == 0 || !v15 )
    {
LABEL_49:
      if ( v17 && v17 >= v15 )
      {
LABEL_13:
        if ( v17 )
        {
          *(_DWORD *)(a1 + 56) = a8;
          result = 0LL;
          *(_QWORD *)a1 = a2;
          *(_DWORD *)(a1 + 8) = v9;
          *(_QWORD *)(a1 + 16) = v12;
          *(_QWORD *)(a1 + 24) = v13;
          *(_QWORD *)(a1 + 32) = v15;
          *(_DWORD *)(a1 + 60) = a7;
          *(_QWORD *)(a1 + 40) = v17;
          return result;
        }
        return 3221225485LL;
      }
      return 3221225626LL;
    }
    v17 = v19 & ~(v15 - 1);
    goto LABEL_49;
  }
  return 3221225626LL;
}
