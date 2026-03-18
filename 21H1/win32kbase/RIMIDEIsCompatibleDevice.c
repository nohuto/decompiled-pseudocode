/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x1C0171FDC
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C0047D2C (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00A2D3C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEIsCompatibleDevice(_DWORD *a1, __int64 a2)
{
  char v2; // al
  _DWORD *v4; // rbx
  int v5; // r8d

  v2 = *(_BYTE *)(a2 + 48);
  v4 = a1;
  if ( !v2 )
  {
    v5 = 1;
    goto LABEL_14;
  }
  v5 = 2;
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
      {
        v5 = 32;
        goto LABEL_14;
      }
      a1 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(a2 + 480) + 24LL);
      if ( (unsigned int)((_DWORD)a1 - 5) <= 1 )
      {
        v5 = 4;
        goto LABEL_14;
      }
      if ( (_DWORD)a1 == 7 )
      {
        v5 = 8;
        goto LABEL_14;
      }
      if ( (unsigned int)((_DWORD)a1 - 1) <= 3 )
      {
        v5 = 16;
        goto LABEL_14;
      }
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v5 = 0;
  }
LABEL_14:
  if ( (v5 & v4[21]) == 0 )
    return 0LL;
  if ( v5 != 32 || v4[216] )
    return 1LL;
  if ( !v4[22] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return rimIsExplicitRimUsagesMatchingUsages(
           (__int64)v4,
           *(_WORD *)(*(_QWORD *)(a2 + 472) + 16LL),
           *(_WORD *)(*(_QWORD *)(a2 + 472) + 18LL));
}
