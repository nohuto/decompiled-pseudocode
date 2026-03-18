/*
 * XREFs of _xxxDoDeferredPointerActivate@4 @ 0x15BEFB
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 */

_DWORD *__thiscall xxxDoDeferredPointerActivate(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v3; // eax
  _DWORD v4[26]; // [esp-6Ch] [ebp-14Ch] BYREF
  int v5; // [esp-4h] [ebp-E4h]
  _DWORD v6[26]; // [esp+10h] [ebp-D0h] BYREF
  _BYTE v7[104]; // [esp+78h] [ebp-68h] BYREF

  result = (_DWORD *)ValidateHwnd(this[2]);
  if ( result )
  {
    v3 = INPUTDEST_FROM_PWND(result, v6);
    v5 = this[5];
    qmemcpy(v7, v3, sizeof(v7));
    qmemcpy(v4, v7, sizeof(v4));
    return (_DWORD *)CTouchProcessor::DoDeferredPointerActivate(
                       _gpTouchProcessor,
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
                       v4[25],
                       v5);
  }
  return result;
}
