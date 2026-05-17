/*
 * XREFs of _EtwpFinalizeRelogFileHeaderStats@20 @ 0x4B382940
 * Callers:
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpFinalizeRelogFileHeaderStats(_DWORD *a1, int a2, unsigned int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // esi
  _DWORD *v7; // edi
  bool v8; // zf
  int v9; // ecx
  int v12; // [esp+10h] [ebp-Ch]
  int v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]

  v5 = 0;
  v15 = a2;
  v6 = 72;
  v7 = a1;
  v14 = 0;
  if ( *(_DWORD *)(a2 + 48) <= 0x48u )
    return 0;
  while ( v6 <= a3 && v6 + 304 <= a3 && v5 < v7[87] && *(_WORD *)(v6 + a2 + 4) >= 0x130u )
  {
    a2 = v15;
    v12 = a4 + *(_DWORD *)(12 * v5 + v7[89]);
    *(_DWORD *)(v6 + v15 + 68) = v12;
    *(_DWORD *)(v6 + v15 + 80) += *(_DWORD *)(12 * v5 + v7[89] + 4);
    *(_DWORD *)(v6 + v15 + 300) += a5 + *(_DWORD *)(12 * v5 + v7[89] + 8);
    if ( !v5 )
    {
      v8 = (*(_DWORD *)(v6 + v15 + 64) & 0x100000) == 0;
      *(_DWORD *)(v6 + v15 + 68) = v12 + 1;
      if ( v8 )
      {
        *(_DWORD *)(v6 + v15 + 48) = v7[66];
        *(_DWORD *)(v6 + v15 + 52) = v7[67];
      }
      else
      {
        while ( 1 )
        {
          v9 = MEMORY[0x7FFE0018];
          v13 = MEMORY[0x7FFE0014];
          if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
            break;
          _mm_pause();
        }
        a2 = v15;
        v7 = a1;
        v5 = v14;
        *(_DWORD *)(v6 + v15 + 64) &= ~0x100000u;
        *(_DWORD *)(v6 + v15 + 48) = v13;
        *(_DWORD *)(v6 + v15 + 52) = v9;
      }
    }
    v14 = ++v5;
    v6 += (*(unsigned __int16 *)(v6 + a2 + 4) + 7) & 0xFFFFFFF8;
    if ( v6 >= *(_DWORD *)(a2 + 48) )
      return 0;
  }
  return -1073741811;
}
