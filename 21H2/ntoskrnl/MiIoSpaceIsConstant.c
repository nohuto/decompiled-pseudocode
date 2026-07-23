/*
 * XREFs of MiIoSpaceIsConstant @ 0x140217AE0
 * Callers:
 *     MiIoSpaceRunIsConstant @ 0x140216A68 (MiIoSpaceRunIsConstant.c)
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B89C4 (MiMapContiguousMemoryLarge.c)
 *     MmProtectMdlSystemAddress @ 0x1405323F0 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiIoSpaceIsConstant(unsigned __int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  result = (_QWORD *)qword_140C4ECE0;
  v3 = a1 + a2 - 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !result )
        return 0LL;
      v5 = result[3];
      if ( v3 >= v5 )
        break;
      result = (_QWORD *)*result;
    }
    v6 = result[4];
    if ( a1 <= v6 )
      break;
    result = (_QWORD *)result[1];
  }
  if ( a1 >= v5 && v3 > v6 )
    return 0LL;
  return result;
}
