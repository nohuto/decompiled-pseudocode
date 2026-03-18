/*
 * XREFs of _SetManifestWinVer@0 @ 0x97ACA
 * Callers:
 *     <none>
 * Callees:
 *     _SbGetProcessSwitchContext@4 @ 0x97B58 (_SbGetProcessSwitchContext@4.c)
 *     _SbGetContextDetailsByGuid@8 @ 0x97B98 (_SbGetContextDetailsByGuid@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall SetManifestWinVer()
{
  _DWORD *v0; // eax
  int ProcessPeb; // eax
  int ProcessSwitchContext; // eax
  int result; // eax
  unsigned __int16 v4; // [esp+18h] [ebp-20h]

  v4 = -26368;
  v0 = *(_DWORD **)(_gptiCurrent + 232);
  if ( v0 )
  {
    ProcessPeb = PsGetProcessPeb(*v0);
    ProcessSwitchContext = SbGetProcessSwitchContext(*(_DWORD *)(ProcessPeb + 488));
    if ( ProcessSwitchContext )
    {
      if ( SbGetContextDetailsByGuid((void *)(ProcessSwitchContext + 48)) )
        v4 = MEMORY[0x16] | (MEMORY[0x14] << 8);
    }
  }
  result = _gptiCurrent;
  *(_DWORD *)(_gptiCurrent + 344) = v4;
  return result;
}
