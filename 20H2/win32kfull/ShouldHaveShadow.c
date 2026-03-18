/*
 * XREFs of ShouldHaveShadow @ 0x1C011377C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0047E74 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall ShouldHaveShadow(__int64 a1)
{
  unsigned int v1; // r9d
  _QWORD *v2; // r10
  __int64 v4; // rax
  unsigned int v5; // eax

  if ( (unsigned int)IsTopLevelWindow(a1)
    && gbDisableAlpha == v1
    && gcOverlays == v1
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80040000) == 0x80040000
    && (*(_BYTE *)(*(_QWORD *)(v2[17] + 8LL) + 10LL) & 2) != 0 )
  {
    v4 = v2[2];
    if ( *(_DWORD *)(v4 + 632) > 0x9900u )
      v5 = v1;
    else
      v5 = *(_DWORD *)(v4 + 648);
    if ( (v5 & 0x400000) == 0
      && ((*(_WORD *)(v2[5] + 42LL) & 0x2FFF) != 0x29C
       || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) == 0x80000200
       || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) != 0x80000002) )
    {
      return 1;
    }
  }
  return v1;
}
