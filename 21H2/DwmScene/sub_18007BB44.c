/*
 * XREFs of sub_18007BB44 @ 0x18007BB44
 * Callers:
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007BB44(__int64 a1, float a2)
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
