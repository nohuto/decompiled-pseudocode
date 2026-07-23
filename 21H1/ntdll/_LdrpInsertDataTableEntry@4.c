/*
 * XREFs of _LdrpInsertDataTableEntry@4 @ 0x4B2D15EF
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpHashUnicodeString@4 @ 0x4B2CE090 (_LdrpHashUnicodeString@4.c)
 */

void __thiscall LdrpInsertDataTableEntry(int this)
{
  int v2; // eax
  int **v3; // ecx
  int *v4; // eax
  int **v5; // edx
  int *v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  PLDR_DATA_TABLE_ENTRY v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx

  if ( (*(_BYTE *)(this + 52) & 0x40) == 0 )
  {
    v2 = *(_DWORD *)(this + 144);
    if ( !v2 )
    {
      v2 = LdrpHashUnicodeString((_DWORD *)(this + 44));
      *(_DWORD *)(this + 144) = v2;
    }
    v3 = (int **)(this + 60);
    v4 = &LdrpHashTable[2 * (v2 & 0x1F)];
    v5 = (int **)v4[1];
    if ( *v5 == v4 )
    {
      *v3 = v4;
      *(_DWORD *)(this + 64) = v5;
      *v5 = (int *)v3;
      v4[1] = (int)v3;
      if ( this == LdrpImageEntry )
      {
        v9 = dword_4B3A5D8C;
        if ( (PLDR_DATA_TABLE_ENTRY *)dword_4B3A5D8C->InLoadOrderLinks.Blink == &dword_4B3A5D8C )
        {
          *(_DWORD *)this = dword_4B3A5D8C;
          *(_DWORD *)(this + 4) = &dword_4B3A5D8C;
          v10 = (_DWORD *)(this + 8);
          v9->InLoadOrderLinks.Blink = (_LIST_ENTRY *)this;
          v11 = dword_4B3A5D94;
          dword_4B3A5D8C = (PLDR_DATA_TABLE_ENTRY)this;
          if ( *(int **)(dword_4B3A5D94 + 4) == &dword_4B3A5D94 )
          {
            *v10 = dword_4B3A5D94;
            *(_DWORD *)(this + 12) = &dword_4B3A5D94;
            *(_DWORD *)(v11 + 4) = v10;
            dword_4B3A5D94 = this + 8;
            goto LABEL_9;
          }
        }
      }
      else
      {
        v6 = (int *)dword_4B3A5D90;
        if ( *(PLDR_DATA_TABLE_ENTRY **)dword_4B3A5D90 == &dword_4B3A5D8C )
        {
          *(_DWORD *)this = &dword_4B3A5D8C;
          v7 = (_DWORD *)(this + 8);
          *(_DWORD *)(this + 4) = v6;
          *v6 = this;
          v8 = (_DWORD *)dword_4B3A5D98;
          dword_4B3A5D90 = this;
          if ( *(int **)dword_4B3A5D98 == &dword_4B3A5D94 )
          {
            *v7 = &dword_4B3A5D94;
            *(_DWORD *)(this + 12) = v8;
            *v8 = v7;
            dword_4B3A5D98 = this + 8;
LABEL_9:
            *(_DWORD *)(this + 52) |= 0x40u;
            return;
          }
        }
      }
    }
    __fastfail(3u);
  }
}
