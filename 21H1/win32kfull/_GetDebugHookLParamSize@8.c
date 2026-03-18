/*
 * XREFs of _GetDebugHookLParamSize@8 @ 0x18A274
 * Callers:
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YGJKIPAUtagDEBUGHOOKINFO@@@Z @ 0x15F2AE (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YGJKIPAUtagDEBUGHOOKINFO@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall GetDebugHookLParamSize(unsigned int a1, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  result = 0;
  if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7u:
        return 24;
      case 0xAu:
        if ( *(_DWORD *)(a2 + 16) != 5 )
          return result;
        return 16;
      case 0xCu:
        return 20;
    }
    if ( a1 != -1 )
      return result;
    return 28;
  }
  if ( a1 == 6 )
    return 28;
  if ( a1 <= 1 )
    return 20;
  if ( a1 == 3 )
    return 28;
  if ( a1 == 4 )
    return 16;
  if ( a1 != 5 )
    return result;
  v3 = *(_DWORD *)(a2 + 16);
  if ( !v3 )
    return 16;
  v4 = v3 - 3;
  if ( !v4 )
    return 8;
  v5 = v4 - 2;
  if ( !v5 )
    return 8;
  if ( v5 == 1 )
    return 24;
  return result;
}
