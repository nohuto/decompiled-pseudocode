/*
 * XREFs of HvHiveInitialize @ 0x14068B054
 * Callers:
 *     CmpHiveInitialize @ 0x14068AF4C (CmpHiveInitialize.c)
 *     CmpGetSystemControlValues @ 0x140B14B1C (CmpGetSystemControlValues.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

_QWORD *__fastcall HvHiveInitialize(_DWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  memset(a1, 0, 0x608uLL);
  result = a1 + 222;
  *a1 = -1092567328;
  v3 = 2LL;
  do
  {
    *((_DWORD *)result - 146) = -1;
    result[1] = result;
    *result = result;
    result += 79;
    --v3;
  }
  while ( v3 );
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_OWORD *)a1 + 14) = 0LL;
  *((_OWORD *)a1 + 15) = 0LL;
  *((_OWORD *)a1 + 16) = 0LL;
  *((_QWORD *)a1 + 33) = 0LL;
  *((_QWORD *)a1 + 34) = 0LL;
  return result;
}
