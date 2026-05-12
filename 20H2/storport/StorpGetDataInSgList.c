/*
 * XREFs of StorpGetDataInSgList @ 0x1C003B974
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000EDC0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003324C (WPP_SF_.c)
 */

__int64 __fastcall StorpGetDataInSgList(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( (*(_BYTE *)(**(_QWORD **)(a1 - 16) + 4515LL) & 4) != 0 )
    return 3238002694LL;
  result = 0LL;
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Cu,
        (__int64)&WPP_42621249f2c9312d441c8bf8760aa631_Traceguids);
    }
    return 3238002694LL;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 96);
  else
    v4 = *(_QWORD *)(a2 + 48);
  *a3 = *(_QWORD *)(v4 + 152);
  return result;
}
