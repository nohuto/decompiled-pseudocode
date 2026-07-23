/*
 * XREFs of AsiSortValueList @ 0x1405BF0A0
 * Callers:
 *     ApiSetComposeSchema @ 0x1405BE7D0 (ApiSetComposeSchema.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1405DCCD0 (RtlCompareUnicodeStrings.c)
 */

int __fastcall AsiSortValueList(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  unsigned int v5; // ebx
  char v6; // r12
  __int128 *v7; // rdi
  __int128 *v8; // rsi
  __int64 v9; // rbp
  int v10; // ecx
  __int128 v11; // xmm1
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v2 = &retaddr;
  v5 = *(_DWORD *)(a2 + 20) - 1;
  if ( *(_DWORD *)(a2 + 20) != 1 )
  {
    do
    {
      v6 = 0;
      v7 = (__int128 *)(a1 + *(unsigned int *)(a2 + 16));
      v8 = (__int128 *)((char *)v7 + 20);
      if ( !v5 )
        break;
      v9 = v5;
      do
      {
        LODWORD(v2) = RtlCompareUnicodeStrings(
                        (PCWCH)(a1 + *((unsigned int *)v7 + 1)),
                        (unsigned __int64)*((unsigned int *)v7 + 2) >> 1,
                        (PCWCH)(a1 + *((unsigned int *)v8 + 1)),
                        (unsigned __int64)*((unsigned int *)v8 + 2) >> 1,
                        1u);
        if ( (_DWORD)v2 )
        {
          v10 = *((_DWORD *)v8 + 4);
          v6 = 1;
          v11 = *v8;
          *v8 = *v7;
          LODWORD(v2) = *((_DWORD *)v7 + 4);
          *((_DWORD *)v8 + 4) = (_DWORD)v2;
          *v7 = v11;
          *((_DWORD *)v7 + 4) = v10;
        }
        v7 = (__int128 *)((char *)v7 + 20);
        v8 = (__int128 *)((char *)v8 + 20);
        --v9;
      }
      while ( v9 );
      if ( !v6 )
        break;
      --v5;
    }
    while ( v5 );
  }
  return (int)v2;
}
