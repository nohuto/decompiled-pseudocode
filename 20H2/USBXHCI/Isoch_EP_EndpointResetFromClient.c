/*
 * XREFs of Isoch_EP_EndpointResetFromClient @ 0x1C0041F80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 */

_UNKNOWN **__fastcall Isoch_EP_EndpointResetFromClient(__int64 a1)
{
  _UNKNOWN **result; // rax
  int v3; // edx

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v3) = 4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_dd(
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
                            v3,
                            14,
                            14,
                            (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
                            *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
                            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  *(_BYTE *)(a1 + 334) = 1;
  return result;
}
