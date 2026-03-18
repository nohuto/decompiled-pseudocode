/*
 * XREFs of CmpBounceContextCopyDataToCallerBuffer @ 0x1406577F4
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1406572C0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 */

void *__fastcall CmpBounceContextCopyDataToCallerBuffer(__int64 a1, size_t a2)
{
  void *result; // rax
  const void *v4; // rdx

  result = *(void **)a1;
  v4 = *(const void **)(a1 + 8);
  if ( *(const void **)a1 != v4 )
    return memmove(result, v4, a2);
  return result;
}
