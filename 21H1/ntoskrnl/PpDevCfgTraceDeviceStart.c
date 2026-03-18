/*
 * XREFs of PpDevCfgTraceDeviceStart @ 0x140725EA4
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 * Callees:
 *     PiDevCfgLogDeviceStarted @ 0x1407354E8 (PiDevCfgLogDeviceStarted.c)
 */

char __fastcall PpDevCfgTraceDeviceStart(_DWORD *a1)
{
  int v1; // eax

  v1 = a1[75];
  if ( v1 >= 770 )
  {
    if ( v1 <= 775 )
    {
      LOBYTE(v1) = (a1[99] & 0x6000) != 0;
      goto LABEL_4;
    }
    if ( v1 == 776 )
    {
LABEL_7:
      a1[176] &= ~1u;
      LOBYTE(v1) = PiDevCfgLogDeviceStarted();
      return v1;
    }
  }
  if ( (a1[99] & 0x2000) == 0 || a1[101] != 56 )
  {
    LOBYTE(v1) = 1;
LABEL_4:
    if ( !(_BYTE)v1 )
      return v1;
    goto LABEL_7;
  }
  return v1;
}
