/*
 * XREFs of _xxxBroadcastMessageEx@32 @ 0x48942
 * Callers:
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     _xxxBroadcastMessage@28 @ 0xAE8A2 (_xxxBroadcastMessage@28.c)
 *     _xxxBroadcastDisplaySettingsChange@12 @ 0xB2668 (_xxxBroadcastDisplaySettingsChange@12.c)
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 *     ?xxxSystemBroadcastMessage@@YGXIIJIPATtagBROADCASTMSG@@HI@Z @ 0xE719A (-xxxSystemBroadcastMessage@@YGXIIJIPATtagBROADCASTMSG@@HI@Z.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     __PostTransformableMessageIL@24 @ 0x7F87A (__PostTransformableMessageIL@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetPrimaryMonitorRectForWindow@4 @ 0xA8E18 (_GetPrimaryMonitorRectForWindow@4.c)
 *     ?xxxSystemBroadcastMessage@@YGXIIJIPATtagBROADCASTMSG@@HI@Z @ 0xE719A (-xxxSystemBroadcastMessage@@YGXIIJIPATtagBROADCASTMSG@@HI@Z.c)
 *     ?CaptureBroadcastString@@YGHPAU_LARGE_UNICODE_STRING@@PAU_LARGE_STRING@@@Z @ 0xE9F68 (-CaptureBroadcastString@@YGHPAU_LARGE_UNICODE_STRING@@PAU_LARGE_STRING@@@Z.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 */

int __fastcall xxxBroadcastMessageEx(
        int a1,
        unsigned int a2,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        size_t MaxCount,
        union tagBROADCASTMSG *a8)
{
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // esi
  unsigned int v13; // ecx
  size_t v14; // edi
  _DWORD *v15; // eax
  int v16; // esi
  int v17; // edx
  __int16 v18; // cx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v21; // ecx
  size_t v22; // edi
  int *PrimaryMonitorRectForWindow; // eax
  _WORD *v25; // eax
  unsigned __int16 v26; // ax
  unsigned int v27; // edi
  int *v28; // esi
  int v29; // eax
  struct _LARGE_UNICODE_STRING *v30; // [esp+0h] [ebp-60h]
  struct _LARGE_STRING *v31; // [esp+4h] [ebp-5Ch]
  int v32; // [esp+10h] [ebp-50h]
  unsigned int *v33; // [esp+14h] [ebp-4Ch]
  int CurrentProcessWin32Process; // [esp+18h] [ebp-48h]
  int v35; // [esp+1Ch] [ebp-44h]
  int v36; // [esp+24h] [ebp-3Ch]
  int v37; // [esp+28h] [ebp-38h] BYREF
  int v38; // [esp+2Ch] [ebp-34h]
  int v39; // [esp+30h] [ebp-30h]
  int v40; // [esp+34h] [ebp-2Ch]
  int v41; // [esp+38h] [ebp-28h] BYREF
  int v42; // [esp+3Ch] [ebp-24h]
  int v43; // [esp+40h] [ebp-20h]
  _BYTE v44[12]; // [esp+44h] [ebp-1Ch] BYREF
  _BYTE v45[16]; // [esp+50h] [ebp-10h] BYREF

  v41 = 0;
  v42 = 0;
  v43 = 0;
  memset(v44, 0, sizeof(v44));
  v10 = _gptiCurrent;
  if ( a2 < 0x400 || a2 >= 0xC000 )
  {
    v32 = 0;
  }
  else
  {
    v32 = 1;
    UserSetLastError(87);
    v10 = _gptiCurrent;
  }
  v11 = MaxCount;
  if ( !MaxCount && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794 || a2 - 804 <= 1) )
  {
    v11 = 1;
    MaxCount = 1;
  }
  if ( !a1 )
  {
    v37 = 0;
    v38 = 0;
    v39 = 0;
    if ( a2 >= 0x1A )
    {
      if ( a2 <= 0x1B )
      {
        v28 = (int *)a4;
        if ( a4 )
        {
          if ( !CaptureBroadcastString(v30, v31) )
            return 0;
          PushW32ThreadLock(v39, v44, Win32FreePool);
          v28 = &v37;
        }
        xxxSystemBroadcastMessage((unsigned int)v28, a5, a6, MaxCount, a8, (int)v30, (unsigned int)v31);
        if ( v28 )
          PopAndFreeAlwaysW32ThreadLock(v44);
        return 1;
      }
      if ( a2 == 30 )
      {
        if ( (*(_BYTE *)(v10 + 264) & 4) == 0 )
          return 0;
      }
      else if ( a2 == 42 || a2 - 712 <= 1 )
      {
        xxxSystemBroadcastMessage(a4, a5, a6, v11, a8, (int)v30, (unsigned int)v31);
        return 1;
      }
    }
    a1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 248) + 4) + 12);
    if ( !a1 )
    {
      UserSetLastError(5);
      return 0;
    }
  }
  v12 = BuildHwndList(*(_DWORD *)(a1 + 60), 2, 0);
  v36 = v12;
  if ( !v12 )
    return 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v33 = (unsigned int *)(v12 + 16);
  v13 = *(_DWORD *)(v12 + 16);
  if ( v13 == 1 )
    goto LABEL_34;
  v14 = MaxCount;
  do
  {
    v15 = (_DWORD *)HMValidateHandleNoSecure(v13, 1);
    v16 = (int)v15;
    v35 = (int)v15;
    if ( v15 )
    {
      v17 = v15[5];
      if ( (*(_WORD *)(v17 + 30) & 0x3FFF) != 0x29C )
      {
        v18 = **(_WORD **)(v15[19] + 4);
        if ( *(_WORD *)(_gpsi + 508) != v18
          && gaOleMainThreadWndClass != v18
          && (!v32 || (*(_BYTE *)(v17 + 13) & 2) == 0)
          && (a2 != 784 && a2 != 785 || (*(_BYTE *)(v17 + 23) & 0x10) != 0 || (*(_DWORD *)(v15[2] + 264) & 0x800) != 0) )
        {
          if ( a8 == (union tagBROADCASTMSG *)1 )
          {
            if ( *(_DWORD *)(v17 + 148) == 1 )
              goto LABEL_23;
          }
          else if ( a8 != (union tagBROADCASTMSG *)2
                 || *(_DWORD *)(v17 + 148) != 1
                 || (*(_BYTE *)(v17 + 146) & 0x20) != 0 )
          {
LABEL_23:
            CurrentThread = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
            v41 = *(_DWORD *)(ThreadWin32Thread + 228);
            *(_DWORD *)(ThreadWin32Thread + 228) = &v41;
            v42 = v16;
            HMLockObject(v16);
            switch ( a5 )
            {
              case 0u:
                xxxSendTransformableMessageTimeout(v16, a2, (unsigned int)a3, a4, 0, 0, 0, v14, 1);
                goto LABEL_31;
              case 1u:
                v22 = MaxCount;
                goto LABEL_26;
              case 2u:
                if ( !*(_DWORD *)(v16 + 64) )
                  _PostTransformableMessageIL(v16, a2, a3, a4, v14, v21);
                goto LABEL_31;
              case 3u:
                xxxSendMessageCallback(
                  v16,
                  a2,
                  a3,
                  a4,
                  *(void (__stdcall **)(int, unsigned int, int, int))a6,
                  *(_DWORD *)(a6 + 4),
                  *(_DWORD *)(a6 + 8),
                  v14,
                  1);
                goto LABEL_31;
              case 4u:
LABEL_40:
                v22 = MaxCount;
                if ( xxxSendTransformableMessageTimeout(
                       v16,
                       a2,
                       (unsigned int)a3,
                       a4,
                       *(_DWORD *)a6,
                       *(struct tagDDECONV **)(a6 + 4),
                       *(int **)(a6 + 8),
                       MaxCount,
                       1)
                  || a5 != 6 )
                {
                  goto LABEL_30;
                }
LABEL_26:
                if ( a2 < 0x1A )
                  goto LABEL_29;
                if ( a2 > 0x1B )
                {
                  if ( a2 != 126 )
                    goto LABEL_29;
                  PrimaryMonitorRectForWindow = (int *)GetPrimaryMonitorRectForWindow(v45);
                  v37 = *PrimaryMonitorRectForWindow;
                  v38 = PrimaryMonitorRectForWindow[1];
                  v39 = PrimaryMonitorRectForWindow[2];
                  v40 = PrimaryMonitorRectForWindow[3];
                  v14 = MaxCount;
                  xxxSendNotifyMessage(
                    v35,
                    0x7Eu,
                    a3,
                    (unsigned __int16)(v39 - v37) | ((unsigned __int16)(v40 - v38) << 16),
                    MaxCount);
LABEL_31:
                  ThreadUnlock1();
                  goto LABEL_32;
                }
                if ( a4 )
                {
                  v25 = *(_WORD **)(a4 + 8);
                  if ( *v25 )
                  {
                    v26 = UserAddAtomEx(v25, 0, 2);
                    v27 = v26;
                    if ( v26 )
                      goto LABEL_47;
LABEL_30:
                    v14 = MaxCount;
                    goto LABEL_31;
                  }
                  v27 = -1;
                }
                else
                {
                  v27 = 0;
                }
LABEL_47:
                if ( !PostEventMessage(
                        (struct tagTHREADINFO *)9,
                        (struct tagQ *)v16,
                        a2,
                        a3,
                        v27,
                        (unsigned int)v30,
                        (int)v31)
                  && v27
                  && v27 != -1 )
                {
                  UserDeleteAtom(v27);
                }
                goto LABEL_30;
            }
            if ( a5 != 5 )
            {
              if ( a5 == 6 )
                goto LABEL_40;
              goto LABEL_31;
            }
            v29 = *(_DWORD *)(v16 + 8);
            if ( *(_DWORD *)(v29 + 232) == CurrentProcessWin32Process && (*(_BYTE *)(v29 + 264) & 8) == 0 )
            {
              _InterlockedIncrement(&glSendMessage);
              xxxSendTransformableMessageTimeout(v16, a2, (unsigned int)a3, a4, 0, 0, 0, 1u, 1);
              goto LABEL_31;
            }
            v22 = MaxCount;
LABEL_29:
            xxxSendNotifyMessage(v16, a2, a3, a4, v22);
            goto LABEL_30;
          }
        }
      }
    }
LABEL_32:
    v13 = *++v33;
  }
  while ( *v33 != 1 );
  v12 = v36;
LABEL_34:
  FreeHwndList((struct tagBWL *)v12);
  return 1;
}
