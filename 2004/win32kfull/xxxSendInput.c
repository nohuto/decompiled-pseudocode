/*
 * XREFs of xxxSendInput @ 0x1C003A9BC
 * Callers:
 *     NtUserSendInput @ 0x1C003A7E0 (NtUserSendInput.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C02142CC (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C0214434 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C025A4D0 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C025A5A8 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032D80 (WPP_RECORDER_SF_d.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C003A428 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInternalKeyEventDirect @ 0x1C003AC50 (xxxInternalKeyEventDirect.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C003B140 (xxxWaitForDITMouseInjectionFlush.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003DDA4 (WPP_RECORDER_SF_dd.c)
 *     xxxSynchronizeDWMWindowChanges @ 0x1C003DE4C (xxxSynchronizeDWMWindowChanges.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall xxxSendInput(unsigned int a1, __int64 a2)
{
  int v3; // r14d
  BOOL v4; // r12d
  unsigned int v5; // esi
  unsigned __int16 v6; // bp
  unsigned int *v7; // rdi
  _UNKNOWN **v8; // rdx
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  int v17; // r9d
  int v18; // r9d

  v3 = 0;
  v4 = glDitMouseHandling == 0;
  v5 = 0;
  v6 = *(_WORD *)(gptiCurrent + 624LL);
  if ( !a1 )
    return v5;
  v7 = (unsigned int *)(a2 + 24);
  v8 = &WPP_RECORDER_INITIALIZED;
  do
  {
    v9 = *(v7 - 6);
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 == 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v8) = 2;
            WPP_RECORDER_SF_dd(
              1,
              (_DWORD)v8,
              (unsigned int)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
              31,
              (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
              v5,
              v6 >= 0x501u);
          }
          if ( v6 >= 0x501u )
          {
            UserSetLastError(120LL);
            return v5;
          }
        }
        goto LABEL_10;
      }
      v10 = gpsi;
      if ( (*gpsi & 0x2000) == 0 )
      {
        if ( v3 )
          xxxWaitForDITMouseInjectionFlush(
            gpsi,
            &WPP_RECORDER_INITIALIZED,
            &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
        v11 = *(v7 - 3);
        v3 = 0;
        if ( (v11 & 4) != 0 && !*((_WORD *)v7 - 8) && (v11 & 0xFFFFFFF9) == 0 )
        {
          LOBYTE(v10) = -25;
          if ( !(unsigned int)xxxInternalKeyEventDirect(
                                v10,
                                *((unsigned __int16 *)v7 - 7),
                                v11,
                                *(v7 - 2),
                                *(_QWORD *)v7) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v18 = 29;
              goto LABEL_39;
            }
LABEL_40:
            if ( v6 >= 0x501u )
              return v5;
          }
LABEL_10:
          v7 += 10;
          goto LABEL_11;
        }
        LOBYTE(v10) = *((_BYTE *)v7 - 16);
        if ( (unsigned int)xxxInternalKeyEventDirect(v10, *((unsigned __int8 *)v7 - 14), v11, *(v7 - 2), *(_QWORD *)v7) )
          goto LABEL_10;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v18 = 30;
LABEL_39:
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_dd(
          v10,
          v12,
          v13,
          v18,
          (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
          v5,
          v6 >= 0x501u);
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 28;
        goto LABEL_34;
      }
    }
    else
    {
      v10 = gpsi;
      if ( (*gpsi & 0x2000) == 0 )
      {
        if ( (*(v7 - 1) & 0xAA) != 0 )
          xxxSynchronizeDWMWindowChanges(
            gpsi,
            &WPP_RECORDER_INITIALIZED,
            &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
        v15 = UpconvertTime(*v7);
        v16 = MilliSecsToQpcCount(v15);
        if ( !v4 )
          v3 = 1;
        if ( (unsigned int)xxxMouseEventDirect(
                             *(v7 - 4),
                             *(v7 - 3),
                             *(v7 - 2),
                             *(v7 - 1),
                             v15,
                             v16,
                             *((_QWORD *)v7 + 1),
                             v4) )
          goto LABEL_10;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v18 = 27;
        goto LABEL_39;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 26;
LABEL_34:
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(v10, (_DWORD)v8, 20, v17, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, v5);
LABEL_11:
        v8 = &WPP_RECORDER_INITIALIZED;
      }
    }
    ++v5;
  }
  while ( v5 < a1 );
  if ( v3 )
    xxxWaitForDITMouseInjectionFlush(v10, &WPP_RECORDER_INITIALIZED, &WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
  return v5;
}
