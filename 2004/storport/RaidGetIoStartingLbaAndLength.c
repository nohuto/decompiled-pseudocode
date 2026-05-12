/*
 * XREFs of RaidGetIoStartingLbaAndLength @ 0x1C0050810
 * Callers:
 *     StorpTelemetryConstructErrorEntry @ 0x1C0007F60 (StorpTelemetryConstructErrorEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidGetIoStartingLbaAndLength(char *a1, __int64 a2)
{
  char v3; // cl
  __int64 v4; // rax

  v3 = *a1;
  LOBYTE(v4) = v3 - 8;
  if ( ((v3 - 8) & 0xFD) != 0 )
  {
    LOBYTE(v4) = v3 - 40;
    if ( ((v3 - 40) & 0xFD) != 0 && (LOBYTE(v4) = v3 + 88, ((v3 + 88) & 0xFD) != 0) )
    {
      if ( ((v3 + 120) & 0xFD) != 0 )
      {
        if ( a2 )
          *(_QWORD *)a2 = -1LL;
        return v4;
      }
      if ( !a2 )
        return v4;
      *(_BYTE *)(a2 + 7) = a1[2];
      *(_BYTE *)(a2 + 6) = a1[3];
      *(_BYTE *)(a2 + 5) = a1[4];
      *(_BYTE *)(a2 + 4) = a1[5];
      *(_BYTE *)(a2 + 3) = a1[6];
      *(_BYTE *)(a2 + 2) = a1[7];
      *(_BYTE *)(a2 + 1) = a1[8];
      LOBYTE(v4) = a1[9];
    }
    else
    {
      if ( !a2 )
        return v4;
      *(_BYTE *)(a2 + 3) = a1[2];
      *(_BYTE *)(a2 + 2) = a1[3];
      *(_BYTE *)(a2 + 1) = a1[4];
      LOBYTE(v4) = a1[5];
    }
    *(_BYTE *)a2 = v4;
    return v4;
  }
  if ( a2 )
  {
    v4 = (unsigned __int8)a1[3];
    *(_QWORD *)a2 = v4 | (((unsigned __int8)a1[2] | ((unsigned __int64)(a1[1] & 0x1F) << 8)) << 8);
  }
  return v4;
}
