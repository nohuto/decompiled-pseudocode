/*
 * XREFs of sub_1800B1CF0 @ 0x1800B1CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall sub_1800B1CF0(__int64 a1, __int64 a2)
{
  const wchar_t *result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0u;
  result = L"None";
  *(_OWORD *)(a2 + 32) = 0LL;
  *(_OWORD *)(a2 + 48) = 0LL;
  *(_OWORD *)(a2 + 64) = 0LL;
  *(_OWORD *)(a2 + 80) = 0uLL;
  *(_OWORD *)(a2 + 96) = 0u;
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_QWORD *)(a2 + 80) = L"None";
  return result;
}
