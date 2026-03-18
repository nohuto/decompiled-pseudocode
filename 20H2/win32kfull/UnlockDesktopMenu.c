/*
 * XREFs of UnlockDesktopMenu @ 0x1C012CD88
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??9?$SharedPointerBase@UtagMENU@@@@QEBAEH@Z @ 0x1C01F2490 (--9-$SharedPointerBase@UtagMENU@@@@QEBAEH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UnlockDesktopMenu(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax

  v5 = *a1;
  v6 = *(unsigned int *)(*(_QWORD *)(v5 + 40) + 40LL);
  if ( (v6 & 0x40) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v6, a3, a4);
    v5 = *a1;
  }
  *(_DWORD *)(*(_QWORD *)(v5 + 40) + 40LL) &= ~0x40u;
  if ( *(_DWORD *)(*(_QWORD *)(*a1 + 40) + 44LL)
    && (unsigned __int8)SharedPointerBase<tagMENU>::operator!=(*(_QWORD *)(*a1 + 88) + 16LL) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)v8 + 40LL);
    if ( (*(_DWORD *)(v11 + 40) & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v7, v9, v10);
      v7 = *a1;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 88) + 16LL) + 40LL);
    *(_DWORD *)(v12 + 40) &= ~0x40u;
  }
  return HMAssignmentUnlock(a1);
}
