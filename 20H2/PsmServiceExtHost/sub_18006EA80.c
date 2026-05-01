/*
 * XREFs of sub_18006EA80 @ 0x18006EA80
 * Callers:
 *     sub_1800692E4 @ 0x1800692E4 (sub_1800692E4.c)
 *     sub_1800695BC @ 0x1800695BC (sub_1800695BC.c)
 * Callees:
 *     sub_18006CB94 @ 0x18006CB94 (sub_18006CB94.c)
 */

bool __fastcall sub_18006EA80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // r8d
  unsigned __int8 v9; // al
  bool result; // al

  result = 0;
  if ( *(_DWORD *)a2 == 6 )
  {
    v6 = *(_DWORD *)(a2 + 32) & 5;
    if ( v6 != 4
      && (v6 != 1
       || !*(_DWORD *)(a2 + 4)
       && !*(_QWORD *)(a2 + 8)
       && *(_DWORD *)(a2 + 16) == 10
       && *(_DWORD *)(a2 + 20) == 50
       && *(_DWORD *)(a2 + 24) == 30
       && (*(_BYTE *)(a2 + 32) & 8) == 0) )
    {
      v7 = RtlNumberOfSetBitsUlongPtr(*(_QWORD *)(a2 + 8), a2, a3, a4);
      v8 = *(_DWORD *)(a2 + 4);
      if ( v8 >= v7
        && v8 <= 0x40
        && sub_18006CB94((_DWORD *)(a1 + 680), (*(_DWORD *)(a2 + 28) & 0x40) != 0, v8, *(_QWORD *)(a2 + 8)) )
      {
        v9 = *(_BYTE *)(a2 + 36);
        if ( (!v9 || v9 > 1u && (v9 <= 3u || v9 == 6))
          && (unsigned int)(*(_DWORD *)(a2 + 16) - 2) <= 8
          && (unsigned int)(*(_DWORD *)(a2 + 20) + *(_DWORD *)(a2 + 24)) <= 0x64
          && (*(_BYTE *)(a2 + 28) & 0x18) != 0x18 )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
