/*
 * XREFs of ?MakeThreadPointerHookData@@YGHPAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x15B0D0
 * Callers:
 *     _xxxPointerCallHook@20 @ 0x15A676 (_xxxPointerCallHook@20.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     ?FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z @ 0x15AD87 (-FindThreadPointerData@@YGPAUtagTHREADPOINTERDATA@@PAU_LIST_ENTRY@@G@Z.c)
 */

struct tagTHREADPOINTERDATA *__fastcall MakeThreadPointerHookData(struct tagTHREADPOINTERDATA **a1, int a2)
{
  struct tagTHREADPOINTERDATA *result; // eax
  struct tagTHREADPOINTERDATA *v3; // ebx
  _DWORD *v4; // eax
  int v5; // [esp-6Ch] [ebp-154h]
  _DWORD v6[26]; // [esp-68h] [ebp-150h] BYREF
  _DWORD v7[26]; // [esp+10h] [ebp-D8h] BYREF
  _BYTE v8[104]; // [esp+78h] [ebp-70h] BYREF
  struct tagTHREADPOINTERDATA **v9; // [esp+E0h] [ebp-8h]
  int v10; // [esp+E4h] [ebp-4h]

  v9 = a1;
  v10 = a2;
  result = FindThreadPointerData(a1, a2);
  v3 = result;
  if ( result )
  {
    v4 = (_DWORD *)HMValidateHandleNoSecure(*((_DWORD *)result + 6), 1);
    qmemcpy(v8, INPUTDEST_FROM_PWND(v4, v7), sizeof(v8));
    v5 = *((_DWORD *)v3 + 5);
    qmemcpy(v6, v8, sizeof(v6));
    return (struct tagTHREADPOINTERDATA *)CTouchProcessor::AddThreadPointerHookData(
                                            _gpTouchProcessor,
                                            v9,
                                            v10,
                                            *((_DWORD *)v3 + 3),
                                            *((_DWORD *)v3 + 4),
                                            v5,
                                            v6[0],
                                            v6[1],
                                            v6[2],
                                            v6[3],
                                            v6[4],
                                            v6[5],
                                            v6[6],
                                            v6[7],
                                            v6[8],
                                            v6[9],
                                            v6[10],
                                            v6[11],
                                            v6[12],
                                            v6[13],
                                            v6[14],
                                            v6[15],
                                            v6[16],
                                            v6[17],
                                            v6[18],
                                            v6[19],
                                            v6[20],
                                            v6[21],
                                            v6[22],
                                            v6[23],
                                            v6[24],
                                            v6[25]);
  }
  return result;
}
