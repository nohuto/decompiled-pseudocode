/*
 * XREFs of HalpLaAllocateBlt @ 0x1404DB044
 * Callers:
 *     HalpDomainLaAllocate @ 0x1404C4F54 (HalpDomainLaAllocate.c)
 * Callees:
 *     HalpLaBltAdd @ 0x1404DB238 (HalpLaBltAdd.c)
 *     HalpLaBltFindFree @ 0x1404DB274 (HalpLaBltFindFree.c)
 *     HalpLapDeleteSubtree @ 0x1404DB830 (HalpLapDeleteSubtree.c)
 *     HalpLapSplitNode @ 0x1404DB8EC (HalpLapSplitNode.c)
 */

__int64 __fastcall HalpLaAllocateBlt(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 i; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  int v15; // ebx
  unsigned __int64 v16; // rdx
  _QWORD *Free; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // r13
  _QWORD *v22; // r9
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rcx

  v8 = a1[2];
  v9 = 0LL;
  if ( a2 > a1[1] )
    return (unsigned int)-1073741811;
  for ( i = *a1; i < a2; i *= 2LL )
    ;
  if ( a4 )
    v9 = *a4;
  if ( a5 )
    v8 = *a5;
  if ( ((i - 1) & i) == 0
    && i
    && (v11 = ~(i - 1), v12 = v11 & (i + v9 - 1), v12 >= v9)
    && ((v13 = -1LL, v8 == -1LL) || (v13 = (v11 & (v8 + 1)) - 1, v13 <= v8))
    && v12 <= v13
    && (i <= v13 - v12 + 1 || v13 - v12 == -1LL)
    && (v14 = a1[7], v15 = 0, v16 = *(_QWORD *)(v14 + 48), *(_QWORD *)(v14 + 64) + v16 - 1 >= v12)
    && v16 <= v13 )
  {
    Free = (_QWORD *)HalpLaBltFindFree(i, a1, v12, v13);
    v18 = Free;
    if ( Free )
    {
      v19 = *Free;
      if ( *(_QWORD **)(v19 + 8) != v18 || (v20 = (_QWORD *)v18[1], (_QWORD *)*v20 != v18) )
        __fastfail(3u);
      *v20 = v19;
      v21 = v18;
      *(_QWORD *)(v19 + 8) = v20;
      v18[1] = v18;
      *v18 = v18;
      while ( v18[8] != i )
      {
        v15 = HalpLapSplitNode(a1, v18);
        if ( v15 < 0 )
          goto LABEL_32;
        v22 = (_QWORD *)v18[3];
        v23 = (_QWORD *)v18[4];
        v18 = v22;
        if ( v22[8] - 1LL + v22[6] < v12 )
        {
          v18 = v23;
          v23 = v22;
        }
        HalpLaBltAdd(v23, a1);
      }
      v24 = v18[6];
      if ( v24 >= v12 && v18[8] + v24 - 1 <= v13 )
      {
        v18[5] = 0LL;
        *((_BYTE *)v18 + 56) = 1;
        v18[9] = a2;
        a1[4] += a2;
        a1[5] += v18[8];
        *a6 = v18[6];
        return (unsigned int)v15;
      }
LABEL_32:
      HalpLapDeleteSubtree(a1, v21);
    }
    return (unsigned int)-1073741670;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
