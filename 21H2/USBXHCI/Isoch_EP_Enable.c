/*
 * XREFs of Isoch_EP_Enable @ 0x1C000A630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 */

__int64 __fastcall Isoch_EP_Enable(__int64 a1)
{
  int v2; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v2,
      14,
      13,
      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  *(_BYTE *)(a1 + 334) = 1;
  return 0LL;
}
