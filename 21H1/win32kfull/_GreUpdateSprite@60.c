/*
 * XREFs of _GreUpdateSprite@60 @ 0x2B28E
 * Callers:
 *     _UpdateSprite@48 @ 0x2B1AA (_UpdateSprite@48.c)
 *     ?zzzUpdateFade@@YGXPAUtagPOINT@@PAUtagSIZE@@PAUHDC__@@0PAU_BLENDFUNCTION@@@Z @ 0x1535CE (-zzzUpdateFade@@YGXPAUtagPOINT@@PAUtagSIZE@@PAUHDC__@@0PAU_BLENDFUNCTION@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 * Callees:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 */

int __fastcall GreUpdateSprite(
        int a1,
        int a2,
        HDEV a3,
        HWND a4,
        void *a5,
        HDC a6,
        struct tagPOINT *a7,
        struct tagSIZE *a8,
        HDC a9,
        struct tagPOINT *a10,
        unsigned int a11,
        struct _BLENDFUNCTION *a12,
        unsigned int a13,
        struct tagRECT *a14,
        struct tagMINIWINDOWINFO *a15)
{
  int v18; // [esp+0h] [ebp-50h]
  int v19; // [esp+4h] [ebp-4Ch]
  _DWORD Parameter[15]; // [esp+10h] [ebp-40h] BYREF
  int v21; // [esp+4Ch] [ebp-4h]

  if ( !GreStackExpansionRequired(0x2000) )
    return GreUpdateSpriteInternal(a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, v18, v19);
  Parameter[2] = a3;
  Parameter[3] = a4;
  Parameter[4] = a5;
  Parameter[5] = a6;
  v21 = 0;
  Parameter[6] = a7;
  Parameter[7] = a8;
  Parameter[8] = a10;
  Parameter[9] = a12;
  Parameter[10] = a13;
  Parameter[11] = a9;
  Parameter[12] = a11;
  Parameter[13] = a14;
  Parameter[14] = a15;
  Parameter[0] = a1;
  Parameter[1] = a2;
  if ( KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, Parameter, 0x2000u, 1u, 0) >= 0 )
    return v21;
  else
    return 0;
}
