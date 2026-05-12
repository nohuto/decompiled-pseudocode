/*
 * XREFs of RaDriverSystemControlIrp @ 0x1C0075020
 * Callers:
 *     <none>
 * Callees:
 *     RaIsDeviceDFxPoweredDown @ 0x1C000BD40 (RaIsDeviceDFxPoweredDown.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0033520 (WPP_SF_qqD.c)
 *     RaInsertDFxQueue @ 0x1C0034334 (RaInsertDFxQueue.c)
 *     RaWmiDispatchIrp @ 0x1C00750B4 (RaWmiDispatchIrp.c)
 */

__int64 __fastcall RaDriverSystemControlIrp(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x18u,
      (__int64)&WPP_c75ef678420536b919220fd58d40bf93_Traceguids,
      a1,
      a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  if ( !RaIsDeviceDFxPoweredDown(a1) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
  {
    v4 = RaWmiDispatchIrp(a1, a2);
    v5 = v4;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v7 = v4;
      WPP_SF_qqD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x19u,
        (__int64)&WPP_c75ef678420536b919220fd58d40bf93_Traceguids,
        a1,
        a2,
        v7);
    }
    return v5;
  }
  else
  {
    result = RaInsertDFxQueue(a1, a2);
    if ( !(_DWORD)result )
      return 259LL;
  }
  return result;
}
