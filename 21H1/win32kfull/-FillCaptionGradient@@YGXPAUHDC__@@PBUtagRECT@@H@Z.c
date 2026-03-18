/*
 * XREFs of ?FillCaptionGradient@@YGXPAUHDC__@@PBUtagRECT@@H@Z @ 0xBCE06
 * Callers:
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 * Callees:
 *     _FillRect@12 @ 0x7226C (_FillRect@12.c)
 *     ?FillGradient@@YGXPAUHDC__@@PBUtagRECT@@KK@Z @ 0xBCE50 (-FillGradient@@YGXPAUHDC__@@PBUtagRECT@@KK@Z.c)
 */

void __stdcall FillCaptionGradient(HDC a1, const struct tagRECT *a2, int a3)
{
  HDC v3; // esi
  const struct tagRECT *v4; // edx
  HDC v5; // eax
  const RECT *v6; // [esp+0h] [ebp-Ch]
  HBRUSH v7; // [esp+4h] [ebp-8h]

  if ( a1 )
  {
    v3 = *(HDC *)(_gpsi + 4176);
    v4 = *(const struct tagRECT **)(_gpsi + 4276);
  }
  else
  {
    v3 = *(HDC *)(_gpsi + 4180);
    v4 = *(const struct tagRECT **)(_gpsi + 4280);
  }
  if ( v3 == (HDC)v4 )
  {
    if ( a1 )
      v5 = *(HDC *)(_gpsi + 4300);
    else
      v5 = *(HDC *)(_gpsi + 4304);
    FillRect(v5, v6, v7);
  }
  else
  {
    FillGradient(v3, v4, (unsigned int)v6, (unsigned int)v7);
  }
}
