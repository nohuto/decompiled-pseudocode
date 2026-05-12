/*
 * XREFs of RaDriverPnpIrp @ 0x1C0007D30
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitPnpIrp @ 0x1C0007DD0 (RaUnitPnpIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0013AB4 (RaidAdapterPnpIrp.c)
 *     WPP_SF_qqD @ 0x1C0032120 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaDriverPnpIrp(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      20LL,
      &WPP_c75ef678420536b919220fd58d40bf93_Traceguids,
      a1,
      a2,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL));
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
    v5 = RaUnitPnpIrp(v4, a2);
  }
  else
  {
    v5 = RaidAdapterPnpIrp(v4, (PIRP)a2);
  }
  v6 = v5;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_c75ef678420536b919220fd58d40bf93_Traceguids, a1, a2, v6);
  }
  return v6;
}
