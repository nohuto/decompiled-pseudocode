/*
 * XREFs of PfpQueryScenarioInformation @ 0x140778C54
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140649630 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x140999740 (PfpScenCtxQueryScenarioInformation.c)
 */

__int64 __fastcall PfpQueryScenarioInformation(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int128 *v7; // rax
  unsigned __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 24) == 32 )
  {
    v6 = 0;
    if ( a2 && (*(_QWORD *)(a1 + 16) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(__int128 **)(a1 + 16);
    v11 = *v7;
    v12 = v7[1];
    if ( (unsigned int)*v7 == 4 )
    {
      PfpScenCtxQueryScenarioInformation((ULONG_PTR)&qword_140C50320);
      if ( a2 )
      {
        v8 = *(_QWORD *)(a1 + 16);
        if ( (v8 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v8 >= 0x7FFFFFFF0000LL )
          v8 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v8 = *(_BYTE *)v8;
        *(_BYTE *)(v8 + 31) = *(_BYTE *)(v8 + 31);
      }
      v9 = *(_OWORD **)(a1 + 16);
      *v9 = v11;
      v9[1] = v12;
      *a3 = 32;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v6;
}
