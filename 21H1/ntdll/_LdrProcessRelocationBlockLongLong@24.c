/*
 * XREFs of _LdrProcessRelocationBlockLongLong@24 @ 0x4B3427A0
 * Callers:
 *     _LdrProcessRelocationBlock@16 @ 0x4B342750 (_LdrProcessRelocationBlock@16.c)
 *     _LdrProcessRelocationBlockEx@20 @ 0x4B342780 (_LdrProcessRelocationBlockEx@20.c)
 *     _LdrRelocateImageWithBias@28 @ 0x4B342836 (_LdrRelocateImageWithBias@28.c)
 * Callees:
 *     _LdrpArmProcessRelocation@16 @ 0x4B342928 (_LdrpArmProcessRelocation@16.c)
 *     _LdrpGenericProcessRelocation@16 @ 0x4B3429DD (_LdrpGenericProcessRelocation@16.c)
 *     _LdrpThumbProcessRelocation@16 @ 0x4B342A6A (_LdrpThumbProcessRelocation@16.c)
 */

unsigned __int16 *__fastcall LdrProcessRelocationBlockLongLong(
        __int16 a1,
        int a2,
        int a3,
        unsigned __int16 *a4,
        int a5,
        int a6)
{
  unsigned __int16 *v6; // esi
  __int16 v7; // dx
  unsigned int v8; // ebx
  int v9; // eax

  v6 = a4;
  v7 = a1;
  v8 = (unsigned int)&a4[a3];
  if ( (unsigned int)a4 < v8 )
  {
    while ( 1 )
    {
      if ( ((1 << (*v6 >> 12)) & 0x3A0) != 0 )
      {
        if ( v7 == 448 )
        {
          v9 = LdrpArmProcessRelocation(a5, a6);
        }
        else
        {
          if ( v7 != 450 && v7 != 452 )
            return 0;
          v9 = LdrpThumbProcessRelocation(a5, a6);
        }
      }
      else
      {
        v9 = LdrpGenericProcessRelocation(a5, a6);
      }
      if ( !v9 )
        return 0;
      v6 += v9;
      if ( (unsigned int)v6 >= v8 )
        return v6;
      v7 = a1;
    }
  }
  return v6;
}
