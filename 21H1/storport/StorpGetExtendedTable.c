/*
 * XREFs of StorpGetExtendedTable @ 0x1C003A560
 * Callers:
 *     StorPortNotification @ 0x1C000D230 (StorPortNotification.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0031E4C (WPP_SF_.c)
 */

__int128 *__fastcall StorpGetExtendedTable(__int64 a1, __int64 *a2)
{
  __int128 *result; // rax
  __int64 v5; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int128 *)&retaddr;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      result = (__int128 *)WPP_SF_(
                             (__int64)WPP_GLOBAL_Control->AttachedDevice,
                             0xAu,
                             (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        result = (__int128 *)WPP_SF_(
                               (__int64)WPP_GLOBAL_Control->AttachedDevice,
                               0xBu,
                               (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          result = (__int128 *)WPP_SF_(
                                 (__int64)WPP_GLOBAL_Control->AttachedDevice,
                                 0xCu,
                                 (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            result = (__int128 *)WPP_SF_(
                                   (__int64)WPP_GLOBAL_Control->AttachedDevice,
                                   0xDu,
                                   (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            result = (__int128 *)WPP_SF_(
                                   (__int64)WPP_GLOBAL_Control->AttachedDevice,
                                   0xEu,
                                   (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
          }
        }
      }
    }
  }
  if ( a2 )
  {
    if ( a1 )
    {
      result = *(__int128 **)(a1 - 16);
      v5 = *(_QWORD *)result + 4712LL;
      *(_OWORD *)v5 = StorportExtensionTable;
      *(_OWORD *)(v5 + 16) = xmmword_1C0068670;
      *(_OWORD *)(v5 + 32) = xmmword_1C0068680;
      *(_OWORD *)(v5 + 48) = xmmword_1C0068690;
      *(_OWORD *)(v5 + 64) = xmmword_1C00686A0;
      *(_QWORD *)(v5 + 80) = qword_1C00686B0;
      *a2 = v5;
    }
    else
    {
      result = &StorportExtensionTable;
      *a2 = (__int64)&StorportExtensionTable;
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    return (__int128 *)WPP_SF_(
                         (__int64)WPP_GLOBAL_Control->AttachedDevice,
                         0xFu,
                         (__int64)&WPP_258a4a2f60cd3686bc4022bc720d1057_Traceguids);
  }
  return result;
}
