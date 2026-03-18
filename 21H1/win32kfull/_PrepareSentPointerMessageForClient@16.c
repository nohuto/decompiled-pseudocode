/*
 * XREFs of _PrepareSentPointerMessageForClient@16 @ 0x15A03D
 * Callers:
 *     ?xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z @ 0x40764 (-xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z.c)
 *     _xxxPointerCallHook@20 @ 0x15A676 (_xxxPointerCallHook@20.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     ?MakePointerMessage@@YGHKIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z @ 0x15AEA9 (-MakePointerMessage@@YGHKIPAXPAIPAJPAGPAKPAHPAPAUHWND__@@@Z.c)
 */

int __fastcall PrepareSentPointerMessageForClient(_DWORD *a1, unsigned int *a2, int *a3, int a4)
{
  int v4; // ebx
  int v5; // ecx
  unsigned int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int *v11; // edx
  _DWORD v12[30]; // [esp-Ch] [ebp-16Ch] BYREF
  int v13; // [esp+6Ch] [ebp-F4h] BYREF
  unsigned int v14; // [esp+70h] [ebp-F0h] BYREF
  unsigned int v15; // [esp+74h] [ebp-ECh] BYREF
  int v16; // [esp+78h] [ebp-E8h]
  unsigned int v17; // [esp+7Ch] [ebp-E4h] BYREF
  int v18; // [esp+80h] [ebp-E0h] BYREF
  unsigned __int16 v19[2]; // [esp+84h] [ebp-DCh] BYREF
  _DWORD *v20; // [esp+88h] [ebp-D8h]
  unsigned int *v21; // [esp+8Ch] [ebp-D4h]
  _BYTE v22[104]; // [esp+90h] [ebp-D0h] BYREF
  _DWORD v23[26]; // [esp+F8h] [ebp-68h] BYREF

  v20 = a1;
  v4 = *a1;
  v5 = *a3;
  v17 = 0;
  v18 = 0;
  v14 = 0;
  v13 = 0;
  *(_DWORD *)v19 = 0;
  v15 = 0;
  v12[26] = &v15;
  v21 = a2;
  v6 = *a2;
  v16 = v5;
  if ( !MakePointerMessage(v6, (unsigned int)&v17, &v18, &v14, &v13, v19, &v15, (int *)v12[27], (HWND *)v12[28]) )
    return 0;
  v7 = (_DWORD *)HMValidateHandleNoSecure(v15, 1);
  qmemcpy(v22, INPUTDEST_FROM_PWND(v7, v23), sizeof(v22));
  v8 = _gptiCurrent + 612;
  if ( a4 )
  {
    qmemcpy(&v12[1], v22, 0x68u);
    v9 = CTouchProcessor::AddThreadPointerHookData(
           _gpTouchProcessor,
           v8,
           v14,
           v13,
           v16,
           v4,
           v12[1],
           v12[2],
           v12[3],
           v12[4],
           v12[5],
           v12[6],
           v12[7],
           v12[8],
           v12[9],
           v12[10],
           v12[11],
           v12[12],
           v12[13],
           v12[14],
           v12[15],
           v12[16],
           v12[17],
           v12[18],
           v12[19],
           v12[20],
           v12[21],
           v12[22],
           v12[23],
           v12[24],
           v12[25],
           v12[26]);
  }
  else
  {
    qmemcpy(v12, v22, 0x68u);
    v9 = CTouchProcessor::AddThreadPointerData(
           _gpTouchProcessor,
           v8,
           v14,
           v13,
           v16,
           v4,
           v12[0],
           v12[1],
           v12[2],
           v12[3],
           v12[4],
           v12[5],
           v12[6],
           v12[7],
           v12[8],
           v12[9],
           v12[10],
           v12[11],
           v12[12],
           v12[13],
           v12[14],
           v12[15],
           v12[16],
           v12[17],
           v12[18],
           v12[19],
           v12[20],
           v12[21],
           v12[22],
           v12[23],
           v12[24],
           v12[25],
           0);
  }
  if ( !v9 )
    return 0;
  v11 = v21;
  *v20 = v4;
  *v11 = v17;
  *a3 = v18;
  return 1;
}
