/*
 * XREFs of xxxSendInput @ 0x1C00BA53C
 * Callers:
 *     NtUserSendInput @ 0x1C00BA360 (NtUserSendInput.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C021344C (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C02135B4 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0258EC0 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0258F98 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     xxxSynchronizeDWMWindowChanges @ 0x1C0014FB4 (xxxSynchronizeDWMWindowChanges.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002F594 (WPP_RECORDER_SF_dd.c)
 *     xxxInternalKeyEventDirect @ 0x1C00BA7D0 (xxxInternalKeyEventDirect.c)
 *     WPP_RECORDER_SF_d @ 0x1C00BCF04 (WPP_RECORDER_SF_d.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00BD284 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C0114314 (xxxWaitForDITMouseInjectionFlush.c)
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
  __int64 v12; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  int v16; // r9d
  unsigned __int16 v17; // r9
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+30h] [rbp-38h]

  v3 = 0;
  v4 = glDitMouseHandling == 0;
  v5 = 0;
  v6 = *(_WORD *)(gptiCurrent + 632LL);
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
            LODWORD(v19) = v6 >= 0x501u;
            LODWORD(v18) = v5;
            WPP_RECORDER_SF_dd(
              v10,
              2u,
              (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
              v10 + 30,
              (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
              v18,
              v19);
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
              v17 = 29;
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
        v17 = 30;
LABEL_39:
        LODWORD(v19) = v6 >= 0x501u;
        LODWORD(v18) = v5;
        WPP_RECORDER_SF_dd(v10, 2u, v12, v17, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, v18, v19);
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 28;
        goto LABEL_34;
      }
    }
    else
    {
      v10 = gpsi;
      if ( (*gpsi & 0x2000) == 0 )
      {
        if ( (*(v7 - 1) & 0xAA) != 0 )
          xxxSynchronizeDWMWindowChanges();
        v14 = UpconvertTime(*v7);
        v15 = MilliSecsToQpcCount(v14);
        if ( !v4 )
          v3 = 1;
        if ( (unsigned int)xxxMouseEventDirect(
                             *(v7 - 4),
                             *(v7 - 3),
                             *(v7 - 2),
                             *(v7 - 1),
                             v14,
                             v15,
                             *((_QWORD *)v7 + 1),
                             v4) )
          goto LABEL_10;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v17 = 27;
        goto LABEL_39;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 26;
LABEL_34:
        LODWORD(v18) = v5;
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(v10, (_DWORD)v8, 20, v16, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids, v18);
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
