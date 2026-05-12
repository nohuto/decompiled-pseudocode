/*
 * XREFs of StorEnablePassiveInitialization @ 0x1C0036F3C
 * Callers:
 *     StorPortNotification @ 0x1C000D230 (StorPortNotification.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0031E4C (WPP_SF_.c)
 */

char __fastcall StorEnablePassiveInitialization(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 - 16);
  if ( (*(_BYTE *)(*(_QWORD *)v2 + 104LL) & 0x10) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)v2 + 4472LL) = a2;
    return 1;
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 )
    {
      if ( BYTE1(WPP_GLOBAL_Control->Timer) )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x17u,
          (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
    }
    return 0;
  }
}
