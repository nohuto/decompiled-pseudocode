/*
 * XREFs of sub_180038408 @ 0x180038408
 * Callers:
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180076B3C @ 0x180076B3C (sub_180076B3C.c)
 */

__int64 __fastcall sub_180038408(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  unsigned int v7; // ebx

  v7 = Pdcv2ActivationClientActivate(a1, a2, a3, a4);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
    sub_180076B3C(*a7, &unk_18009EF8A);
  return v7;
}
