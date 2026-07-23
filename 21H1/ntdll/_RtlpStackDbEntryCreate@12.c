/*
 * XREFs of _RtlpStackDbEntryCreate@12 @ 0x4B38A959
 * Callers:
 *     _RtlStackDbStackAdd@12 @ 0x4B38A376 (_RtlStackDbStackAdd@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpStackDbEntryCleanup@8 @ 0x4B38A8FB (_RtlpStackDbEntryCleanup@8.c)
 *     _RtlpStackDbSegmentFindOrCreate@8 @ 0x4B38AB3B (_RtlpStackDbSegmentFindOrCreate@8.c)
 */

int __fastcall RtlpStackDbEntryCreate(int a1, unsigned int *a2, int a3)
{
  unsigned int v4; // edi
  int v5; // esi
  int v6; // edi
  unsigned int v7; // ebx
  int v8; // ecx
  int v9; // eax
  int *v10; // edx
  size_t v12; // [esp-4h] [ebp-30h]
  _DWORD v13[2]; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int *v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  int v16; // [esp+20h] [ebp-Ch]
  int *v17; // [esp+24h] [ebp-8h]
  int v18; // [esp+28h] [ebp-4h]

  v14 = a2;
  v15 = a1;
  v4 = (*a2 + 7) >> 3;
  v5 = (*(int (__thiscall **)(_DWORD, unsigned int, _DWORD))(a1 + 32))(
         *(_DWORD *)(a1 + 32),
         4 * v4 + 12,
         *(_DWORD *)(a1 + 40));
  if ( !v5 )
    return 0;
  LODWORD(v12) = 4 * v4 + 12;
  memset((void *)v5, 0, v12);
  v18 = 0;
  *(_DWORD *)(v5 + 4) = a3;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v5 + 8) & 0xFF000000 | 1;
  *(_BYTE *)(v5 + 11) = *(_BYTE *)a2;
  v7 = *a2;
  if ( v4 )
  {
    v8 = 0;
    v16 = 0;
    v17 = (int *)(v5 + 12);
    while ( 1 )
    {
      v13[1] = v8 + v14[1];
      if ( v7 <= 8 )
      {
        v13[0] = v7;
      }
      else
      {
        v13[0] = 8;
        v7 -= 8;
      }
      v9 = RtlpStackDbSegmentFindOrCreate(v15, v13);
      if ( !v9 )
        break;
      v10 = v17;
      v8 = v16 + 32;
      v16 += 32;
      *v17 = v9;
      v17 = v10 + 1;
      if ( ++v18 >= v4 )
        goto LABEL_10;
    }
    v6 = 0;
  }
  else
  {
LABEL_10:
    v6 = v5;
    v5 = 0;
  }
  if ( v5 )
    RtlpStackDbEntryCleanup(v15, v5);
  return v6;
}
