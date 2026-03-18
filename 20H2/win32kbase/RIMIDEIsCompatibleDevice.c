/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x1C016972C
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00B5898 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C006EC50 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEIsCompatibleDevice(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  _DWORD *v6; // rbx
  __int64 v7; // r8

  v4 = *(_BYTE *)(a2 + 48);
  v6 = a1;
  if ( !v4 )
  {
    v7 = 1LL;
    goto LABEL_14;
  }
  v7 = 2LL;
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
      {
        v7 = 32LL;
        goto LABEL_14;
      }
      a1 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(a2 + 480) + 24LL);
      if ( (unsigned int)((_DWORD)a1 - 5) <= 1 )
      {
        v7 = 4LL;
        goto LABEL_14;
      }
      if ( (_DWORD)a1 == 7 )
      {
        v7 = 8LL;
        goto LABEL_14;
      }
      if ( (unsigned int)((_DWORD)a1 - 1) <= 3 )
      {
        v7 = 16LL;
        goto LABEL_14;
      }
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, 2LL, a4);
    v7 = 0LL;
  }
LABEL_14:
  if ( ((unsigned int)v7 & v6[21]) == 0 )
    return 0LL;
  if ( (_DWORD)v7 != 32 || v6[216] )
    return 1LL;
  if ( !v6[22] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v7, a4);
  return rimIsExplicitRimUsagesMatchingUsages(
           (__int64)v6,
           *(_WORD *)(*(_QWORD *)(a2 + 472) + 16LL),
           *(_WORD *)(*(_QWORD *)(a2 + 472) + 18LL));
}
