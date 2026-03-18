/*
 * XREFs of xxxEndScroll @ 0x1C0245424
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0113AF8 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C02465A0 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0246710 (xxxTrackThumb.c)
 * Callees:
 *     FindTimer @ 0x1C000BFEC (FindTimer.c)
 *     xxxReleaseCapture @ 0x1C0038EA0 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     _GetMessagePos @ 0x1C0106FF0 (_GetMessagePos.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C015D040 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D40E8 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C0241484 (zzzShowCaret.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C0243EB4 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C02445A0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0244694 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244D34 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

unsigned __int8 **__fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  unsigned __int8 **result; // rax
  unsigned __int8 *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // r9
  __int64 (__fastcall *v8)(struct tagWND *); // rax
  struct tagSBCALC *v9; // rdx
  __int64 v10; // r8
  struct tagSBWND *v11; // rax
  __int64 (__fastcall *v12)(struct tagWND *); // rcx
  int MessagePos; // eax
  __int64 v14; // r8
  struct tagWND *v15; // rdx
  struct tagWND *v16; // rdx
  unsigned int v17; // r8d
  struct tagWND *v18; // rcx
  unsigned __int64 v19; // [rsp+50h] [rbp+8h]

  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  v5 = result[90];
  if ( !v5 )
    return result;
  result = *(unsigned __int8 ***)(gptiCurrent + 432LL);
  if ( result[13] != (unsigned __int8 *)a1 )
    return result;
  if ( !*((_QWORD *)v5 + 6) )
    return result;
  v6 = *((_DWORD *)v5 + 14);
  *((_DWORD *)v5 + 14) = 0;
  xxxReleaseCapture();
  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  if ( v5 != result[90] )
    return result;
  v8 = (__int64 (__fastcall *)(struct tagWND *))*((_QWORD *)v5 + 6);
  if ( (char *)v8 != (char *)xxxTrackThumb )
  {
    v12 = xxxTrackBox;
    if ( v8 == xxxTrackBox )
    {
      if ( *((_QWORD *)v5 + 8) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *((_QWORD *)v5 + 8) = 0LL;
      }
      MessagePos = GetMessagePos((__int64)v12);
      v14 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v14 + 26) & 0x40) != 0 )
        LODWORD(v19) = *(_DWORD *)(v14 + 96) - (__int16)MessagePos;
      else
        LODWORD(v19) = (__int16)MessagePos - *(_DWORD *)(v14 + 88);
      HIDWORD(v19) = SHIWORD(MessagePos) - *(_DWORD *)(v14 + 92);
      if ( PtInRect((_DWORD *)v5 + 8, v19) )
        zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v5, 0, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *((_DWORD *)v5 + 20) = *(_DWORD *)(*((_QWORD *)v5 + 12) + 12LL);
  v9 = (struct tagSBCALC *)*((_QWORD *)v5 + 3);
  if ( !v9
    || (xxxDoScroll(*((struct _LARGE_STRING ***)v5 + 2), v9, 4u, *((_DWORD *)v5 + 20), (*(_DWORD *)v5 >> 1) & 1),
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
        v5 == result[90]) )
  {
    v10 = *(unsigned int *)v5;
    if ( (v10 & 4) != 0 )
    {
      v11 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1, (__int64)v9, v10, v7);
      if ( v11 )
        DrawCtlThumb(v11);
    }
    else
    {
      xxxDrawThumb(a1, v9, ((unsigned int)v10 >> 1) & 1);
    }
LABEL_22:
    result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
    if ( v5 == result[90] )
    {
      v15 = (struct tagWND *)*((_QWORD *)v5 + 3);
      if ( !v15
        || (xxxDoScroll(*((struct _LARGE_STRING ***)v5 + 2), v15, 8u, 0, (*(_DWORD *)v5 >> 1) & 1),
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
            v5 == result[90]) )
      {
        SetOrClrWF(0, (__int64)a1, 0x610u, 1);
        SetOrClrWF(0, (__int64)a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v16 = *(struct tagWND **)(gpqForeground + 112LL);
          if ( v16 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              xxxWindowEvent(0x80000005, v16, 0, 3u, 0x21u);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v17 = -4;
        else
          v17 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, a1, v17, 0, 0);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( v5 == result[90] )
        {
          v18 = (struct tagWND *)*((_QWORD *)v5 + 2);
          if ( !v18 || (zzzShowCaret(v18), result = (unsigned __int8 **)*((_QWORD *)a1 + 2), v5 == result[90]) )
          {
            *((_QWORD *)v5 + 6) = 0LL;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>((__int64)v5);
          }
        }
      }
    }
  }
  return result;
}
