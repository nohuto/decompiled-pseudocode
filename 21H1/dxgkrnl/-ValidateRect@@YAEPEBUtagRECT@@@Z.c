/*
 * XREFs of ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C0237664
 * Callers:
 *     ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C0237424 (-ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C02376AC (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C0237764 (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ValidateRect(const struct tagRECT *a1, __int64 a2)
{
  __int64 v3; // rax

  if ( a1->left <= a1->right && a1->top <= a1->bottom )
    return 1;
  v3 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v3 + 24) = 1813LL;
  WdLogEvent5_WdError(v3);
  return 0;
}
