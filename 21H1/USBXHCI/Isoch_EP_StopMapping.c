/*
 * XREFs of Isoch_EP_StopMapping @ 0x1C0040CC0
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C0001E00 (TR_AttemptStateChange.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Isoch_EP_StopMapping(__int64 a1)
{
  __int32 v2; // ebx
  __int64 result; // rax

  v2 = _InterlockedExchange((volatile __int32 *)(a1 + 108), 1);
  if ( v2 == 4 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 320),
      0LL);
  result = (unsigned int)(v2 - 2);
  if ( (result & 0xFFFFFFFD) == 0 )
    return TR_AttemptStateChange(a1, 1, 0);
  return result;
}
