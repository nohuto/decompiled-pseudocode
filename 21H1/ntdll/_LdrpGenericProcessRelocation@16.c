/*
 * XREFs of _LdrpGenericProcessRelocation@16 @ 0x4B3429DD
 * Callers:
 *     _LdrProcessRelocationBlockLongLong@24 @ 0x4B3427A0 (_LdrProcessRelocationBlockLongLong@24.c)
 * Callees:
 *     <none>
 */

int __fastcall LdrpGenericProcessRelocation(unsigned __int16 *a1, int a2, int a3, int a4)
{
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  bool v11; // cf

  v4 = *a1 >> 12;
  v5 = (_DWORD *)(a2 + (*a1 & 0xFFF));
  v6 = 1;
  if ( v4 )
  {
    v7 = v4 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 6 )
            {
              v11 = __CFADD__(a3, *v5);
              *v5 += a3;
              v5[1] += a4 + v11;
            }
            else
            {
              return 0;
            }
          }
          else
          {
            v6 = 2;
            *(_WORD *)v5 = (a3 + (*(unsigned __int16 *)v5 << 16) + (unsigned int)a1[1] + 0x8000) >> 16;
          }
        }
        else
        {
          *v5 += a3;
        }
      }
      else
      {
        *(_WORD *)v5 += a3;
      }
    }
    else
    {
      *(_WORD *)v5 = (unsigned int)(a3 + (*(unsigned __int16 *)v5 << 16)) >> 16;
    }
  }
  return v6;
}
