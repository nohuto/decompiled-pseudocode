/*
 * XREFs of _RtlEraseUnicodeString@4 @ 0x4B3462B0
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlEraseUnicodeString(int a1)
{
  int result; // eax

  if ( *(_DWORD *)(a1 + 4) )
  {
    result = *(unsigned __int16 *)(a1 + 2);
    if ( (_WORD)result )
    {
      memset(*(void **)(a1 + 4), 0, *(unsigned __int16 *)(a1 + 2));
      result = 0;
      *(_WORD *)a1 = 0;
    }
  }
  return result;
}
