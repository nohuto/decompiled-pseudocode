/*
 * XREFs of _LdrpInitializeNlsInfo@4 @ 0x4B332D65
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlInitNlsTables@16 @ 0x4B344110 (_RtlInitNlsTables@16.c)
 *     _RtlResetRtlTranslations@4 @ 0x4B344160 (_RtlResetRtlTranslations@4.c)
 */

void __thiscall LdrpInitializeNlsInfo(PUSHORT *this)
{
  _NLSTABLEINFO TableInfo; // [esp+0h] [ebp-60h] BYREF

  RtlInitNlsTables(this[22], this[23], this[24], &TableInfo);
  RtlResetRtlTranslations(&TableInfo);
}
