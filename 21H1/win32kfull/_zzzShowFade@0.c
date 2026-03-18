/*
 * XREFs of _zzzShowFade@0 @ 0x153F22
 * Callers:
 *     _zzzStartFade@0 @ 0x153F74 (_zzzStartFade@0.c)
 *     ?zzzMNFadeSelection@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x197315 (-zzzMNFadeSelection@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ?zzzUpdateFade@@YGXPAUtagPOINT@@PAUtagSIZE@@PAUHDC__@@0PAU_BLENDFUNCTION@@@Z @ 0x1535CE (-zzzUpdateFade@@YGXPAUtagPOINT@@PAUtagSIZE@@PAUHDC__@@0PAU_BLENDFUNCTION@@@Z.c)
 */

HDEV __stdcall zzzShowFade()
{
  HDEV result; // eax
  struct tagPOINT *v1; // [esp+0h] [ebp-10h]
  struct tagSIZE v2; // [esp+4h] [ebp-Ch] BYREF
  struct HDC__ v3; // [esp+Ch] [ebp-4h] BYREF

  result = _gfade[9];
  if ( ((unsigned __int8)result & 4) == 0 )
  {
    v2.cy = 0;
    LOWORD(v3.unused) = 0;
    HIWORD(v3.unused) = (unsigned __int8)(((unsigned __int8)result & 1) != 0 ? 40 : -41);
    zzzUpdateFade((HDC)&_gfade[5], &_gfade[3], (struct tagPOINT *)_gfade[1], &v2, (struct tagPOINT *)&v3, v1, 0);
    result = _gfade[0];
    _gfade[9] = (HDEV)((unsigned int)_gfade[9] | 4);
  }
  return result;
}
