/*
 * XREFs of CompareNamesCaseSensitive @ 0x140911C34
 * Callers:
 *     PfxFindPrefix @ 0x140911E40 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140911F40 (PfxInsertPrefix.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 */

__int64 __fastcall CompareNamesCaseSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  const void *v6; // rdx
  unsigned int v7; // eax
  const void *v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int8 v14; // r11
  unsigned __int8 v15; // bl
  char v16; // cl
  char v17; // bp
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // al
  unsigned int i; // r10d

  v2 = *a1;
  v3 = *a2;
  if ( (_WORD)v2 == 1 && **((_BYTE **)a1 + 1) == 92 && (unsigned __int16)v3 > 1u && **((_BYTE **)a2 + 1) == 92 )
    return 1LL;
  v6 = (const void *)*((_QWORD *)a2 + 1);
  v7 = *a1;
  v8 = (const void *)*((_QWORD *)a1 + 1);
  if ( (unsigned __int16)v2 >= (unsigned __int16)v3 )
    v7 = v3;
  v9 = v7;
  v10 = RtlCompareMemory(v8, v6, v7);
  if ( v10 < v9 )
  {
    v11 = *((_QWORD *)a1 + 1);
    v12 = 0LL;
    v13 = *((_QWORD *)a2 + 1);
    v14 = 0;
    v15 = 0;
    v16 = *(_BYTE *)(v10 + v11);
    v17 = *(_BYTE *)(v10 + v13);
    if ( v16 != 92 )
      v14 = *(_BYTE *)(v10 + v11);
    v18 = v14;
    if ( v17 != 92 )
      v15 = *(_BYTE *)(v10 + v13);
    v19 = v15;
    if ( (_BYTE)NlsMbCodePageTag )
    {
      if ( v16 == 92 )
      {
        for ( i = 0; i < v10; i += (NlsLeadByteInfoTable[*(unsigned __int8 *)(i + v11)] != 0) + 1 )
          ;
        v18 = v14;
        if ( i != v10 )
          v18 = 92;
      }
      v19 = v15;
      if ( v17 == 92 )
      {
        if ( v10 )
        {
          do
            LODWORD(v12) = (NlsLeadByteInfoTable[*(unsigned __int8 *)(v12 + v13)] != 0) + 1 + v12;
          while ( (unsigned int)v12 < v10 );
        }
        v19 = v15;
        if ( (_DWORD)v12 != v10 )
          v19 = 92;
      }
    }
    if ( v18 < v19 )
      return 0LL;
    if ( v18 > v19 )
      return 3LL;
  }
  if ( (unsigned int)v2 < v3 )
    return *(_BYTE *)(v2 + *((_QWORD *)a2 + 1)) == 92;
  if ( (unsigned int)v2 <= v3 )
    return 2LL;
  else
    return 3LL;
}
