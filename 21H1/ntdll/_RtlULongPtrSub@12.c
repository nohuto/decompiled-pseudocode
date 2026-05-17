/*
 * XREFs of _RtlULongPtrSub@12 @ 0x4B2EB904
 * Callers:
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlULongPtrSub(unsigned int a1, unsigned int a2, int *a3)
{
  int v3; // esi
  unsigned int result; // eax

  if ( a1 < a2 )
    v3 = -1;
  else
    v3 = a1 - a2;
  result = a1 < a2 ? 0xC0000095 : 0;
  *a3 = v3;
  return result;
}
