/*
 * XREFs of TpCallbackSetEventOnCompletion @ 0x180085450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpCallbackSetEventOnCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !a1 )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  result = a2 - 1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_DWORD *)(a1 + 148) )
    return TppRaiseInvalidParameter(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 144) |= 4u;
  *(_DWORD *)(a1 + 148) = a2;
  return result;
}
