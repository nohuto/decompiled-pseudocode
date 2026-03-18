/*
 * XREFs of xxxEndScroll @ 0x1C02466C4
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0112B9C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C0247B50 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0247CC0 (xxxTrackThumb.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00359E0 (xxxReleaseCapture.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     PtInRect @ 0x1C00B20DC (PtInRect.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     _GetMessagePos @ 0x1C0106D20 (_GetMessagePos.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01597A8 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D4E90 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C0242724 (zzzShowCaret.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0245154 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0245840 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0245934 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245FD4 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

unsigned __int8 **__fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  unsigned __int8 **result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 (__fastcall *v7)(struct tagWND *); // rax
  struct tagSBCALC *v8; // rdx
  struct tagSBWND *v9; // rax
  __int64 (__fastcall *v10)(struct tagWND *); // rcx
  int MessagePos; // eax
  __int64 v12; // r8
  struct tagWND *v13; // rdx
  struct tagWND *v14; // rdx
  unsigned int v15; // r8d
  struct tagWND *v16; // rcx
  unsigned __int64 v17; // [rsp+50h] [rbp+8h]

  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  v5 = (__int64)result[89];
  if ( !v5 )
    return result;
  result = *(unsigned __int8 ***)(gptiCurrent + 424LL);
  if ( result[13] != (unsigned __int8 *)a1 )
    return result;
  if ( !*(_QWORD *)(v5 + 48) )
    return result;
  v6 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v5 + 56) = 0;
  xxxReleaseCapture();
  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  if ( (unsigned __int8 *)v5 != result[89] )
    return result;
  v7 = *(__int64 (__fastcall **)(struct tagWND *))(v5 + 48);
  if ( (char *)v7 != (char *)xxxTrackThumb )
  {
    v10 = xxxTrackBox;
    if ( v7 == xxxTrackBox )
    {
      if ( *(_QWORD *)(v5 + 64) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *(_QWORD *)(v5 + 64) = 0LL;
      }
      MessagePos = GetMessagePos((__int64)v10);
      v12 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 )
        LODWORD(v17) = *(_DWORD *)(v12 + 96) - (__int16)MessagePos;
      else
        LODWORD(v17) = (__int16)MessagePos - *(_DWORD *)(v12 + 88);
      HIDWORD(v17) = SHIWORD(MessagePos) - *(_DWORD *)(v12 + 92);
      if ( PtInRect((_DWORD *)(v5 + 32), v17) )
        zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v5, 0, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(*(_QWORD *)(v5 + 96) + 12LL);
  v8 = *(struct tagSBCALC **)(v5 + 24);
  if ( !v8
    || (xxxDoScroll(*(struct _LARGE_STRING ***)(v5 + 16), v8, 4u, *(_DWORD *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
        (unsigned __int8 *)v5 == result[89]) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v9 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1);
      if ( v9 )
        DrawCtlThumb(v9);
    }
    else
    {
      xxxDrawThumb(a1, v8, (*(_DWORD *)v5 >> 1) & 1);
    }
LABEL_22:
    result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
    if ( (unsigned __int8 *)v5 == result[89] )
    {
      v13 = *(struct tagWND **)(v5 + 24);
      if ( !v13
        || (xxxDoScroll(*(struct _LARGE_STRING ***)(v5 + 16), v13, 8u, 0, (*(_DWORD *)v5 >> 1) & 1),
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
            (unsigned __int8 *)v5 == result[89]) )
      {
        SetOrClrWF(0, (__int64)a1, 0x610u, 1);
        SetOrClrWF(0, (__int64)a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v14 = *(struct tagWND **)(gpqForeground + 112LL);
          if ( v14 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
              xxxWindowEvent(0x80000005, v14, 0, 3u, 0x21u);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v15 = -4;
        else
          v15 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, a1, v15, 0, 0);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v5 == result[89] )
        {
          v16 = *(struct tagWND **)(v5 + 16);
          if ( !v16
            || (zzzShowCaret(v16), result = (unsigned __int8 **)*((_QWORD *)a1 + 2), (unsigned __int8 *)v5 == result[89]) )
          {
            *(_QWORD *)(v5 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL) = 0LL;
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v5);
          }
        }
      }
    }
  }
  return result;
}
