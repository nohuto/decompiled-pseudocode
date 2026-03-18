/*
 * XREFs of UnlockDesktopMenu @ 0x1C012AE58
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??9?$SharedPointerBase@UtagMENU@@@@QEBAEH@Z @ 0x1C01F3100 (--9-$SharedPointerBase@UtagMENU@@@@QEBAEH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UnlockDesktopMenu(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax

  v2 = *a1;
  v3 = *(unsigned int *)(*(_QWORD *)(v2 + 40) + 40LL);
  if ( (v3 & 0x40) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v3);
    v2 = *a1;
  }
  *(_DWORD *)(*(_QWORD *)(v2 + 40) + 40LL) &= ~0x40u;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 40) + 44LL)
    && (unsigned __int8)SharedPointerBase<tagMENU>::operator!=(*(_QWORD *)(*a1 + 88) + 16LL) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v5 + 40LL);
    if ( (*(_DWORD *)(v6 + 40) & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v4);
      v4 = *a1;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 88) + 16LL) + 40LL);
    *(_DWORD *)(v7 + 40) &= ~0x40u;
  }
  return HMAssignmentUnlock(a1);
}
