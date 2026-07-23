/*
 * XREFs of _CompareNamesCaseSensitive@8 @ 0x4B344F9C
 * Callers:
 *     _PfxFindPrefix@8 @ 0x4B345160 (_PfxFindPrefix@8.c)
 *     _PfxInsertPrefix@12 @ 0x4B345220 (_PfxInsertPrefix@12.c)
 * Callees:
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

int __fastcall CompareNamesCaseSensitive(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v3; // di
  unsigned __int16 v4; // ax
  unsigned int v5; // esi
  unsigned __int16 *v6; // edi
  unsigned int v7; // edx
  char v8; // ah
  char v9; // ch
  unsigned __int8 v10; // bh
  unsigned __int8 v11; // bl
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // al
  unsigned int v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  SIZE_T v20; // [esp-4h] [ebp-2Ch]
  int v22; // [esp+Ch] [ebp-1Ch]
  unsigned __int16 v23; // [esp+10h] [ebp-18h]
  unsigned __int16 v24; // [esp+14h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-Ch]

  v3 = *a2;
  v24 = *a1;
  v22 = *a1;
  v23 = *a2;
  if ( *a1 != 1 || **((_BYTE **)a1 + 1) != 92 )
    goto LABEL_5;
  if ( v3 > 1u )
  {
    if ( **((_BYTE **)a2 + 1) == 92 )
      return 1;
LABEL_5:
    v4 = *a1;
    if ( *a1 < v3 )
      goto LABEL_7;
  }
  v4 = *a2;
LABEL_7:
  v5 = v4;
  LODWORD(v20) = v4;
  v6 = a2;
  v7 = RtlCompareMemory((const void *)*((_DWORD *)a1 + 1), (const void *)*((_DWORD *)a2 + 1), v20);
  if ( v7 < v5 )
  {
    v25 = *((_DWORD *)a1 + 1);
    v8 = *(_BYTE *)(v25 + v7);
    v9 = *(_BYTE *)(*((_DWORD *)a2 + 1) + v7);
    v10 = v8 == 92 ? 0 : v8;
    v11 = v10;
    v12 = v9 == 92 ? 0 : v9;
    v13 = v12;
    if ( NlsMbCodePageTag )
    {
      v14 = 0;
      if ( v8 == 92 )
      {
        if ( v7 )
        {
          v15 = v25;
          do
          {
            v16 = *(unsigned __int8 *)(v15 + v14);
            v15 = v25;
            v14 += (NlsLeadByteInfoTable[v16] != 0) + 1;
          }
          while ( v14 < v7 );
          v6 = a2;
          v12 = v9 == 92 ? 0 : v9;
        }
        v11 = v10;
        if ( v14 != v7 )
          v11 = 92;
        v14 = 0;
      }
      v13 = v12;
      if ( v9 == 92 )
      {
        if ( v7 )
        {
          v17 = *((_DWORD *)a2 + 1);
          do
          {
            v18 = *(unsigned __int8 *)(v17 + v14);
            v17 = *((_DWORD *)a2 + 1);
            v14 += (NlsLeadByteInfoTable[v18] != 0) + 1;
          }
          while ( v14 < v7 );
          v6 = a2;
          v12 = v9 == 92 ? 0 : v9;
        }
        v13 = v12;
        if ( v14 != v7 )
          v13 = 92;
      }
    }
    if ( v11 < v13 )
      return 0;
    if ( v11 > v13 )
      return 3;
  }
  if ( v24 < v23 )
    return *(_BYTE *)(v22 + *((_DWORD *)v6 + 1)) == 92;
  if ( v24 <= v23 )
    return 2;
  else
    return 3;
}
