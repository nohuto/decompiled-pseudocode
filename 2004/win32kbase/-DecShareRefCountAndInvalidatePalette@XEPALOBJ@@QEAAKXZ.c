/*
 * XREFs of ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00CF4C8
 * Callers:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00922F0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00C1DF0 (--1PALMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C00896E0 (DEC_SHARE_REF_CNT.c)
 */

__int64 __fastcall XEPALOBJ::DecShareRefCountAndInvalidatePalette(unsigned int **this)
{
  __int64 result; // rax

  result = DEC_SHARE_REF_CNT(*this);
  *this = 0LL;
  return result;
}
