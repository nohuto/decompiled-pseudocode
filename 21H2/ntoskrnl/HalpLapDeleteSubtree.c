/*
 * XREFs of HalpLapDeleteSubtree @ 0x1404DB830
 * Callers:
 *     HalpLaAllocateBlt @ 0x1404DB044 (HalpLaAllocateBlt.c)
 *     HalpLaFreeState @ 0x1404DB404 (HalpLaFreeState.c)
 *     HalpLaInitializeState @ 0x1404DB440 (HalpLaInitializeState.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpLaBltAdd @ 0x1404DB238 (HalpLaBltAdd.c)
 */

__int64 **__fastcall HalpLapDeleteSubtree(__int64 **a1, __int64 *a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  bool v9; // zf

  *((_BYTE *)a2 + 56) = 0;
  v3 = (__int64)a1;
  v4 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = (__int64 *)v4[3];
      if ( !v5 )
      {
        v5 = (__int64 *)v4[4];
        if ( !v5 )
          break;
      }
      v4 = v5;
    }
    if ( v4 == a2 )
      break;
    if ( !*((_BYTE *)v4 + 56) )
    {
      v6 = (__int64 *)*v4;
      if ( *(__int64 **)(*v4 + 8) != v4 || (a1 = (__int64 **)v4[1], *a1 != v4) )
        __fastfail(3u);
      *a1 = v6;
      v6[1] = (__int64)a1;
      v4[1] = (__int64)v4;
      *v4 = (__int64)v4;
    }
    v7 = (__int64 *)v4[2];
    v8 = v7[3];
    v9 = v8 == (_QWORD)v4;
    v4 = v7;
    if ( v9 )
    {
      HalpMmAllocCtxFree((__int64)a1, v8);
      --*(_DWORD *)(v3 + 24);
      v4[3] = 0LL;
    }
    else
    {
      HalpMmAllocCtxFree((__int64)a1, v7[4]);
      --*(_DWORD *)(v3 + 24);
      v4[4] = 0LL;
    }
  }
  return HalpLaBltAdd(a2, v3);
}
