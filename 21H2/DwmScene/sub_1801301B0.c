/*
 * XREFs of sub_1801301B0 @ 0x1801301B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A8FAC @ 0x1800A8FAC (sub_1800A8FAC.c)
 */

__int64 __fastcall sub_1801301B0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 76) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 76) &= ~1u;
    return sub_1800A8FAC();
  }
  return result;
}
