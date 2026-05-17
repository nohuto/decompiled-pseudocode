/*
 * XREFs of _TppUpdatePoolNodeStatus@8 @ 0x4B2ABCFD
 * Callers:
 *     _TppPrepareDirectParams@24 @ 0x4B2B64B0 (_TppPrepareDirectParams@24.c)
 * Callees:
 *     <none>
 */

signed __int32 __fastcall TppUpdatePoolNodeStatus(int a1, signed __int32 a2)
{
  volatile signed __int32 *v2; // edi
  signed __int32 result; // eax
  signed __int32 v4; // esi
  signed __int32 v5; // ecx

  v2 = (volatile signed __int32 *)(a1 + 260);
  result = *(_DWORD *)(a1 + 260);
  while ( 1 )
  {
    v4 = result;
    if ( result != -2 )
      break;
    v5 = a2;
LABEL_8:
    result = _InterlockedCompareExchange(v2, v5, result);
    if ( result == v4 )
      return result;
  }
  if ( result != a2 && result != -1 )
  {
    v5 = -1;
    goto LABEL_8;
  }
  return result;
}
