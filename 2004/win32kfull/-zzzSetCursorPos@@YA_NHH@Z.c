/*
 * XREFs of ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C003B2AC
 * Callers:
 *     NtUserSetCursorPos @ 0x1C003A370 (NtUserSetCursorPos.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C003B470 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C003DD00 (CheckWinstaAttributeAccess.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00AE114 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C01070C8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall zzzSetCursorPos(unsigned int a1, unsigned int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rbx
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // r9
  __m128i v8; // xmm0
  int v10; // r9d
  int v11; // edx
  int v12; // ecx

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)CurrentLogicalCursorThread + 52)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 10;
LABEL_15:
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(v6, v5, 20, v10, (__int64)&WPP_037677dad9fa3bee606ee513defd7b96_Traceguids);
      return 0;
    }
    return 0;
  }
  v6 = *((_QWORD *)CurrentLogicalCursorThread + 56);
  if ( v6 && v6 != grpdeskRitInput )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 11;
      goto LABEL_15;
    }
    return 0;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleExplicit(
                        1LL,
                        CurrentLogicalCursorThread,
                        *(_QWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 52) + 880LL),
                        *(_DWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 52) + 12LL) & 0x80000000) )
  {
    EtwTraceUIPIInputError(CurrentLogicalCursorThread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 12;
      goto LABEL_15;
    }
    return 0;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    SaveCursorPosition(__PAIR64__(a2, a1));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(v12, v11, 20, 13, (__int64)&WPP_037677dad9fa3bee606ee513defd7b96_Traceguids);
    }
  }
  else
  {
    zzzInternalSetCursorPos(a1, a2, 1LL, 0LL);
    v7 = *(_QWORD *)(*gpDispInfo + 24LL);
    v8 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8);
    *((_DWORD *)&gaptMouse + 6 * gptInd) = (unsigned __int16)gptCursorAsync | ((unsigned __int16)(v8.m128i_i16[0]
                                                                                                - v7
                                                                                                - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = LOWORD(gptCursorAsync->y) | ((v8.m128i_i32[1] - HIDWORD(v7) - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = 0LL;
    gptInd = (gptInd + 1) & 0x3F;
  }
  return 1;
}
