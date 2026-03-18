/*
 * XREFs of _xxxSendInput@8 @ 0xAFB7E
 * Callers:
 *     _NtUserSendInput@12 @ 0xAF922 (_NtUserSendInput@12.c)
 *     ?xxxSend3FingerTapHotkey@@YGXXZ @ 0x178925 (-xxxSend3FingerTapHotkey@@YGXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YGXXZ @ 0x178A43 (-xxxSend4FingerTapHotkey@@YGXXZ.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AAEHF@Z @ 0x1B3BFA (-SendZoomHotkey@InteractiveControlDefaultScroller@@AAEHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CGXEH@Z @ 0x1B3C82 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CGXEH@Z.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA (-xxxMouseEventDirect@@YGHKKKK_K0KH@Z.c)
 *     _xxxInternalKeyEventDirect@20 @ 0xAFD06 (_xxxInternalKeyEventDirect@20.c)
 *     _xxxWaitForDITMouseInjectionFlush@0 @ 0xAFF56 (_xxxWaitForDITMouseInjectionFlush@0.c)
 *     _WPP_RECORDER_SF_dd@28 @ 0x147DEC (_WPP_RECORDER_SF_dd@28.c)
 *     _xxxSynchronizeDWMWindowChanges@0 @ 0x148325 (_xxxSynchronizeDWMWindowChanges@0.c)
 */

unsigned int __fastcall xxxSendInput(unsigned int a1, int a2)
{
  unsigned int v2; // edi
  int v4; // ecx
  unsigned __int16 v5; // bx
  unsigned int *v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  __int64 v15; // kr00_8
  unsigned __int64 v16; // rax
  BOOL v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // [esp-Ch] [ebp-2Ch]
  unsigned __int64 v21; // [esp-8h] [ebp-28h]
  char v22; // [esp-4h] [ebp-24h]
  unsigned int v23; // [esp+0h] [ebp-20h]
  int v24; // [esp+4h] [ebp-1Ch]
  int v25; // [esp+Ch] [ebp-14h]
  BOOL v26; // [esp+10h] [ebp-10h]
  unsigned int v27; // [esp+1Ch] [ebp-4h]

  v2 = 0;
  v4 = 0;
  v27 = a1;
  v25 = 0;
  v5 = *(_WORD *)(_gptiCurrent + 340);
  v26 = glDitMouseHandling == 0;
  if ( !a1 )
    return v2;
  v6 = (unsigned int *)(a2 + 16);
  do
  {
    v7 = *(v6 - 4);
    v8 = 1281;
    if ( v7 )
    {
      v9 = v7 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dd(v4, 31, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, v2, v5 >= 0x501u);
          if ( v5 >= 0x501u )
          {
            UserSetLastError((struct _NT_TIB *)0x78);
            return v2;
          }
        }
        goto LABEL_10;
      }
      if ( (*_gpsi & 0x2000) == 0 )
      {
        if ( v4 )
          xxxWaitForDITMouseInjectionFlush();
        v10 = *(v6 - 2);
        HIWORD(v11) = 0;
        v12 = 0;
        v25 = 0;
        if ( (v10 & 4) == 0 || *((_WORD *)v6 - 6) || (v10 & 0xFFFFFFF9) != 0 )
        {
          LOBYTE(v12) = *((_BYTE *)v6 - 12);
          if ( !xxxInternalKeyEventDirect(v12, *((unsigned __int8 *)v6 - 10), v10, *(v6 - 1), *v6) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dd(v13, 30, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, v2, v5 >= 0x501u);
            goto LABEL_42;
          }
        }
        else
        {
          LOWORD(v11) = *((_WORD *)v6 - 5);
          LOBYTE(v12) = -25;
          if ( !xxxInternalKeyEventDirect(v12, v11, v10, *(v6 - 1), *v6) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_dd(v19, 29, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, v2, v5 >= 0x501u);
LABEL_42:
            if ( v5 >= 0x501u )
              return v2;
          }
        }
LABEL_10:
        v6 += 7;
        goto LABEL_11;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = v2;
        v20 = 28;
        goto LABEL_30;
      }
    }
    else
    {
      if ( (*_gpsi & 0x2000) == 0 )
      {
        if ( (*(_BYTE *)v6 & 0xAA) != 0 )
          xxxSynchronizeDWMWindowChanges();
        v15 = UpconvertTime(v6[1]);
        LODWORD(v16) = MilliSecsToQpcCount(v15, HIDWORD(v15));
        v17 = v26;
        if ( !v26 )
        {
          v25 = 1;
          v17 = 0;
        }
        HIDWORD(v21) = v17;
        LODWORD(v21) = v6[2];
        if ( !xxxMouseEventDirect(*(v6 - 2), *(v6 - 3), *(v6 - 1), *v6, v15, v16, v21, v23, v24) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dd(v18, 27, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, v2, v5 >= 0x501u);
          goto LABEL_42;
        }
        goto LABEL_10;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = v2;
        v20 = 26;
LABEL_30:
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_q(v4, v8, 0x14u, v20, (int)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, v22);
LABEL_11:
        v4 = v25;
      }
    }
    ++v2;
  }
  while ( v2 < v27 );
  if ( v4 )
    xxxWaitForDITMouseInjectionFlush();
  return v2;
}
