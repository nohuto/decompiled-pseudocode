/*
 * XREFs of _RtlpHpLfhOwnerInitialize@16 @ 0x4B376895
 * Callers:
 *     _RtlpHpLfhBucketActivate@8 @ 0x4B375E85 (_RtlpHpLfhBucketActivate@8.c)
 *     _RtlpHpLfhBucketAllocateSlot@12 @ 0x4B376049 (_RtlpHpLfhBucketAllocateSlot@12.c)
 *     _RtlpHpLfhBucketInitialize@12 @ 0x4B376136 (_RtlpHpLfhBucketInitialize@12.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall RtlpHpLfhOwnerInitialize(_BYTE *a1, char a2, int a3, int a4)
{
  _BYTE *result; // eax

  memset(a1, 0, 0x1Cu);
  if ( a3 == -1 )
    *a1 = 1;
  else
    a1[2] = a3;
  *((_DWORD *)a1 + 2) = 0;
  a1[1] = a2;
  *((_DWORD *)a1 + 4) = a1 + 12;
  *((_DWORD *)a1 + 3) = a1 + 12;
  result = a1 + 20;
  *((_DWORD *)a1 + 6) = a1 + 20;
  *((_DWORD *)a1 + 5) = a1 + 20;
  return result;
}
