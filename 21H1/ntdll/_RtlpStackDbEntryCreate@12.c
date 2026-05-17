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
  _DWORD v12[2]; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int *v13; // [esp+18h] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-10h]
  int v15; // [esp+20h] [ebp-Ch]
  int *v16; // [esp+24h] [ebp-8h]
  int v17; // [esp+28h] [ebp-4h]

  v13 = a2;
  v14 = a1;
  v4 = (*a2 + 7) >> 3;
  v5 = (*(int (__thiscall **)(_DWORD, unsigned int, _DWORD))(a1 + 32))(
         *(_DWORD *)(a1 + 32),
         4 * v4 + 12,
         *(_DWORD *)(a1 + 40));
  if ( !v5 )
    return 0;
  memset((void *)v5, 0, 4 * v4 + 12);
  v17 = 0;
  *(_DWORD *)(v5 + 4) = a3;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v5 + 8) & 0xFF000000 | 1;
  *(_BYTE *)(v5 + 11) = *(_BYTE *)a2;
  v7 = *a2;
  if ( v4 )
  {
    v8 = 0;
    v15 = 0;
    v16 = (int *)(v5 + 12);
    while ( 1 )
    {
      v12[1] = v8 + v13[1];
      if ( v7 <= 8 )
      {
        v12[0] = v7;
      }
      else
      {
        v12[0] = 8;
        v7 -= 8;
      }
      v9 = RtlpStackDbSegmentFindOrCreate(v14, v12);
      if ( !v9 )
        break;
      v10 = v16;
      v8 = v15 + 32;
      v15 += 32;
      *v16 = v9;
      v16 = v10 + 1;
      if ( ++v17 >= v4 )
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
    RtlpStackDbEntryCleanup(v14, v5);
  return v6;
}
