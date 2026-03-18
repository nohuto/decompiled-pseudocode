/*
 * XREFs of Isoch_MappingLoop @ 0x1C000A6A0
 * Callers:
 *     Isoch_MapTransfers @ 0x1C000A788 (Isoch_MapTransfers.c)
 * Callees:
 *     Isoch_RetrieveNextStage @ 0x1C0007C30 (Isoch_RetrieveNextStage.c)
 *     Isoch_MapStage @ 0x1C0008740 (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0008870 (Isoch_PrepareStage.c)
 *     TR_AttemptStateChange @ 0x1C000A724 (TR_AttemptStateChange.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0013618 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Isoch_MappingLoop(_QWORD *a1)
{
  char i; // di
  __int64 result; // rax
  int v4; // edx
  _QWORD *v5; // rcx

  for ( i = 0; ; ++i )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v4 = *(unsigned __int8 *)(a1[6] + 135LL);
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(a1[7] + 80LL),
        v4,
        14,
        66,
        (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
        *(_BYTE *)(a1[6] + 135LL),
        *(_DWORD *)(a1[7] + 144LL),
        i);
    }
    a1[43] = 0LL;
    if ( !Isoch_RetrieveNextStage((__int64)a1) )
      return TR_AttemptStateChange(a1, 3LL, 2LL);
    result = Isoch_PrepareStage((__int64)a1);
    if ( (_DWORD)result == 1 )
      continue;
    if ( (_DWORD)result == 3 )
      return result;
    if ( (_DWORD)result == 2 )
      break;
    if ( (_DWORD)result == 4 )
      return TR_AttemptStateChange(a1, 3LL, 2LL);
    result = Isoch_MapStage((__int64)a1);
    if ( (_DWORD)result == 2 )
      return result;
    v5 = a1;
    if ( (_DWORD)result == 4 )
      goto LABEL_17;
    result = TR_AttemptStateChange(a1, 3LL, 3LL);
    if ( (_DWORD)result != 3 )
      return result;
  }
  v5 = a1;
LABEL_17:
  result = TR_AttemptStateChange(v5, 3LL, 4LL);
  if ( (_DWORD)result == 3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
             WdfDriverGlobals,
             a1[40],
             -100000000LL);
  return result;
}
