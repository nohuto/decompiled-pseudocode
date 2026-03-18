/*
 * XREFs of ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YGHPBGHH@Z @ 0x1B7C0C
 * Callers:
 *     ?NeedsEndEllipsis@@YGHPAUHDC__@@PBGPAHPAUDRAWTEXTDATA@@I3H@Z @ 0x1B8097 (-NeedsEndEllipsis@@YGHPAUHDC__@@PBGPAHPAUDRAWTEXTDATA@@I3H@Z.c)
 * Callees:
 *     ?DT_GetLongChar@@YGKPBGHH@Z @ 0x1B7E8E (-DT_GetLongChar@@YGKPBGHH@Z.c)
 */

int __userpurge DT_AdjustBreakForSurrogatesAndVariationSelectors@<eax>(
        int a1@<edx>,
        int a2@<ebx>,
        unsigned __int16 *a3,
        int a4,
        int a5)
{
  int v5; // esi
  unsigned int LongChar; // eax
  unsigned int v8; // eax
  int v9; // [esp+0h] [ebp-8h]
  int v10; // [esp+0h] [ebp-8h]
  int v11; // [esp+4h] [ebp-4h]

  v5 = a1;
  if ( !a1 )
    return 0;
  LongChar = DT_GetLongChar(a3, v9, v11);
  if ( LongChar >= 0x10000 )
    ++v5;
  if ( (LongChar < 0xFE00 || LongChar > 0xFE0F)
    && (LongChar < (unsigned int)&loc_E0100 || LongChar > 0xE01EF)
    && v5 < (int)a3 )
  {
    if ( (v8 = DT_GetLongChar(a3, a2, v10), v8 >= 0xFE00) && v8 <= 0xFE0F || v8 - 917760 <= 0xEF )
      v5 += 2 - (v8 < 0x10000);
  }
  return v5;
}
