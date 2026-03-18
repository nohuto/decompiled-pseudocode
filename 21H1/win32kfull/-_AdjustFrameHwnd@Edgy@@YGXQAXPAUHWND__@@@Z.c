/*
 * XREFs of ?_AdjustFrameHwnd@Edgy@@YGXQAXPAUHWND__@@@Z @ 0x16E290
 * Callers:
 *     ?_OnEnterActive@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16EC4E (-_OnEnterActive@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z.c)
 * Callees:
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 */

void __fastcall Edgy::_AdjustFrameHwnd(int a1, int a2)
{
  _DWORD *v3; // eax
  _DWORD v4[26]; // [esp-68h] [ebp-148h] BYREF
  _DWORD v5[26]; // [esp+10h] [ebp-D0h] BYREF
  _BYTE v6[104]; // [esp+78h] [ebp-68h] BYREF

  if ( a1 )
  {
    v3 = (_DWORD *)ValidateHwnd(a2);
    qmemcpy(v6, INPUTDEST_FROM_PWND(v3, v5), sizeof(v6));
    qmemcpy(v4, v6, sizeof(v4));
    CTouchProcessor::AdjustEdgyFrameInputDest(
      _gpTouchProcessor,
      a1,
      v4[0],
      v4[1],
      v4[2],
      v4[3],
      v4[4],
      v4[5],
      v4[6],
      v4[7],
      v4[8],
      v4[9],
      v4[10],
      v4[11],
      v4[12],
      v4[13],
      v4[14],
      v4[15],
      v4[16],
      v4[17],
      v4[18],
      v4[19],
      v4[20],
      v4[21],
      v4[22],
      v4[23],
      v4[24],
      v4[25]);
  }
}
