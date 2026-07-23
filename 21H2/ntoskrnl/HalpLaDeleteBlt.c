/*
 * XREFs of HalpLaDeleteBlt @ 0x1404DB304
 * Callers:
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpLaBltAdd @ 0x1404DB238 (HalpLaBltAdd.c)
 */

__int64 __fastcall HalpLaDeleteBlt(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // r8
  __int64 v12; // rcx

  v2 = *(_QWORD *)(a1 + 56);
  v4 = 0;
  while ( *(_QWORD *)(v2 + 48) != a2 || *(_QWORD *)(v2 + 24) || *(_QWORD *)(v2 + 32) )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( v5 && *(_QWORD *)(v5 + 48) <= a2 )
    {
      v2 = *(_QWORD *)(v2 + 32);
    }
    else
    {
      v2 = *(_QWORD *)(v2 + 24);
      if ( !v2 )
        return (unsigned int)-1073741823;
    }
  }
  if ( !*(_BYTE *)(v2 + 56) )
    return (unsigned int)-1073741823;
  *(_QWORD *)(a1 + 32) -= *(_QWORD *)(v2 + 72);
  *(_QWORD *)(a1 + 40) -= *(_QWORD *)(v2 + 64);
  *(_BYTE *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 72) = 0LL;
  while ( 1 )
  {
    v11 = (__int64 *)(v2 + 16);
    v12 = *(_QWORD *)(v2 + 16);
    if ( !v12 )
      break;
    v7 = *(_QWORD *)(v12 + 24);
    if ( v2 == v7 )
      v7 = *(_QWORD *)(v12 + 32);
    if ( *(_BYTE *)(v7 + 56) )
      break;
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(__int64 **)(v7 + 8), *v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)v7 = v7;
    v2 = *v11;
    HalpMmAllocCtxFree(v8, *(_QWORD *)(*v11 + 24));
    HalpMmAllocCtxFree(v10, *(_QWORD *)(v2 + 32));
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_BYTE *)(v2 + 56) = 0;
    *(_DWORD *)(a1 + 24) -= 2;
  }
  HalpLaBltAdd((__int64 *)v2, a1);
  return v4;
}
