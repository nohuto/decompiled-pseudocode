/*
 * XREFs of RtlSidHashLookup @ 0x140205990
 * Callers:
 *     SepSidInTokenSidHash @ 0x1402057EC (SepSidInTokenSidHash.c)
 *     SepTokenIsOwner @ 0x1402058C0 (SepTokenIsOwner.c)
 * Callees:
 *     memcmp @ 0x1403D2070 (memcmp.c)
 */

const void **__fastcall RtlSidHashLookup(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int8 v4; // r14
  __int16 v5; // bp
  unsigned int v6; // r12d
  unsigned int v7; // edx
  unsigned __int64 i; // rsi
  unsigned int v9; // esi
  int v11; // r13d
  __int64 v12; // rcx
  int v13; // edx
  const void **v14; // r15
  __int64 v15; // r15
  unsigned int v16; // r14d
  const void **v17; // rdi
  int v18; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+70h] [rbp+18h]

  if ( !a1 || !a2 )
    return 0LL;
  v4 = 0;
  v5 = *a2;
  v6 = 4 * *((unsigned __int8 *)a2 + 1) + 8;
  v7 = LOBYTE(a2[2 * ((unsigned __int64)*a2 >> 8) + 2]);
  for ( i = *(_QWORD *)(a1 + 8LL * (v7 & 0xF) + 16) & *(_QWORD *)(a1 + 8 * ((unsigned __int64)v7 >> 4) + 144); i; i >>= 8 )
  {
    LOBYTE(v11) = i;
    if ( (_BYTE)i )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v19 = v12;
      v13 = v4;
      do
      {
        v18 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v11);
        v14 = (const void **)(v12 + 16LL * (unsigned int)(v13 + v18));
        if ( *(_WORD *)*v14 == v5 )
        {
          if ( !memcmp(a2, *v14, v6) )
            return v14;
          v12 = v19;
          v13 = v4;
        }
        v11 = (unsigned __int8)v11 ^ (1 << v18);
      }
      while ( (_BYTE)v11 );
    }
    v4 += 8;
  }
  v9 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 0x40u )
    return 0LL;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = 64;
  while ( 1 )
  {
    v17 = (const void **)(v15 + 16LL * v16);
    if ( *(_WORD *)*v17 == v5 && !memcmp(a2, *v17, v6) )
      break;
    if ( ++v16 >= v9 )
      return 0LL;
  }
  return (const void **)(v15 + 16LL * v16);
}
