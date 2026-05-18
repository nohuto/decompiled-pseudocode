/*
 * XREFs of sub_180076274 @ 0x180076274
 * Callers:
 *     sub_180079804 @ 0x180079804 (sub_180079804.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180076274(__int64 a1, float a2)
{
  __int64 result; // rax

  *(float *)(a1 + 4LL * *(unsigned int *)(a1 + 80)) = a2;
  result = (unsigned int)(*(_DWORD *)(a1 + 84) + 1);
  *(_DWORD *)(a1 + 80) = (*(_DWORD *)(a1 + 80) + 1) % 0x14u;
  if ( (unsigned int)result > 0x14 )
    result = 20LL;
  *(_DWORD *)(a1 + 84) = result;
  return result;
}
