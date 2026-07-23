/*
 * XREFs of HalpLaReserveRange @ 0x1404DB614
 * Callers:
 *     HalpDmaAddReservedRangesToDomain @ 0x1404C4C50 (HalpDmaAddReservedRangesToDomain.c)
 *     HalpLaInitializeState @ 0x1404DB440 (HalpLaInitializeState.c)
 * Callees:
 *     HalpLaBltAdd @ 0x1404DB238 (HalpLaBltAdd.c)
 *     HalpLapSplitNode @ 0x1404DB8EC (HalpLapSplitNode.c)
 */

__int64 __fastcall HalpLaReserveRange(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // rbp
  int v7; // r9d
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 **v11; // rdx
  __int64 v12; // rdx
  __int64 **v13; // r15
  __int64 **v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 **v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 **v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // rax

  v3 = *(__int64 **)(a1 + 56);
  v4 = a2 + a3;
  v7 = 0;
  while ( 1 )
  {
    v8 = v3[6];
    if ( v8 == a2 && v8 + v3[8] == v4 )
      break;
    v9 = (__int64 *)v3[3];
    if ( !v9 )
    {
      v7 = HalpLapSplitNode(a1, v3);
      if ( v7 < 0 )
        return (unsigned int)v7;
      v10 = *v3;
      if ( *(__int64 **)(*v3 + 8) != v3 || (v11 = (__int64 **)v3[1], *v11 != v3) )
LABEL_40:
        __fastfail(3u);
      *v11 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      v3[1] = (__int64)v3;
      *v3 = (__int64)v3;
      HalpLaBltAdd((__int64 *)v3[4], a1);
      HalpLaBltAdd((__int64 *)v3[3], v12);
      v9 = (__int64 *)v3[3];
    }
    if ( v4 > v9[6] + v9[8] )
    {
      if ( a2 < *(_QWORD *)(v3[4] + 48) )
        break;
      v3 = (__int64 *)v3[4];
    }
    else
    {
      v3 = v9;
    }
  }
  v13 = (__int64 **)(v3 + 2);
LABEL_38:
  while ( 1 )
  {
    v25 = *v13;
    if ( v3 == *v13 )
      return (unsigned int)v7;
    v14 = (__int64 **)(v3 + 3);
    v15 = v3[3];
    if ( v15 && a2 < *(_QWORD *)(v15 + 48) + *(_QWORD *)(v15 + 64) )
    {
      v3 = (__int64 *)v3[3];
    }
    else
    {
      v16 = v3[4];
      if ( v16 && v4 > *(_QWORD *)(v16 + 48) )
      {
        v3 = (__int64 *)v3[4];
      }
      else
      {
        v17 = v3[6];
        if ( (a2 <= v17 || a2 >= v17 + v3[8]) && ((v18 = v3[8], v4 >= v18 + v17) || v4 <= v17) )
        {
          if ( a2 <= v17 && v4 >= v18 + v17 )
          {
            v3[5] = -1LL;
            *((_BYTE *)v3 + 56) = 1;
            v3[9] = v18;
            *(_QWORD *)(a1 + 48) += v18;
            v23 = *v3;
            if ( *(__int64 **)(*v3 + 8) != v3 )
              goto LABEL_40;
            v24 = (__int64 **)v3[1];
            if ( *v24 != v3 )
              goto LABEL_40;
            *v24 = (__int64 *)v23;
            *(_QWORD *)(v23 + 8) = v24;
            v3[1] = (__int64)v3;
            *v3 = (__int64)v3;
            v25 = *v13;
          }
          if ( v3 != v25 )
          {
            while ( 1 )
            {
              v26 = v3[2];
              if ( *(__int64 **)(v26 + 24) == v3 )
                break;
              v3 = (__int64 *)v3[2];
              if ( (__int64 *)v26 == v25 )
                goto LABEL_38;
            }
            v3 = *(__int64 **)(v26 + 32);
          }
        }
        else
        {
          v7 = HalpLapSplitNode(a1, v3);
          if ( v7 < 0 )
            return (unsigned int)v7;
          v19 = *v3;
          if ( *(__int64 **)(*v3 + 8) != v3 )
            goto LABEL_40;
          v20 = (__int64 **)v3[1];
          if ( *v20 != v3 )
            goto LABEL_40;
          *v20 = (__int64 *)v19;
          *(_QWORD *)(v19 + 8) = v20;
          v21 = (__int64 *)v3[4];
          v3[1] = (__int64)v3;
          *v3 = (__int64)v3;
          HalpLaBltAdd(v21, a1);
          HalpLaBltAdd(*v14, v22);
          v3 = *v14;
        }
      }
    }
  }
}
