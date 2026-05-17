/*
 * XREFs of _LdrpInsertDataTableEntry@4 @ 0x4B2D15EF
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpHashUnicodeString@4 @ 0x4B2CE090 (_LdrpHashUnicodeString@4.c)
 */

void __thiscall LdrpInsertDataTableEntry(_DWORD *this)
{
  int v2; // eax
  int **v3; // ecx
  int *v4; // eax
  int **v5; // edx
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // edx

  if ( (this[13] & 0x40) == 0 )
  {
    v2 = this[36];
    if ( !v2 )
    {
      v2 = LdrpHashUnicodeString(this + 11);
      this[36] = v2;
    }
    v3 = (int **)(this + 15);
    v4 = &LdrpHashTable[2 * (v2 & 0x1F)];
    v5 = (int **)v4[1];
    if ( *v5 == v4 )
    {
      *v3 = v4;
      this[16] = v5;
      *v5 = (int *)v3;
      v4[1] = (int)v3;
      if ( this == (_DWORD *)LdrpImageEntry )
      {
        v9 = dword_4B3A5D8C;
        if ( *(int **)(dword_4B3A5D8C + 4) == &dword_4B3A5D8C )
        {
          *this = dword_4B3A5D8C;
          this[1] = &dword_4B3A5D8C;
          v10 = this + 2;
          *(_DWORD *)(v9 + 4) = this;
          v11 = dword_4B3A5D94;
          dword_4B3A5D8C = (int)this;
          if ( *(int **)(dword_4B3A5D94 + 4) == &dword_4B3A5D94 )
          {
            *v10 = dword_4B3A5D94;
            this[3] = &dword_4B3A5D94;
            *(_DWORD *)(v11 + 4) = v10;
            dword_4B3A5D94 = (int)(this + 2);
            goto LABEL_9;
          }
        }
      }
      else
      {
        v6 = (_DWORD *)dword_4B3A5D90;
        if ( *(int **)dword_4B3A5D90 == &dword_4B3A5D8C )
        {
          *this = &dword_4B3A5D8C;
          v7 = this + 2;
          this[1] = v6;
          *v6 = this;
          v8 = (_DWORD *)dword_4B3A5D98;
          dword_4B3A5D90 = (int)this;
          if ( *(int **)dword_4B3A5D98 == &dword_4B3A5D94 )
          {
            *v7 = &dword_4B3A5D94;
            this[3] = v8;
            *v8 = v7;
            dword_4B3A5D98 = (int)(this + 2);
LABEL_9:
            this[13] |= 0x40u;
            return;
          }
        }
      }
    }
    __fastfail(3u);
  }
}
