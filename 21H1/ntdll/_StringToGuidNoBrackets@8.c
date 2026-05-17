/*
 * XREFs of _StringToGuidNoBrackets@8 @ 0x4B2F1112
 * Callers:
 *     _EtwpQueryPartitionRegistryInformationUm@16 @ 0x4B2F0FDE (_EtwpQueryPartitionRegistryInformationUm@16.c)
 * Callees:
 *     <none>
 */

int __fastcall StringToGuidNoBrackets(unsigned __int16 *a1, int a2)
{
  int v4; // ebx
  _WORD *v5; // ecx
  unsigned int v6; // edx
  int v9; // ecx
  int v10; // ebx
  int v11; // [esp+10h] [ebp-4h]

  if ( !a1 )
    return -1073741811;
  v4 = *((_DWORD *)a1 + 1);
  v11 = v4;
  if ( !v4 )
    return -1073741811;
  v5 = (_WORD *)*((_DWORD *)a1 + 1);
  v6 = 0;
  while ( *v5++ )
    ;
  if ( ((int)v5 - v4 - 2) >> 1 != 36 || *a1 >> 1 < 0x24u )
    return -1073741811;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  do
  {
    if ( v6 == 8 || v6 == 13 || v6 == 18 || v6 == 23 )
    {
      if ( *(_WORD *)(v4 + 2 * v6) != 45 )
        return -1073741811;
    }
    else
    {
      v9 = *(unsigned __int16 *)(v4 + 2 * v6);
      if ( (unsigned __int16)(v9 - 48) > 9u )
      {
        if ( (unsigned __int16)(v9 - 97) > 5u )
        {
          if ( (unsigned __int16)(v9 - 65) > 5u )
            return -1073741811;
          v10 = v9 - 55;
        }
        else
        {
          v10 = v9 - 87;
        }
      }
      else
      {
        v10 = v9 - 48;
      }
      if ( v6 >= 8 )
      {
        if ( v6 >= 0xD )
        {
          if ( v6 >= 0x12 )
          {
            if ( v6 >= 0x17 )
              *(_BYTE *)(((v6 - 24) >> 1) + a2 + 10) = v10 + 16 * *(_BYTE *)(((v6 - 24) >> 1) + a2 + 10);
            else
              *(_BYTE *)(((v6 - 19) >> 1) + a2 + 8) = v10 + 16 * *(_BYTE *)(((v6 - 19) >> 1) + a2 + 8);
          }
          else
          {
            *(_WORD *)(a2 + 6) = v10 + 16 * *(_WORD *)(a2 + 6);
          }
        }
        else
        {
          *(_WORD *)(a2 + 4) = v10 + 16 * *(_WORD *)(a2 + 4);
        }
      }
      else
      {
        *(_DWORD *)a2 = v10 + 16 * *(_DWORD *)a2;
      }
      v4 = v11;
    }
    ++v6;
  }
  while ( v6 < 0x24 );
  return 0;
}
