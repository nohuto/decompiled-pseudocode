/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01E61E4
 * Callers:
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C015B154 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 * Callees:
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0053840 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0055FC0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     PtiKbdFromQ @ 0x1C00BEA34 (PtiKbdFromQ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00C0948 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1C00D7DDC (PhkFirstGlobalValid.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(struct tagQMSG *a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  __int64 v3; // rdi
  __int64 GlobalValid; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r15d
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // edx
  int v25; // r8d
  int v26; // ecx
  int v27; // edx
  unsigned int v28; // esi
  unsigned int v29; // r15d
  __int64 v30; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h]
  _QWORD v38[29]; // [rsp+88h] [rbp-78h] BYREF
  int v39; // [rsp+188h] [rbp+88h] BYREF
  __int64 v40; // [rsp+190h] [rbp+90h] BYREF

  v37 = 0LL;
  v1 = 0LL;
  v39 = 0;
  v2 = 0LL;
  v38[2] = 0LL;
  v40 = 0LL;
  v3 = 0LL;
  *(_OWORD *)v36 = 0LL;
  while ( 1 )
  {
    v36[3] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v38[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v38;
    v38[1] = GlobalValid;
    if ( GlobalValid )
      HMLockObject(GlobalValid);
    v9 = xxxCallHook2((struct tagHOOK *)GlobalValid, 1u, 0LL, (__int64)v36, &v39, 0);
    if ( v9 == -1 )
    {
LABEL_41:
      ThreadUnlock1(v7, v6, v8);
      return 0xFFFFFFFFLL;
    }
    memset(&v38[3], 0, 0xA0uLL);
    v7 = v36[0];
    v6 = 128LL;
    v10 = *(_OWORD *)&v38[5];
    *(_OWORD *)a1 = *(_OWORD *)&v38[3];
    v11 = *(_OWORD *)&v38[7];
    *((_OWORD *)a1 + 1) = v10;
    v12 = *(_OWORD *)&v38[9];
    *((_OWORD *)a1 + 2) = v11;
    v13 = *(_OWORD *)&v38[11];
    *((_OWORD *)a1 + 3) = v12;
    v14 = *(_OWORD *)&v38[13];
    *((_OWORD *)a1 + 4) = v13;
    v15 = *(_OWORD *)&v38[15];
    *((_OWORD *)a1 + 5) = v14;
    v16 = *(_OWORD *)&v38[17];
    *((_OWORD *)a1 + 6) = v15;
    v17 = *(_OWORD *)&v38[19];
    *((_OWORD *)a1 + 7) = v16;
    v18 = *(_OWORD *)&v38[21];
    *((_OWORD *)a1 + 8) = v17;
    *((_OWORD *)a1 + 9) = v18;
    *((_DWORD *)a1 + 6) = v7;
    if ( v9 > 0 )
    {
      v19 = *(_DWORD *)(gptiCurrent + 488LL);
      if ( (v19 & 0x200000) == 0 )
      {
        ThreadUnlock1(v7, 128LL, v8);
        return (unsigned int)v9;
      }
      *(_DWORD *)(gptiCurrent + 488LL) = v19 & 0xFFDFFFFF;
      v7 = v36[0];
    }
    if ( (unsigned int)(v7 - 512) <= 0xE )
      break;
    if ( (unsigned int)(v7 - 256) <= 8 )
    {
      v24 = 0;
      if ( (((_DWORD)v7 - 257) & 0xFFFFFFFB) == 0 && (v24 = 0x8000, (_DWORD)v7 == 261) || (_DWORD)v7 == 260 )
        v24 |= 0x2000u;
      v25 = v24 | 0x100;
      if ( (v36[2] & 0x8000) == 0 )
        v25 = v24;
      v26 = v25 | 0x4000;
      if ( ((unsigned __int8)(1 << (2 * (v36[1] & 3))) & *(_BYTE *)(((unsigned __int64)LOBYTE(v36[1]) >> 2)
                                                                  + *(_QWORD *)(gptiCurrent + 432LL)
                                                                  + 228)) == 0 )
        v26 = v25;
      v2 = ((LOBYTE(v36[2]) | v26) << 16) | 1;
      if ( LOWORD(v36[1]) != 231 || LOBYTE(v36[2]) )
      {
        v27 = 255;
        if ( (!v39 || (*gpsi & 2) != 0) && (v36[0] & 2) != 0 )
          v27 = 0xFFFF;
        v1 = v27 & v36[1];
      }
      else
      {
        *(_WORD *)(gptiCurrent + 874LL) = HIWORD(v36[1]);
      }
      goto LABEL_37;
    }
    if ( (_DWORD)v7 == 35 )
    {
      if ( !v36[1] || (v3 = HMValidateHandleNoSecure((int)v36[1], 1)) == 0 )
        v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
      goto LABEL_37;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
      goto LABEL_41;
    xxxCallHook(2, 0LL, 0LL, 1);
    ThreadUnlock1(v21, v20, v22);
  }
  v28 = v36[2];
  v29 = v36[1];
  v30 = LOWORD(v36[1]) | (LOWORD(v36[2]) << 16);
  v2 = (int)v30;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v30);
  if ( __PAIR64__(v28, v29) != LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext) )
    zzzInternalSetCursorPos(v29, v28, 1, 0);
LABEL_37:
  SetHardwareInputSource(&v40);
  if ( v3 )
    v32 = *(_DWORD *)(*(_QWORD *)(v3 + 40) + 288LL);
  else
    v32 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(*(_QWORD *)(gptiCurrent + 432LL)) + 424) + 280LL);
  StoreQMessage(
    a1,
    (struct tagWND *)v3,
    v36[0],
    v1,
    v2,
    0,
    0LL,
    0,
    0LL,
    0,
    (struct tagINPUT_MESSAGE_SOURCE *)&v40,
    v32,
    0LL,
    0LL);
  ThreadUnlock1(v34, v33, v35);
  return 0LL;
}
