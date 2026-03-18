/*
 * XREFs of PfpRpStart @ 0x1407ADD30
 * Callers:
 *     PfpRpInitialize @ 0x140A66594 (PfpRpInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpStart(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedExchange64((volatile __int64 *)(a1 + 136), 0LL);
  *(_DWORD *)(a1 + 152) |= 1u;
  return result;
}
