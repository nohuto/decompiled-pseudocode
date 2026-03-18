/*
 * XREFs of IntelPptFilter_DecreaseEndpointCount @ 0x1C007A090
 * Callers:
 *     IntelPptFilter_FilterCommandCompletion @ 0x1C007A220 (IntelPptFilter_FilterCommandCompletion.c)
 *     IntelPptFilter_FilterEndpointConfigureCommand @ 0x1C007A2E8 (IntelPptFilter_FilterEndpointConfigureCommand.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 */

_UNKNOWN **__fastcall IntelPptFilter_DecreaseEndpointCount(__int64 a1, int a2)
{
  int v2; // edi
  _UNKNOWN **result; // rax
  int v5; // r8d
  char v6; // al

  v2 = a2;
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(_DWORD *)(a1 + 48);
    v6 = v5 - a2;
    LOBYTE(a2) = 4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_DD(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                            a2,
                            16,
                            12,
                            (__int64)&WPP_0f3e6ee050e235607aa5f43a2d147c91_Traceguids,
                            v5,
                            v6);
  }
  *(_DWORD *)(a1 + 48) -= v2;
  return result;
}
