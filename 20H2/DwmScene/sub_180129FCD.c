/*
 * XREFs of sub_180129FCD @ 0x180129FCD
 * Callers:
 *     <none>
 * Callees:
 *     sub_180085C5C @ 0x180085C5C (sub_180085C5C.c)
 */

__int64 __fastcall sub_180129FCD(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_180085C5C(*(__int64 **)(a2 + 80));
  }
  return result;
}
