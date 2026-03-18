/*
 * XREFs of _InvalidateWEFCOMPOSITEDDCEs@0 @ 0x153838
 * Callers:
 *     _xxxSystemTimerProc@16 @ 0xCA358 (_xxxSystemTimerProc@16.c)
 * Callees:
 *     _FlushWEFCOMPOSITEDDCEBounds@4 @ 0x15375C (_FlushWEFCOMPOSITEDDCEBounds@4.c)
 */

int __stdcall InvalidateWEFCOMPOSITEDDCEs()
{
  _DWORD *i; // esi

  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  for ( i = *(_DWORD **)(_gpDispInfo + 12); i; i = (_DWORD *)*i )
  {
    if ( (i[8] & 0x4400800) == 0
      && i[2]
      && !GreIsRendering(i[1])
      && (i[8] & 0x5000) == 0x5000
      && (*(_BYTE *)(*(_DWORD *)(i[4] + 20) + 19) & 2) != 0 )
    {
      FlushWEFCOMPOSITEDDCEBounds((int)i);
    }
  }
  return GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
}
