/*
 * XREFs of HalpHvBuildDeviceId @ 0x1409A3458
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A4ABC (HalpTimerInitializeHypervisorTimer.c)
 *     HalpHvMapDeviceMsiRange @ 0x1409A35D8 (HalpHvMapDeviceMsiRange.c)
 *     HalpHvUnmapDeviceMsiRange @ 0x1409A3730 (HalpHvUnmapDeviceMsiRange.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpHvBuildDeviceId(__int64 a1, int *a2, char a3, __int64 a4)
{
  int v4; // ecx
  __int16 v5; // ax
  int v6; // ecx
  char v7; // al
  int v8; // ecx
  int v9; // ecx
  __int16 v10; // ax

  v4 = *a2;
  *(_QWORD *)a4 = 0x4000000000000000LL;
  v5 = *((_WORD *)a2 + 2);
  *(_WORD *)(a4 + 2) = v5;
  if ( v4 )
  {
    v6 = v4 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        v7 = *((_BYTE *)a2 + 8);
        *(_WORD *)(a4 + 6) |= 4u;
        *(_BYTE *)(a4 + 5) = v7;
        LOBYTE(v5) = *((_BYTE *)a2 + 9);
        *(_BYTE *)(a4 + 4) = v5;
      }
    }
    else
    {
      v8 = *((unsigned __int8 *)a2 + 10);
      *(_WORD *)(a4 + 6) &= ~4u;
      *(_BYTE *)(a4 + 1) = *((_BYTE *)a2 + 8);
      LOBYTE(v5) = 8 * *((_BYTE *)a2 + 9);
      *(_BYTE *)a4 = v5 | v8 & 7;
    }
  }
  else
  {
    v9 = *((unsigned __int8 *)a2 + 10);
    *(_BYTE *)(a4 + 1) = *((_BYTE *)a2 + 8);
    v10 = *(_WORD *)(a4 + 6);
    *(_BYTE *)a4 = (8 * *((_BYTE *)a2 + 9)) | v9 & 7;
    v5 = v10 & 0xFFF8;
    *(_WORD *)(a4 + 6) = v5 | a3 & 3;
  }
  return v5;
}
