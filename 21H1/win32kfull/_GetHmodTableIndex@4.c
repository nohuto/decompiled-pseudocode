/*
 * XREFs of _GetHmodTableIndex@4 @ 0x15FAE
 * Callers:
 *     _zzzSetWindowsHookEx@24 @ 0x13290 (_zzzSetWindowsHookEx@24.c)
 *     __SetWinEventHook@32 @ 0x148F0 (__SetWinEventHook@32.c)
 *     __RegisterDManipHook@0 @ 0xE43A6 (__RegisterDManipHook@0.c)
 *     __RegisterUserApiHook@16 @ 0xEABF4 (__RegisterUserApiHook@16.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ @ 0x16A32 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __fastcall GetHmodTableIndex(int *a1)
{
  int v2; // ecx
  ULONG v3; // edx
  ULONG v4; // esi
  unsigned __int16 v5; // ax
  int i; // esi
  int v8; // [esp+20h] [ebp-20h]
  tagDomLock *v9; // [esp+24h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v9);
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    a1 = (int *)_MmUserProbeAddress;
  v2 = *a1;
  v8 = *a1;
  v3 = a1[1];
  v4 = (unsigned __int16)*a1 + v3 + 2;
  if ( v4 <= v3 || v4 >= _MmUserProbeAddress )
LABEL_25:
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v2 > HIWORD(v8) )
  {
    if ( (v2 & 1) == 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( (v2 & 1) != 0 )
  {
LABEL_24:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_25;
  }
  v5 = UserAddAtomToAtomTableEx(_UserLibmgmtAtomTableHandle, v3, 0, 2);
  ms_exc.registration.TryLevel = -2;
  if ( !v5 )
  {
LABEL_8:
    tagDomLock::UnLockExclusive(v9);
    return -1;
  }
  for ( i = 0; i < catomSysTableEntries; ++i )
  {
    if ( *((_WORD *)&aatomSysLoaded + i) == v5 )
      break;
  }
  if ( i == catomSysTableEntries )
  {
    for ( i = 0; i < catomSysTableEntries; ++i )
    {
      if ( !*((_WORD *)&aatomSysLoaded + i) )
        break;
    }
    if ( i == catomSysTableEntries )
    {
      if ( i == 32 )
      {
        UserDeleteAtomFromAtomTable(_UserLibmgmtAtomTableHandle, v5);
        UserSetLastError(8);
        goto LABEL_8;
      }
      ++catomSysTableEntries;
    }
    *((_WORD *)&aatomSysLoaded + i) = v5;
    (&acatomSysUse)[i] = 0;
    (&acatomSysDepends)[i] = 0;
  }
  else
  {
    UserDeleteAtomFromAtomTable(_UserLibmgmtAtomTableHandle, v5);
  }
  tagDomLock::UnLockExclusive(v9);
  return i;
}
