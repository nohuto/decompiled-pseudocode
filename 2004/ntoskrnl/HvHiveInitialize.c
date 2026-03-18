/*
 * XREFs of HvHiveInitialize @ 0x14063B624
 * Callers:
 *     CmpHiveInitialize @ 0x14063B550 (CmpHiveInitialize.c)
 *     CmpGetSystemControlValues @ 0x140A49A40 (CmpGetSystemControlValues.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

_QWORD *__fastcall HvHiveInitialize(_DWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx

  memset(a1, 0, 0x600uLL);
  result = a1 + 220;
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
  *(_OWORD *)(a1 + 54) = 0LL;
  *(_OWORD *)(a1 + 58) = 0LL;
  *(_OWORD *)(a1 + 62) = 0LL;
  *((_QWORD *)a1 + 32) = 0LL;
  *((_QWORD *)a1 + 33) = 0LL;
  return result;
}
