/*
 * XREFs of HUBMISC_IsD3ColdSupported @ 0x1C0030B88
 * Callers:
 *     HUBPSM30_CheckingIsD3ColdIsEnabled @ 0x1C00116D0 (HUBPSM30_CheckingIsD3ColdIsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C002AF04 (WPP_RECORDER_SF_dddd.c)
 */

__int64 __fastcall HUBMISC_IsD3ColdSupported(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rcx
  unsigned int v6; // edi
  int v8; // [rsp+20h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(a1 + 1432),
      (*(_DWORD *)(*(_QWORD *)(a1 + 1328) + 1636LL) >> 12) & 1,
      *(_DWORD *)(a1 + 204) & 1,
      a4,
      v8);
  v5 = *(_DWORD **)(a1 + 1328);
  if ( (v5[408] & 0x8000) != 0 && (v5[409] & 0x1000) != 0 && (*(_DWORD *)(a1 + 204) & 1) == 0 && v5[675] == 4 )
  {
    v6 = 3089;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), 4u, 5u, 0x75u, (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 44LL) & 2) != 0 )
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(a1 + 1328) + 1636LL), 0x20u);
  }
  else
  {
    return 3005;
  }
  return v6;
}
