/*
 * XREFs of ?zzzSetCursorPos@@YG_NHH@Z @ 0x7C9A8
 * Callers:
 *     _NtUserSetCursorPos@8 @ 0xAE922 (_NtUserSetCursorPos@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     _CheckWinstaAttributeAccess@4 @ 0x7FB22 (_CheckWinstaAttributeAccess@4.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0xA4996 (-IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall zzzSetCursorPos(struct tagPOINT *a1, LONG a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // esi
  int v7; // ecx
  int v9; // ebx
  int v10; // edi
  int v11; // esi
  unsigned int v12; // edx
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+18h] [ebp-8h]

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v6 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 688) & 0x8000000) != 0 )
    v6 = *(_DWORD *)(ThreadWin32Thread + 848);
  if ( !CheckWinstaAttributeAccess(0x10u) && !IsImmersiveAppRestricted(*(_DWORD *)(v6 + 232)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 10, &WPP_037677dad9fa3bee606ee513defd7b96_Traceguids);
    return 0;
  }
  v7 = *(_DWORD *)(v6 + 248);
  if ( v7 && v7 != _grpdeskRitInput )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 11, &WPP_037677dad9fa3bee606ee513defd7b96_Traceguids);
    return 0;
  }
  if ( !IsGpqForegroundAccessibleExplicit(
          1,
          v6,
          *(_DWORD *)(*(_DWORD *)(v6 + 232) + 8) & 0x80000000,
          *(_DWORD *)(*(_DWORD *)(v6 + 232) + 496),
          *(_DWORD *)(*(_DWORD *)(v6 + 232) + 500)) )
  {
    EtwTraceUIPIInputError(
      v6,
      0,
      _gpqForeground,
      *(_DWORD *)(_gpqForeground + 316),
      *(_DWORD *)(_gpqForeground + 320),
      1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 12, &WPP_037677dad9fa3bee606ee513defd7b96_Traceguids);
    return 0;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(_gptiCurrent) )
  {
    SaveCursorPosition(a1, a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(20, 13, &WPP_037677dad9fa3bee606ee513defd7b96_Traceguids);
  }
  else
  {
    zzzInternalSetCursorPos(a1, a2, 1, 0);
    v13 = *(_DWORD *)(*_gpDispInfo + 16);
    v14 = *(_DWORD *)(*_gpDispInfo + 24);
    _gaptMouse[4 * _gptInd] = (unsigned __int16)_gptCursorAsync | ((unsigned __int16)(*(_DWORD *)(*_gpDispInfo + 20)
                                                                                    - *(_DWORD *)(*_gpDispInfo + 12)
                                                                                    - 1) << 16);
    _gaptMouse[4 * _gptInd + 1] = LOWORD(_gptCursorAsync->y) | ((unsigned __int16)(v14 - v13 - 1) << 16);
    v9 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v11 = MEMORY[0xFFDF0324];
      v12 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v11 = MEMORY[0xFFDF0324];
          v12 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v9 = MEMORY[0xFFDF0004];
      }
      v10 = v9 * (v11 << 8) + (((unsigned int)v9 * (unsigned __int64)v12) >> 24);
    }
    else
    {
      v10 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    _gaptMouse[4 * _gptInd + 2] = v10;
    _gaptMouse[4 * _gptInd + 3] = 0;
    _gptInd = (_gptInd + 1) & 0x3F;
  }
  return 1;
}
