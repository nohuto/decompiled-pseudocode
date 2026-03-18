/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1C01F0110
 * Callers:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0098440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxPointerCallHook @ 0x1C01F0B3C (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01270A0 (INPUTDEST_FROM_PWND.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F17B8 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // r15
  unsigned int v5; // ebx
  void *v7; // r8
  __int64 v11; // rax
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int128 v17; // xmm5
  __int128 v18; // xmm6
  __int64 v19; // rdx
  __int64 result; // rax
  unsigned __int64 v22; // rcx
  HWND v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v26[7]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v27[32]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int16 v28; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v29; // [rsp+1A8h] [rbp+A8h] BYREF
  int v30; // [rsp+1B0h] [rbp+B0h] BYREF

  v4 = *a3;
  v5 = *a1;
  v7 = *a2;
  v24 = 0LL;
  v25 = 0LL;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v23 = 0LL;
  if ( !MakePointerMessage(v4, v5, v7, &v24, &v25, &v28, &v29, &v30, &v23) )
    return 0LL;
  v11 = HMValidateHandleNoSecure((unsigned __int64)v23, 1);
  v12 = INPUTDEST_FROM_PWND(v27, v11);
  v13 = v12[1];
  v14 = v12[2];
  v15 = v12[3];
  v16 = v12[4];
  v17 = v12[5];
  v18 = v12[6];
  v26[0] = *v12;
  v26[1] = v13;
  v26[2] = v14;
  v19 = gptiCurrent + 1080LL;
  v26[3] = v15;
  v26[4] = v16;
  v26[5] = v17;
  v26[6] = v18;
  if ( !(a4
       ? CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, v19, v28, v29, v4, v5, v26)
       : (unsigned int)CTouchProcessor::AddThreadPointerData(gpTouchProcessor, v19, v28, v29, v4, v5, v26, 0)) )
    return 0LL;
  v22 = v24;
  result = 1LL;
  *a1 = v5;
  *a2 = (void *)v22;
  *a3 = v25;
  return result;
}
