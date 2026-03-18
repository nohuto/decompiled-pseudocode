/*
 * XREFs of CmpSubtreeEnumeratorReset @ 0x140878DF8
 * Callers:
 *     CmRenameKey @ 0x14086ED6C (CmRenameKey.c)
 * Callees:
 *     CmpKeyEnumStackReset @ 0x140725F8C (CmpKeyEnumStackReset.c)
 *     CmpResetKeyNodeStack @ 0x140725FEC (CmpResetKeyNodeStack.c)
 */

void __fastcall CmpSubtreeEnumeratorReset(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi

  v2 = 0LL;
  v3 = 512LL;
  do
  {
    CmpKeyEnumStackReset(v2 + *(_QWORD *)(a1 + 96) + 56LL);
    v2 += 408LL;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)a1 = -2;
  CmpResetKeyNodeStack((__int16 *)(a1 + 16));
}
