/*
 * XREFs of _xxxSpeedHitTest@24 @ 0xF3E36
 * Callers:
 *     _EditionMouseSpeedHitTest@48 @ 0xF14D0 (_EditionMouseSpeedHitTest@48.c)
 *     _EditionSpeedHitTest@20 @ 0xF3DF6 (_EditionSpeedHitTest@20.c)
 *     _xxxPointerSpeedHitTest@20 @ 0x17C2EC (_xxxPointerSpeedHitTest@20.c)
 * Callees:
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     ?CanHitTestInDwm@@YG_NXZ @ 0xA13B0 (-CanHitTestInDwm@@YG_NXZ.c)
 *     ?TopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z @ 0xAC018 (-TopLevelSpeedHitTest@@YGPAUtagWND@@PAUtagDESKTOP@@PAUtagPOINT@@PBU_SUBPIXELS@@@Z.c)
 *     _xxxDCompSpeedHitTest@28 @ 0xF09A4 (_xxxDCompSpeedHitTest@28.c)
 *     ?ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z @ 0x179A75 (-ClassicChildTreeSpeedHitTest@@YGPAUtagWND@@PAU1@UtagPOINT@@@Z.c)
 */

int __fastcall xxxSpeedHitTest(int a1, int a2, int a3, struct tagDESKTOP *a4, struct tagPOINT *a5, _DWORD *a6)
{
  unsigned __int8 v6; // bl
  struct tagWND *v7; // eax
  struct tagPOINT v9; // [esp-4h] [ebp-ECh]
  struct tagPOINT *v10; // [esp+0h] [ebp-E8h]
  const struct _SUBPIXELS *v11; // [esp+4h] [ebp-E4h]
  _BYTE v14[104]; // [esp+18h] [ebp-D0h] BYREF
  _DWORD v15[26]; // [esp+80h] [ebp-68h] BYREF

  v6 = 0;
  qmemcpy(v14, INPUTDEST_FROM_PWND(*(_DWORD **)(*(_DWORD *)(_grpdeskRitInput + 4) + 12), v15), sizeof(v14));
  qmemcpy(a6, v14, 0x68u);
  if ( CanHitTestInDwm() )
  {
    return (unsigned __int8)xxxDCompSpeedHitTest((_DWORD *)a2, a3, a4, a1, 0, a5, a6);
  }
  else if ( !a1 )
  {
    if ( TopLevelSpeedHitTest(a2 + 20, _grpdeskRitInput, a4, v10, v11) )
    {
      v9.x = *(_DWORD *)(a2 + 24);
      v7 = ClassicChildTreeSpeedHitTest(*(struct tagWND **)(a2 + 20), v9);
      if ( v7 )
      {
        qmemcpy(v14, INPUTDEST_FROM_PWND(v7, v15), sizeof(v14));
        qmemcpy(a6, v14, 0x68u);
        return 1;
      }
    }
  }
  return v6;
}
