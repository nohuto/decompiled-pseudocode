/*
 * XREFs of _FindProp @ 0x1C006B098
 * Callers:
 *     RealInternalSetProp @ 0x1C006AF90 (RealInternalSetProp.c)
 *     RealInternalRemoveProp @ 0x1C006B000 (RealInternalRemoveProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindProp(__int64 a1, __int16 a2, int a3)
{
  int v3; // r9d
  __int64 result; // rax
  __int16 v5; // cx

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = *(_DWORD *)(a1 + 4);
      for ( result = a1 + 8; v3; --v3 )
      {
        if ( *(_WORD *)(result + 8) == a2 )
        {
          v5 = *(_WORD *)(result + 10) & 1;
          if ( a3 )
          {
            if ( v5 )
              return result;
          }
          else if ( !v5 )
          {
            return result;
          }
        }
        result += 16LL;
      }
    }
  }
  return 0LL;
}
