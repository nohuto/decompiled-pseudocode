/*
 * XREFs of StorEnablePassiveInitialization @ 0x1C003832C
 * Callers:
 *     StorPortNotification @ 0x1C000E7E0 (StorPortNotification.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003324C (WPP_SF_.c)
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
          (__int64)&WPP_42621249f2c9312d441c8bf8760aa631_Traceguids);
    }
    return 0;
  }
}
