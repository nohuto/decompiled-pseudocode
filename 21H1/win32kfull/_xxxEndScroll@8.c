/*
 * XREFs of _xxxEndScroll@8 @ 0x1A391B
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z @ 0xABBE4 (-xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z.c)
 *     _xxxTrackBox@20 @ 0x1A48C7 (_xxxTrackBox@20.c)
 *     _xxxTrackThumb@20 @ 0x1A49F1 (_xxxTrackThumb@20.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     __GetMessagePos@0 @ 0xA9662 (__GetMessagePos@0.c)
 *     _xxxReleaseCapture@0 @ 0xC4E64 (_xxxReleaseCapture@0.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@@@YGXPAX@Z @ 0xF55A4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0FAAA@$0EI@@NSInstrumentation@@@@YGXPAX@Z.c)
 *     _safe_cast_fnid_to_PSBWND@4 @ 0x1436EC (_safe_cast_fnid_to_PSBWND@4.c)
 *     _zzzShowCaret@4 @ 0x19FB39 (_zzzShowCaret@4.c)
 *     ?DrawCtlThumb@@YGXPAUtagSBWND@@@Z @ 0x1A28A9 (-DrawCtlThumb@@YGXPAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YGXPAUtagWND@@0HHH@Z @ 0x1A2E5D (-xxxDoScroll@@YGXPAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z @ 0x1A2EF2 (-xxxDrawThumb@@YGXPAUtagWND@@PAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360 (-zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z.c)
 */

unsigned __int8 **__fastcall xxxEndScroll(int *a1, int a2)
{
  unsigned __int8 **result; // eax
  unsigned __int8 *v5; // edi
  struct tagSBTRACK *v6; // eax
  int (__stdcall *v7)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // eax
  void *v8; // edx
  int *v9; // eax
  int MessagePos; // eax
  int v11; // edx
  int v12; // ecx
  void *v13; // edx
  struct tagEVENTHOOK *v14; // edx
  unsigned int v15; // eax
  struct tagWND *v16; // ecx
  struct tagSBCALC *v17; // [esp+0h] [ebp-10h]
  unsigned int v18; // [esp+4h] [ebp-Ch]
  struct tagSBTRACK *v19; // [esp+Ch] [ebp-4h]

  result = (unsigned __int8 **)a1[2];
  v5 = result[98];
  if ( !v5 )
    return result;
  result = *(unsigned __int8 ***)(_gptiCurrent + 236);
  if ( result[14] != (unsigned __int8 *)a1 )
    return result;
  if ( !*((_DWORD *)v5 + 8) )
    return result;
  v6 = (struct tagSBTRACK *)*((_DWORD *)v5 + 9);
  *((_DWORD *)v5 + 9) = 0;
  v19 = v6;
  xxxReleaseCapture();
  result = (unsigned __int8 **)a1[2];
  if ( v5 != result[98] )
    return result;
  v7 = (int (__stdcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*((_DWORD *)v5 + 8);
  if ( (char *)v7 != (char *)&xxxTrackThumb )
  {
    if ( v7 == xxxTrackBox )
    {
      if ( *((_DWORD *)v5 + 10) )
      {
        FindTimer((unsigned int)a1, 65534, 2u, 1, 0);
        *((_DWORD *)v5 + 10) = 0;
      }
      MessagePos = _GetMessagePos();
      v11 = a1[5];
      if ( (*(_BYTE *)(v11 + 18) & 0x40) != 0 )
        v12 = *(_DWORD *)(v11 + 60) - (__int16)MessagePos;
      else
        v12 = (__int16)MessagePos - *(_DWORD *)(v11 + 52);
      if ( PtInRect((_DWORD *)v5 + 4, v12, SHIWORD(MessagePos) - *(_DWORD *)(v11 + 56)) )
        zzzDrawInvertScrollArea(v5, (int)a1, 0, v19, (int)v17, v18);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *((_DWORD *)v5 + 13) = *(_DWORD *)(*((_DWORD *)v5 + 16) + 12);
  v8 = (void *)*((_DWORD *)v5 + 3);
  if ( !v8
    || (xxxDoScroll(
          v8,
          *((int **)v5 + 2),
          (struct tagWND *)4,
          *((struct tagWND **)v5 + 13),
          (*(_DWORD *)v5 >> 1) & 1,
          (int)v17,
          v18),
        result = (unsigned __int8 **)a1[2],
        v5 == result[98]) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v9 = (int *)safe_cast_fnid_to_PSBWND(a1);
      if ( v9 )
        DrawCtlThumb(v9);
    }
    else
    {
      xxxDrawThumb(a1, (struct tagWND *)((*(_DWORD *)v5 >> 1) & 1), v17, v18);
    }
LABEL_22:
    result = (unsigned __int8 **)a1[2];
    if ( v5 == result[98] )
    {
      v13 = (void *)*((_DWORD *)v5 + 3);
      if ( !v13
        || (xxxDoScroll(v13, *((int **)v5 + 2), (struct tagWND *)8, 0, (*(_DWORD *)v5 >> 1) & 1, (int)v17, v18),
            result = (unsigned __int8 **)a1[2],
            v5 == result[98]) )
      {
        SetOrClrWF(0, (int)a1, 0x610u, 1);
        SetOrClrWF(0, (int)a1, 0x620u, 1);
        if ( _gpqForeground )
        {
          v14 = *(struct tagEVENTHOOK **)(_gpqForeground + 60);
          if ( v14 )
          {
            if ( _gpqForeground == *(_DWORD *)(_gptiCurrent + 236) )
              xxxWindowEvent(0x80000005, v14, 0, (struct tagWND *)3, 33);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v15 = -4;
        else
          v15 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, (struct tagEVENTHOOK *)a1, v15, 0, 0);
        result = (unsigned __int8 **)a1[2];
        if ( v5 == result[98] )
        {
          v16 = (struct tagWND *)*((_DWORD *)v5 + 2);
          if ( !v16 || (zzzShowCaret(v16), result = (unsigned __int8 **)a1[2], v5 == result[98]) )
          {
            *((_DWORD *)v5 + 8) = 0;
            *(_DWORD *)(a1[2] + 392) = 0;
            HMAssignmentUnlock(v5 + 8);
            HMAssignmentUnlock(v5 + 12);
            HMAssignmentUnlock(v5 + 4);
            return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<20480,72>>(v5);
          }
        }
      }
    }
  }
  return result;
}
