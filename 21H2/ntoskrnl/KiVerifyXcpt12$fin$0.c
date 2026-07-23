/*
 * XREFs of KiVerifyXcpt12$fin$0 @ 0x140A7B0EB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD **__fastcall KiVerifyXcpt12_fin_0(char a1, __int64 a2)
{
  _DWORD **result; // rax

  if ( a1 )
  {
    result = *(_DWORD ***)(a2 + 64);
    ++**result;
  }
  return result;
}
