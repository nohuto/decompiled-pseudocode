/*
 * XREFs of ?FillGradient@@YGXPAUHDC__@@PBUtagRECT@@KK@Z @ 0xBCE50
 * Callers:
 *     ?FillCaptionGradient@@YGXPAUHDC__@@PBUtagRECT@@H@Z @ 0xBCE06 (-FillCaptionGradient@@YGXPAUHDC__@@PBUtagRECT@@H@Z.c)
 * Callees:
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge FillGradient(HDC a1@<ecx>, HDC a2, const struct tagRECT *a3, unsigned int a4, unsigned int a5)
{
  GreGradientFill(a1, 2, (int)&unk_26AE38, 1, 0);
}
