/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C01064C0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C0106440 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C021E230 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 *     GetPrimaryMonitorRect @ 0x1C0106640 (GetPrimaryMonitorRect.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, unsigned int a3)
{
  __m128i *PrimaryMonitorRect; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  bool v17; // zf
  _BYTE v18[24]; // [rsp+40h] [rbp-18h] BYREF
  BOOL v19; // [rsp+68h] [rbp+10h] BYREF

  EtwTraceChangeDisplayModeBroadcast(0LL);
  PrimaryMonitorRect = (__m128i *)GetPrimaryMonitorRect(v18);
  v7 = _mm_srli_si128(*PrimaryMonitorRect, 8);
  xxxBroadcastMessageEx(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    0x7Eu,
    *(unsigned __int16 *)(gpsi + 6996LL),
    (struct _LARGE_STRING *)((unsigned __int16)(v7.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRect) | (unsigned __int64)(int)((v7.m128i_i32[1] << 16) - (HIDWORD(PrimaryMonitorRect->m128i_i64[0]) << 16))),
    1u,
    0LL,
    1,
    a3);
  if ( (dword_1C033A0E0 & 1) == 0 )
  {
    dword_1C033A0E0 |= 1u;
    v9 = *(_QWORD *)(*(_QWORD *)(GetDispInfo(v9, v8, v10, v11) + 96) + 40LL);
    word_1C033A0E4 = *(_WORD *)(v9 + 64);
  }
  v13 = *(_QWORD *)(*(_QWORD *)(GetDispInfo(v9, v8, v10, v11) + 96) + 40LL);
  result = *(unsigned __int16 *)(v13 + 64);
  if ( word_1C033A0E4 != (_WORD)result )
  {
    word_1C033A0E4 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v13, v12, v14, v15) + 96) + 40LL) + 64LL);
    v17 = word_1C033A0E4 == *(_WORD *)(gpsi + 6998LL);
    result = v17;
    v19 = v17;
    if ( !v17 )
      result = ZwUpdateWnfStateData(&WNF_SPI_PRIMARY_MONITOR_DPI_CHANGED, &v19, 4LL, 0LL, *(_QWORD *)&gSessionId, 0, 0);
  }
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0x1Au, 0LL, 0LL, 1u, 0LL, 1, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0x15u, 0LL, 0LL, 1u, 0LL, 1, a3);
  }
  return result;
}
