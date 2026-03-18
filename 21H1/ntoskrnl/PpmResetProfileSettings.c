/*
 * XREFs of PpmResetProfileSettings @ 0x1403C44E8
 * Callers:
 *     PpmRegisterProfiles @ 0x1407B03A8 (PpmRegisterProfiles.c)
 *     PpmDisableProfile @ 0x1408F1588 (PpmDisableProfile.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 */

_QWORD *__fastcall PpmResetProfileSettings(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rdx
  _QWORD *result; // rax
  __int64 v5; // rcx

  v1 = (_QWORD *)(a1 + 40);
  memmove((void *)(a1 + 40), &unk_140C1EE68, 0xAB0uLL);
  memmove((void *)(a1 + 2776), &unk_140C1F918, 0xAB0uLL);
  v3 = 2LL;
  do
  {
    result = v1;
    v5 = 2LL;
    do
    {
      *result = 0LL;
      result += 342;
      --v5;
    }
    while ( v5 );
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}
