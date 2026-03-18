/*
 * XREFs of ?DecShareRefCountAndInvalidatePalette@XEPALOBJ@@QEAAKXZ @ 0x1C00CEC74
 * Callers:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C004C630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0090E30 (--1PALMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C00440A0 (DEC_SHARE_REF_CNT.c)
 */

__int64 __fastcall XEPALOBJ::DecShareRefCountAndInvalidatePalette(unsigned int **this)
{
  __int64 result; // rax

  result = DEC_SHARE_REF_CNT(*this);
  *this = 0LL;
  return result;
}
