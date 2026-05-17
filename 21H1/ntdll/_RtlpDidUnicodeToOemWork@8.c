/*
 * XREFs of _RtlpDidUnicodeToOemWork@8 @ 0x4B344552
 * Callers:
 *     _RtlDnsHostNameToComputerName@12 @ 0x4B34DAA0 (_RtlDnsHostNameToComputerName@12.c)
 *     _RtlUnicodeStringToCountedOemString@12 @ 0x4B34DC20 (_RtlUnicodeStringToCountedOemString@12.c)
 *     _RtlUpcaseUnicodeStringToCountedOemString@12 @ 0x4B34DE20 (_RtlUpcaseUnicodeStringToCountedOemString@12.c)
 *     _RtlUpcaseUnicodeStringToOemString@12 @ 0x4B34DF30 (_RtlUpcaseUnicodeStringToOemString@12.c)
 * Callees:
 *     _RtlpIsUtf8Process@4 @ 0x4B2E0C43 (_RtlpIsUtf8Process@4.c)
 */

char __fastcall RtlpDidUnicodeToOemWork(unsigned __int16 *a1, int a2)
{
  char v3; // dl
  unsigned int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  unsigned int v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned __int8 v12; // cl
  __int16 v13; // dx
  __int16 v14; // ax
  bool v15; // zf
  int i; // [esp+8h] [ebp-Ch]
  int j; // [esp+Ch] [ebp-8h]
  int v20; // [esp+Ch] [ebp-8h]

  if ( !RtlpIsUtf8Process(1) )
  {
    v4 = *a1;
    if ( NlsMbOemCodePageTag )
    {
      v9 = 0;
      if ( v4 )
      {
        v10 = 0;
        v20 = 0;
        v11 = *((_DWORD *)a1 + 1);
        for ( i = v11; ; v11 = i )
        {
          v12 = *(_BYTE *)(v11 + v9);
          if ( NlsOemLeadByteInfoTable[v12] && v9 + 1 < v4 )
          {
            v13 = *(unsigned __int8 *)(i + v9++ + 1);
            v14 = ((char)v12 << 8) + v13;
            v10 = v20;
            v15 = v14 == OemDefaultChar;
          }
          else
          {
            v15 = (char)v12 == (unsigned __int8)OemDefaultChar;
          }
          if ( v15 && *(_WORD *)(v10 + *(_DWORD *)(a2 + 4)) != OemTransUniDefaultChar )
            break;
          ++v9;
          v10 += 2;
          v20 = v10;
          if ( v9 >= v4 )
            return 1;
        }
        return 0;
      }
    }
    else
    {
      v5 = 0;
      if ( *a1 )
      {
        v6 = *((_DWORD *)a1 + 1);
        v7 = a2;
        for ( j = v6; ; v6 = j )
        {
          if ( *(char *)(v6 + v5) == (unsigned __int8)OemDefaultChar )
          {
            v8 = *(_DWORD *)(v7 + 4);
            v7 = a2;
            if ( *(_WORD *)(v8 + 2 * v5) != OemTransUniDefaultChar )
              break;
          }
          if ( ++v5 >= v4 )
            return v3;
        }
        return 0;
      }
    }
  }
  return v3;
}
