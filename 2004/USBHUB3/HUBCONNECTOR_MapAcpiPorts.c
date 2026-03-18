/*
 * XREFs of HUBCONNECTOR_MapAcpiPorts @ 0x1C007C04C
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0073E00 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     HUBCONNECTOR_RegisterPort @ 0x1C007B32C (HUBCONNECTOR_RegisterPort.c)
 */

__int64 __fastcall HUBCONNECTOR_MapAcpiPorts(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rbx
  __int128 v4; // xmm0

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 2360) - 248LL;
  if ( a1 != *(_QWORD *)(a1 + 2360) - 2360LL )
  {
    do
    {
      if ( (*(_BYTE *)(v2 + 204) & 5) == 5 )
      {
        v4 = *(_OWORD *)(v2 + 1352);
        *(_DWORD *)(v2 + 1368) = 2;
        *(_OWORD *)(v2 + 1372) = v4;
        *(_QWORD *)(v2 + 1416) = (*(_DWORD *)(v2 + 1380) & 0x7F8000 | (unsigned __int64)(HIWORD(*(_DWORD *)(v2 + 1380)) & 0x7F80)) >> 7;
        v1 = HUBCONNECTOR_RegisterPort(v2);
        if ( v1 < 0 )
          break;
      }
      v2 = *(_QWORD *)(v2 + 248) - 248LL;
    }
    while ( a1 != v2 - 2112 );
  }
  return (unsigned int)v1;
}
