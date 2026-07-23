/*
 * XREFs of PipCreateEntry @ 0x140A5FE6C
 * Callers:
 *     PipLookupGroupName @ 0x140A5FD70 (PipLookupGroupName.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_OWORD *__fastcall PipCreateEntry(const void **a1)
{
  _OWORD *result; // rax
  _OWORD *v3; // rbx

  result = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)a1 + 48LL, 0x6E697050u);
  v3 = result;
  if ( result )
  {
    *result = 0LL;
    result[1] = 0LL;
    result[2] = 0LL;
    *((_WORD *)result + 16) = *(_WORD *)a1;
    *((_WORD *)result + 17) = *(_WORD *)a1;
    *((_QWORD *)result + 5) = result + 3;
    memmove(result + 3, a1[1], *(unsigned __int16 *)a1);
    return v3;
  }
  return result;
}
