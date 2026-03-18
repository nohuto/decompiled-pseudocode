/*
 * XREFs of CmpKeyEnumStackEntryInitialize @ 0x1406C8DFC
 * Callers:
 *     CmpKeyEnumStackInitialize @ 0x1406C8DAC (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackReset @ 0x140715C3C (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackStart @ 0x14071631C (CmpKeyEnumStackStart.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

_DWORD *__fastcall CmpKeyEnumStackEntryInitialize(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *result; // rax
  __int64 v4; // rbx

  memset((void *)a1, 0, 0x80uLL);
  *(_DWORD *)(a1 + 16) = -1;
  v2 = 2LL;
  *(_WORD *)(a1 + 20) = 0;
  result = (_DWORD *)(a1 + 72);
  v4 = a1 + 56;
  do
  {
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)v4 = -1;
    *(_WORD *)(v4 + 4) = 0;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_DWORD *)(v4 + 40) = -1;
    v4 += 8LL;
    *result++ = -1;
    --v2;
  }
  while ( v2 );
  return result;
}
