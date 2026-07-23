/*
 * XREFs of PopDirectedDripsQueryEnabledMitigations @ 0x1407CC154
 * Callers:
 *     PopDirectedDripsEngage @ 0x140568AF4 (PopDirectedDripsEngage.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6EC48 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     Feature_DirectedFx__private_ReportDeviceUsage @ 0x1403F8148 (Feature_DirectedFx__private_ReportDeviceUsage.c)
 *     PopDirectedDripsQueryPs4Support @ 0x1407CC1EC (PopDirectedDripsQueryPs4Support.c)
 *     PopDirectedDripsQueryRegistryValues @ 0x1407CC2A4 (PopDirectedDripsQueryRegistryValues.c)
 */

void __fastcall PopDirectedDripsQueryEnabledMitigations(__int64 a1)
{
  char v1; // si
  char v2; // di
  unsigned int v4; // ebx
  int Ps4Support; // eax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v1 = 0;
  v2 = 0;
  PopDirectedDripsQueryRegistryValues(a1, &v6);
  v4 = v6;
  if ( (v6 & 1) != 0 )
  {
    v1 = 1;
    v4 = v6 & 0xFFFFFFFE;
  }
  if ( (v4 & 2) != 0 )
  {
    v2 = 1;
    v4 &= ~2u;
  }
  if ( (v4 & 8) == 0 )
  {
    Ps4Support = PopDirectedDripsQueryPs4Support();
    if ( Ps4Support == 1 )
    {
      v2 = 1;
    }
    else if ( Ps4Support )
    {
      v2 = 0;
    }
    Feature_DirectedFx__private_ReportDeviceUsage();
  }
  if ( v1 )
    v4 |= 1u;
  if ( v2 )
    v4 |= 2u;
  *(_DWORD *)(a1 + 48) = v4;
}
