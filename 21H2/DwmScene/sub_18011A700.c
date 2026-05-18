/*
 * XREFs of sub_18011A700 @ 0x18011A700
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002940 @ 0x180002940 (sub_180002940.c)
 */

__int64 sub_18011A700()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&dword_180221E68, 1u);
  if ( !(_DWORD)result )
    return sub_180002940((ULONGLONG *)&dword_180214BC8, 0LL, 0LL);
  return result;
}
