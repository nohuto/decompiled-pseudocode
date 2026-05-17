/*
 * XREFs of RtlEraseUnicodeString @ 0x180085B80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800A3EC0 (memset.c)
 */

void *__fastcall RtlEraseUnicodeString(__int64 a1)
{
  void *v2; // rcx
  void *result; // rax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    if ( *(_WORD *)(a1 + 2) )
    {
      result = memset(v2, 0, *(unsigned __int16 *)(a1 + 2));
      *(_WORD *)a1 = 0;
    }
  }
  return result;
}
