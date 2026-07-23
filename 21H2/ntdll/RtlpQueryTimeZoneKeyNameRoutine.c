/*
 * XREFs of RtlpQueryTimeZoneKeyNameRoutine @ 0x1800EE8D0
 * Callers:
 *     <none>
 * Callees:
 *     wcsnlen @ 0x180092620 (wcsnlen.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall RtlpQueryTimeZoneKeyNameRoutine(
        __int64 a1,
        __int64 a2,
        const wchar_t *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  size_t v7; // rdi
  __int64 result; // rax

  v7 = wcsnlen(a3, (unsigned __int64)a4 >> 1);
  if ( 2 * v7 + 2 > *(unsigned __int16 *)(a6 + 2) )
    v7 = ((unsigned __int64)*(unsigned __int16 *)(a6 + 2) >> 1) - 1;
  memmove(*(void **)(a6 + 8), a3, 2 * v7);
  *(_WORD *)(2 * v7 + *(_QWORD *)(a6 + 8)) = 0;
  result = 0LL;
  *(_WORD *)a6 = 2 * v7;
  return result;
}
