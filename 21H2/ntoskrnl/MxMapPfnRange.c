/*
 * XREFs of MxMapPfnRange @ 0x140A458EC
 * Callers:
 *     MiCreateSparsePfnDatabase @ 0x140A45718 (MiCreateSparsePfnDatabase.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x1403B1630 (MiRestrictRangeToNode.c)
 *     MxMapVa @ 0x140A45B6C (MxMapVa.c)
 */

__int64 __fastcall MxMapPfnRange(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  int v3; // r13d
  ULONG_PTR v4; // r14
  ULONG_PTR v5; // r12
  ULONG_PTR v6; // rdi
  __int64 v7; // rdi
  ULONG_PTR v8; // rsi
  ULONG_PTR v9; // r15
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+28h] [rbp-50h]
  int v20; // [rsp+2Ch] [rbp-4Ch]
  __int64 v21; // [rsp+30h] [rbp-48h]
  ULONG_PTR v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v18 = 0LL;
  v20 = 0;
  v3 = a3;
  v23 = 0LL;
  v4 = a2;
  v5 = BugCheckParameter2;
  v6 = 48 * BugCheckParameter2 - 0x58000000000LL;
  if ( v6 == (v6 & 0xFFFFFFFFFFE00000uLL) )
    v7 = 0LL;
  else
    v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 == -1LL
    || 48 * (BugCheckParameter2 + a2) - 0x58000000000LL == ((48 * (BugCheckParameter2 + a2) - 0x58000000000LL) & 0xFFFFFFFFFFE00000uLL) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (((48 * (BugCheckParameter2 + a2) - 0x58000000001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v21 = v7;
  v22 = v8;
  if ( !a2 )
    return 1LL;
  while ( 1 )
  {
    v9 = v4;
    if ( v4 == -1LL )
    {
      v4 = 0LL;
      v10 = MmPfnDatabase + (MxPfnAllocation << 12);
    }
    else
    {
      v9 = MiRestrictRangeToNode(v5, v4);
      v4 -= v9;
      v10 = 48 * (v5 + v9) - 0x58000000000LL;
    }
    v19 = *((_DWORD *)MiSearchNumaNodeTable(v5) + 2);
    v11 = ((48 * v5 - 0x58000000000LL) >> 9) & 0x7FFFFFFFF8LL;
    v5 += v9;
    v12 = v11 - 0x98000000000LL;
    v13 = (((unsigned __int64)(v10 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v12 <= v13 )
      break;
LABEL_19:
    if ( !v4 )
      return 1LL;
  }
  while ( 1 )
  {
    if ( v12 == v7 || (v14 = v3, v12 == v8) )
      v14 = 1;
    LODWORD(v23) = 0;
    v20 = v14;
    v18 = (__int64)(v12 << 25) >> 16;
    if ( !(unsigned int)MxMapVa(&v18) )
      return 0LL;
    if ( (_DWORD)v23 )
    {
      v15 = (unsigned int)v23;
      do
      {
        v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v15;
      }
      while ( v15 );
      v12 += 8LL;
      v3 = a3;
      v16 = (unsigned int)v23;
      do
      {
        v12 = (__int64)(v12 << 25) >> 16;
        --v16;
      }
      while ( v16 );
    }
    else
    {
      v12 += 8LL;
    }
    if ( v12 > v13 )
      goto LABEL_19;
  }
}
