/*
 * XREFs of CmpKeyEnumStackEntryInitialize @ 0x14069F244
 * Callers:
 *     CmpKeyEnumStackReset @ 0x14065BC50 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackStart @ 0x14065C8A4 (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackInitialize @ 0x14069F1F4 (CmpKeyEnumStackInitialize.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryInitialize(_DWORD *a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  char *v4; // rbx
  __int64 result; // rax

  memset(a1, 0, 0x80uLL);
  HvpGetCellContextReinitialize(a1 + 4);
  v2 = a1 + 18;
  v3 = 2LL;
  v4 = (char *)(a1 + 24);
  do
  {
    HvpGetCellContextReinitialize(v4 - 40);
    result = HvpGetCellContextReinitialize(v4);
    *v2 = -1;
    v4 += 8;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
