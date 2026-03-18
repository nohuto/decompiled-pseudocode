/*
 * XREFs of AslStringSearchA @ 0x140A14AA8
 * Callers:
 *     SdbpCheckMatchingTextEntry @ 0x140A11614 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringSearchA(__int64 a1, unsigned int a2, _BYTE *a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned int i; // r11d
  unsigned int v8; // r8d
  unsigned int v9; // edx
  _BYTE *v10; // rdi

  v4 = 0LL;
  if ( a2 && a4 <= a2 )
  {
    for ( i = 0; i + a4 <= a2; ++i )
    {
      v8 = 0;
      v9 = i;
      if ( a4 )
      {
        v10 = a3;
        while ( v9 < a2 )
        {
          if ( !*(_BYTE *)(v9 + a1) && ++v9 >= a2 )
            return v4;
          if ( *(_BYTE *)(v9 + a1) != *v10 )
            break;
          ++v8;
          ++v10;
          ++v9;
          if ( v8 >= a4 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( v8 == a4 )
          return a1 + i;
      }
    }
  }
  return v4;
}
