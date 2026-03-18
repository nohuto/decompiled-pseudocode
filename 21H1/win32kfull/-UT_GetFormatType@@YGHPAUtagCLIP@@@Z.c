/*
 * XREFs of ?UT_GetFormatType@@YGHPAUtagCLIP@@@Z @ 0x182055
 * Callers:
 *     ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED (-UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall UT_GetFormatType(int *this)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  bool v5; // zf
  int v7; // eax
  int v8; // eax

  v1 = *this;
  if ( (unsigned int)*this > 0x80 )
  {
    v7 = v1 - 130;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
        return 3;
      v5 = v8 == 11;
      goto LABEL_11;
    }
  }
  else
  {
    if ( v1 == 128 )
      return 0;
    v2 = v1 - 2;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( !v3 )
        return 3;
      v4 = v3 - 6;
      if ( v4 )
      {
        v5 = v4 == 5;
LABEL_11:
        if ( !v5 )
          return 2;
        return 3;
      }
    }
  }
  return 1;
}
