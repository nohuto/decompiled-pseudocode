/*
 * XREFs of RaDriverScsiIrp @ 0x1C0009AE0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitScsiIrp @ 0x1C0009B80 (RaUnitScsiIrp.c)
 *     WPP_SF_qq @ 0x1C00334D0 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0033520 (WPP_SF_qqD.c)
 *     RaidAdapterScsiIrp @ 0x1C0079120 (RaidAdapterScsiIrp.c)
 */

__int64 __fastcall RaDriverScsiIrp(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_c75ef678420536b919220fd58d40bf93_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(_DWORD **)(a1 + 64);
  if ( *v4 )
  {
    if ( *v4 != 1 )
    {
      v6 = -1073741823;
      goto LABEL_7;
    }
    v5 = RaUnitScsiIrp(v4, a2);
  }
  else
  {
    v5 = RaidAdapterScsiIrp(v4, a2);
  }
  v6 = v5;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_c75ef678420536b919220fd58d40bf93_Traceguids, a1, a2, v6);
  }
  return v6;
}
