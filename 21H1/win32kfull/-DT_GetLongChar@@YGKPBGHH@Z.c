/*
 * XREFs of ?DT_GetLongChar@@YGKPBGHH@Z @ 0x1B7E8E
 * Callers:
 *     ?DT_AdjustBreakForSurrogatesAndVariationSelectors@@YGHPBGHH@Z @ 0x1B7C0C (-DT_AdjustBreakForSurrogatesAndVariationSelectors@@YGHPBGHH@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge DT_GetLongChar@<eax>(int a1@<edx>, int a2@<ecx>, const unsigned __int16 *a3, int a4, int a5)
{
  if ( a1 + 1 < (int)a3
    && (*(_WORD *)(a2 + 2 * a1) & 0xFC00) == 0xD800
    && (*(_WORD *)(a2 + 2 * a1 + 2) & 0xFC00) == 0xDC00 )
  {
    return (((*(_WORD *)(a2 + 2 * a1) & 0x3FF) << 10) | *(_WORD *)(a2 + 2 * a1 + 2) & 0x3FF) + 0x10000;
  }
  else
  {
    return *(unsigned __int16 *)(a2 + 2 * a1);
  }
}
