/*
 * XREFs of _xxxSendMessageCallback@36 @ 0x46062
 * Callers:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x17536 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     _xxxSendNotifyMessage@20 @ 0x4823C (_xxxSendNotifyMessage@20.c)
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z @ 0x8136E (-QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z.c)
 *     ?xxxWrapSendMessageCallback@@YGJPAUtagWND@@IIJK@Z @ 0xA1692 (-xxxWrapSendMessageCallback@@YGJPAUtagWND@@IIJK@Z.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 * Callees:
 *     _xxxEventWndProc@16 @ 0x15E80 (_xxxEventWndProc@16.c)
 *     _xxxDesktopWndProc@16 @ 0x16118 (_xxxDesktopWndProc@16.c)
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _NtUserfnNCDESTROY@28 @ 0x3C762 (_NtUserfnNCDESTROY@28.c)
 *     ?xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z @ 0x40764 (-xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z.c)
 *     _SfnDWORD@32 @ 0x40E50 (_SfnDWORD@32.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _IsTouchInputMessage@4 @ 0x46022 (_IsTouchInputMessage@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxBroadcastMessage@28 @ 0xAE8A2 (_xxxBroadcastMessage@28.c)
 *     _GreAssertSystemCriticalProcess@4 @ 0xB5596 (_GreAssertSystemCriticalProcess@4.c)
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 */

size_t __fastcall xxxSendMessageCallback(
        int a1,
        unsigned int a2,
        struct tagWND *a3,
        size_t a4,
        void (__stdcall *a5)(int, unsigned int, int, int),
        int a6,
        int a7,
        size_t MaxCount,
        int a9)
{
  _DWORD *v11; // ebx
  int v12; // edx
  ULONG_PTR v13; // ecx
  int v14; // eax
  unsigned int v15; // edi
  _DWORD *v16; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  BOOL v21; // eax
  _DWORD *v22; // ecx
  int v23; // edx
  unsigned int *v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  BOOL v28; // eax
  int v29; // [esp+0h] [ebp-5Ch]
  int *v30; // [esp+4h] [ebp-58h]
  _DWORD v31[8]; // [esp+10h] [ebp-4Ch] BYREF
  int v32; // [esp+30h] [ebp-2Ch]
  unsigned int v33; // [esp+34h] [ebp-28h]
  int v34; // [esp+38h] [ebp-24h]
  int v35; // [esp+3Ch] [ebp-20h]
  int v36; // [esp+40h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]
  int v38; // [esp+6Ch] [ebp+10h]

  v33 = a2;
  v35 = a1;
  v11 = 0;
  v36 = 0;
  v12 = 1;
  if ( a5 || (v32 = 1, a6 != 1) )
    v32 = 0;
  if ( a2 >= 0x400 )
  {
    v18 = 0;
  }
  else
  {
    if ( (MessageTable[a2] & 0x200) == 0 && (a2 != 537 || ((unsigned __int16)a3 & 0x8000) == 0) )
      goto LABEL_7;
    v18 = 1;
  }
  if ( v18 )
  {
    UserSetLastError(1159);
    return 0;
  }
LABEL_7:
  if ( a1 != -1 )
  {
    v13 = 0;
    v31[7] = 0;
    ms_exc.registration.TryLevel = 0;
    LOWORD(v14) = 0;
    if ( a1 )
      v14 = *(_DWORD *)a1;
    v34 = (unsigned __int16)v14;
    ms_exc.registration.TryLevel = -2;
    v15 = v33;
    if ( (unsigned int)(unsigned __int16)v14 >= *(_DWORD *)(_gpsi + 4)
      || (v35 = _gSharedInfo[1] + v34 * _gSharedInfo[2], v13 = v35, *(_DWORD *)(12 * v34 + _gpKernelHandleTable) != a1)
      || *(_BYTE *)(v35 + 12) != 1 )
    {
      KeBugCheckEx(0x197u, 1u, a1, v13, 1u);
    }
    v35 = _gptiCurrent;
    if ( v32 || _gptiCurrent != *(_DWORD *)(a1 + 8) )
    {
      memset(v31, 0, 0x1Cu);
      v16 = 0;
      if ( a5 )
      {
        v31[0] = a7 != 0 ? 257 : 1;
        v31[1] = a5;
        v31[2] = a6;
        v16 = v31;
      }
      return xxxInterSendMsgEx(
               (struct tagPROCESSINFO *)a1,
               (struct tagPROCESSINFO *)v33,
               a3,
               a4,
               0,
               *(_DWORD *)(a1 + 8),
               (int)v16,
               MaxCount,
               a9);
    }
    if ( ((*(_BYTE *)(_gptiCurrent + 372) | *(_BYTE *)(**(_DWORD **)(_gptiCurrent + 252) + 8)) & 0x20) != 0 )
    {
      v21 = v33 < 0x400 && ((unsigned __int16)MessageTable[v33] >> 14) & 1;
      if ( !v21 || (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 10) & 4) == 0 )
      {
        v31[5] = *(_DWORD *)a1;
        v31[4] = v33;
        v31[3] = a3;
        v31[2] = a4;
        v31[6] = 0;
        xxxCallHook((int)&v31[2], 4u, v29, (int)v30);
      }
    }
    v19 = *(_DWORD *)(a1 + 20);
    if ( (*(_BYTE *)(v19 + 10) & 4) != 0 )
    {
      v27 = *(_DWORD *)(v19 + 84);
      if ( v27 >= 7 )
        return 0;
      v36 = ((int (__stdcall *)(int, int, int, int))(&gServerHandlers)[v27])(a1, v15, (int)a3, a4);
    }
    else
    {
      xxxSendMessageToClient(v15, a1, a3, a4, 0, 0, (struct tagSMS *)&v36, v29, v30);
    }
    if ( a5 )
    {
      if ( a7 )
      {
        v22 = *(_DWORD **)(v35 + 244);
        v38 = *v22 & 8;
        *v22 |= 4u;
        **(_DWORD **)(v35 + 244) |= 8u;
        if ( IsTouchInputMessage((void *)v15) || v15 == 281 )
          gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v15]](
            a1,
            v15,
            a6,
            v36,
            v23,
            *(_DWORD *)(_gpsi + 408),
            1,
            0);
        else
          SfnDWORD((int *)a1, v15, a6, v36, v23, *(_DWORD *)(_gpsi + 408), 1, 0);
        v20 = v35;
        **(_DWORD **)(v35 + 244) &= ~4u;
        v24 = *(unsigned int **)(v20 + 244);
        v25 = *v24;
        if ( v38 )
          v26 = v25 | 8;
        else
          v26 = v25 & 0xFFFFFFF7;
        *v24 = v26;
LABEL_26:
        if ( ((*(_DWORD *)(v20 + 372) | *(_DWORD *)(**(_DWORD **)(v20 + 252) + 8)) & 0x2000) != 0 )
        {
          v28 = v15 < 0x400 && ((unsigned __int16)MessageTable[v15] >> 14) & 1;
          if ( !v28 || (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 10) & 4) == 0 )
          {
            v31[5] = *(_DWORD *)a1;
            v31[4] = v15;
            v31[3] = a3;
            v31[2] = a4;
            v31[1] = v36;
            v31[6] = 0;
            xxxCallHook((int)&v31[1], 0xCu, v29, (int)v30);
          }
        }
        return 1;
      }
      a5(a1, v15, a6, v36);
    }
    v20 = v35;
    goto LABEL_26;
  }
  memset(&v31[4], 0, 12);
  if ( a5 )
  {
    v12 = 3;
    v31[4] = a5;
    v31[5] = a6;
    v31[6] = a7;
    v11 = &v31[4];
  }
  return xxxBroadcastMessage(a3, a4, v12, v11, MaxCount);
}
