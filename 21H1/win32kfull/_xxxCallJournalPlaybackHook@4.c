/*
 * XREFs of _xxxCallJournalPlaybackHook@4 @ 0x1527A2
 * Callers:
 *     ?xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x3C4EA (-xxxGetNextSysMsg@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@1PAVCMultiPerObjectLockExclusivePpiPtiQ@.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     _PhkFirstGlobalValid@8 @ 0x6F434 (_PhkFirstGlobalValid@8.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E (-StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_IN.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall xxxCallJournalPlaybackHook(_DWORD *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  unsigned int v4; // edx
  unsigned int GlobalValid; // esi
  _DWORD *v6; // eax
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // eax
  LONG v11; // edi
  struct tagPOINT *v12; // ebx
  unsigned int v13; // esi
  int CurrentThreadDpiAwarenessContext; // eax
  int v15; // edi
  unsigned int v16; // eax
  int v17; // edi
  int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int *v22; // [esp+0h] [ebp-D0h]
  void *v23; // [esp+0h] [ebp-D0h]
  bool v24; // [esp+4h] [ebp-CCh]
  struct tagUIPI_INFO *v25; // [esp+4h] [ebp-CCh]
  int v26; // [esp+14h] [ebp-BCh]
  struct tagWND *v27; // [esp+1Ch] [ebp-B4h]
  unsigned int v28; // [esp+20h] [ebp-B0h]
  unsigned int v29; // [esp+24h] [ebp-ACh] BYREF
  _DWORD *v30; // [esp+28h] [ebp-A8h]
  struct tagQMSG *v31; // [esp+2Ch] [ebp-A4h] BYREF
  unsigned int v32; // [esp+30h] [ebp-A0h]
  LONG v33; // [esp+34h] [ebp-9Ch]
  int v34; // [esp+38h] [ebp-98h]
  int v35; // [esp+3Ch] [ebp-94h]
  size_t v36; // [esp+40h] [ebp-90h]
  unsigned int v37[2]; // [esp+44h] [ebp-8Ch] BYREF
  int v38; // [esp+4Ch] [ebp-84h] BYREF
  unsigned int v39; // [esp+50h] [ebp-80h]
  int v40; // [esp+54h] [ebp-7Ch]
  _BYTE v41[120]; // [esp+58h] [ebp-78h] BYREF

  v30 = this;
  v31 = 0;
  v27 = 0;
  v29 = 0;
  v32 = 0;
  v37[0] = 0;
  v37[1] = 0;
  v26 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  while ( 1 )
  {
    v1 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v3 = MEMORY[0xFFDF0324];
      v4 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v3 = MEMORY[0xFFDF0324];
          v4 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v1 = MEMORY[0xFFDF0004];
      }
      v2 = v1 * (v3 << 8) + (((unsigned int)v1 * (unsigned __int64)v4) >> 24);
    }
    else
    {
      v2 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    v34 = v2;
    GlobalValid = PhkFirstGlobalValid(_gptiCurrent, 1);
    v38 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v38;
    v28 = GlobalValid;
    v39 = GlobalValid;
    if ( GlobalValid )
      HMLockObject(GlobalValid);
    v36 = xxxCallHook2(1, GlobalValid, 0, &v31, (int *)&v29, 0, v22, v24);
    if ( v36 == -1 )
    {
LABEL_54:
      ThreadUnlock1();
      return -1;
    }
    memset(v41, 0, sizeof(v41));
    v6 = v30;
    v7 = (unsigned int)v31;
    qmemcpy(v30, v41, 0x78u);
    v8 = v36;
    v6[3] = v7;
    if ( v8 > 0 )
    {
      v9 = *(_DWORD *)(_gptiCurrent + 264);
      if ( (((unsigned int)&loc_1FFFFC + 4) & v9) == 0 )
      {
        ThreadUnlock1();
        return v8;
      }
      *(_DWORD *)(_gptiCurrent + 264) = v9 & 0xFFDFFFFF;
      v7 = (unsigned int)v31;
    }
    if ( v7 >= 0x200 && v7 <= 0x20E )
    {
      v11 = v33;
      v12 = (struct tagPOINT *)v32;
      v27 = 0;
      v13 = (unsigned __int16)v32 | ((unsigned __int16)v33 << 16);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      if ( __PAIR64__(v11, (unsigned int)v12) != LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext) )
        zzzInternalSetCursorPos(v12, v11, 1, 0);
      goto LABEL_25;
    }
    if ( v7 >= 0x100 && v7 < 0x109 )
      break;
    if ( v7 == 35 )
    {
      if ( v32 )
      {
        v15 = _gptiCurrent;
        v13 = 0;
        v26 = HMValidateHandleNoSecure(v32, 1);
        if ( !v26 )
          v26 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 64);
        goto LABEL_26;
      }
      v13 = 0;
      v26 = *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 64);
LABEL_25:
      v15 = _gptiCurrent;
      goto LABEL_26;
    }
    if ( !v28 || !*(_DWORD *)(v28 + 28) )
      goto LABEL_54;
    xxxCallHook(0, 2, 0, 1u, (int)v23, (int)v25);
    ThreadUnlock1();
  }
  v17 = 0;
  if ( (v7 == 257 || v7 == 261) && (v17 = 0x8000, v7 == 261) || v7 == 260 )
    v17 |= 0x2000u;
  if ( (v33 & 0x8000) != 0 )
    v17 |= 0x100u;
  if ( ((unsigned __int8)(1 << (2 * (v32 & 3))) & *(_BYTE *)(((unsigned __int8)v32 >> 2)
                                                           + *(_DWORD *)(_gptiCurrent + 236)
                                                           + 152)) != 0 )
    v17 |= 0x4000u;
  v13 = ((v17 | (unsigned __int8)v33) << 16) | 1;
  if ( (_WORD)v32 != 231 || (_BYTE)v33 )
  {
    v18 = 255;
    if ( (!v29 || (*_gpsi & 2) != 0) && (v7 & 2) != 0 )
      v18 = 0xFFFF;
    v27 = (struct tagWND *)(v32 & v18);
    goto LABEL_25;
  }
  v15 = _gptiCurrent;
  *(_WORD *)(_gptiCurrent + 486) = HIWORD(v32);
LABEL_26:
  SetHardwareInputSource(v37);
  if ( v26 )
  {
    v16 = *(_DWORD *)(*(_DWORD *)(v26 + 20) + 184);
  }
  else
  {
    v19 = *(_DWORD *)(v15 + 236);
    v20 = *(_DWORD *)(v19 + 64);
    if ( v20 )
      v21 = *(_DWORD *)(v20 + 8);
    else
      v21 = *(_DWORD *)(v19 + 52);
    v16 = *(_DWORD *)(*(_DWORD *)(v21 + 232) + 156);
  }
  StoreQMessage((HWND *)v26, v30, v31, v27, v13, 0, 0, 0, 0LL, 0, v37, v16, 0, 0, v23, v25);
  ThreadUnlock1();
  return 0;
}
