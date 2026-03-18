/*
 * XREFs of _SbGetProcessSwitchContext@4 @ 0x97B58
 * Callers:
 *     _SetManifestWinVer@0 @ 0x97ACA (_SetManifestWinVer@0.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SbGetProcessSwitchContext(unsigned int a1)
{
  unsigned int result; // eax

  result = 0;
  if ( a1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 4544 > _MmUserProbeAddress || a1 + 4544 < a1 )
      *(_BYTE *)_MmUserProbeAddress = 0;
    result = a1 + 2016;
    if ( a1 == -2016 || !*(_DWORD *)(a1 + 2064) )
      return 0;
  }
  return result;
}
