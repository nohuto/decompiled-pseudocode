/*
 * XREFs of __chkstk @ 0x4B2F64D0
 * Callers:
 *     __alloca_probe_16 @ 0x4B2F6500 (__alloca_probe_16.c)
 *     __alloca_probe_8 @ 0x4B2F6516 (__alloca_probe_8.c)
 *     ReadStringDelimited_1 @ 0x4B302B96 (ReadStringDelimited_1.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     <none>
 */

void *__usercall _chkstk@<eax>(unsigned int a1@<eax>, int a2@<ecx>)
{
  unsigned int v2; // ecx
  unsigned int i; // eax
  int v5; // [esp-4h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  v5 = a2;
  v2 = ~((unsigned int)((unsigned int)&retaddr - (unsigned __int64)a1) >> 32) & ((unsigned int)&retaddr - a1);
  for ( i = (unsigned int)&v5 & 0xFFFFF000; v2 < i; i -= 4096 )
    ;
  return retaddr;
}
