/*
 * XREFs of PnprMmConstruct @ 0x1408AE748
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PnprMmAddRange @ 0x1408AE610 (PnprMmAddRange.c)
 *     PnprMmFree @ 0x1408AE854 (PnprMmFree.c)
 */

__int64 __fastcall PnprMmConstruct(__int64 a1, unsigned int *a2)
{
  int v2; // edi
  unsigned int v3; // esi
  unsigned int *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  int v13; // eax

  v2 = 0;
  v3 = 0;
  if ( *(_DWORD *)(a1 + 4) )
  {
    while ( 1 )
    {
      v2 = PnprMmAddRange(a2, *(_QWORD *)(a1 + 16LL * v3 + 16), *(_QWORD *)(a1 + 16LL * v3 + 24));
      if ( v2 < 0 )
        break;
      if ( ++v3 >= *(_DWORD *)(a1 + 4) )
        goto LABEL_4;
    }
    v8 = PnprContext;
    v9 = *(_DWORD *)(PnprContext + 20984);
    if ( !v9 )
      v9 = 4496;
    *(_DWORD *)(PnprContext + 20984) = v9;
    v10 = *(_DWORD *)(v8 + 20988);
    if ( !v10 )
      v10 = 1;
LABEL_19:
    *(_DWORD *)(v8 + 20988) = v10;
  }
  else
  {
LABEL_4:
    v6 = *(unsigned int **)a2;
    v7 = 0LL;
    while ( v6 != a2 )
    {
      v11 = *((_QWORD *)v6 + 3);
      if ( !v11 || (v12 = *((_QWORD *)v6 + 2), v12 < v7) )
      {
        v8 = PnprContext;
        v2 = -1073741811;
        v13 = *(_DWORD *)(PnprContext + 20984);
        if ( !v13 )
          v13 = 4517;
        *(_DWORD *)(PnprContext + 20984) = v13;
        v10 = *(_DWORD *)(v8 + 20988);
        if ( !v10 )
          v10 = 6;
        goto LABEL_19;
      }
      v6 = *(unsigned int **)v6;
      v7 = v12 + v11;
    }
  }
  if ( v2 < 0 )
    PnprMmFree(a2);
  return (unsigned int)v2;
}
