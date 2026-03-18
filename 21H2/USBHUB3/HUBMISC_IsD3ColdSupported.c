/*
 * XREFs of HUBMISC_IsD3ColdSupported @ 0x1C003122C
 * Callers:
 *     HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1C0011BF0 (HUBPSM30_CheckingIsD3ColdIsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C002B5E4 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall HUBMISC_IsD3ColdSupported(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned __int16 v7; // r9
  int v9; // [rsp+20h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(a1 + 1432),
      (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1636LL) >> 12) & 1,
      *(_DWORD *)(a1 + 204) & 1,
      a4,
      v9);
  v5 = *(_QWORD *)(a1 + 1328);
  if ( (*(_DWORD *)(v5 + 1632) & 0x8000) != 0
    && (*(_DWORD *)(v5 + 1636) & 0x1000) != 0
    && (*(_DWORD *)(a1 + 204) & 1) == 0
    && *(_DWORD *)(v5 + 2700) == 4 )
  {
    v6 = 3089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 117;
LABEL_15:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 4u, 5u, v7, (__int64)&WPP_f631619360663f684a1deb181f774097_Traceguids);
    }
  }
  else
  {
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 44LL) & 2) == 0
      || (*(_DWORD *)(a1 + 204) & 1) != 0
      || *(_DWORD *)(v5 + 2700) != 3
      || (*(_DWORD *)(v5 + 1644) & 0x8000000) == 0 )
    {
      v6 = 3005;
      _InterlockedAnd((volatile signed __int32 *)(v5 + 1636), 0xFFEFFFFF);
      return v6;
    }
    v6 = 3089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 118;
      goto LABEL_15;
    }
  }
  return v6;
}
