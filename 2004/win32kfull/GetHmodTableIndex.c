/*
 * XREFs of GetHmodTableIndex @ 0x1C004616C
 * Callers:
 *     _SetWinEventHook @ 0x1C0043FA4 (_SetWinEventHook.c)
 *     zzzSetWindowsHookEx @ 0x1C00459C8 (zzzSetWindowsHookEx.c)
 *     _RegisterDManipHook @ 0x1C011C264 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0126348 (_RegisterUserApiHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C0046620 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DF7C4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetHmodTableIndex(unsigned int *a1)
{
  __int64 v2; // rcx
  ULONG64 v3; // rbx
  ULONG64 v4; // rdx
  _BYTE **v5; // rax
  unsigned __int16 v6; // ax
  __int64 v7; // r9
  int v9; // ebx
  unsigned __int16 near **v10; // rcx
  unsigned __int16 near **v11; // rcx
  int v12; // [rsp+58h] [rbp+10h]
  tagDomLock *v13; // [rsp+60h] [rbp+18h] BYREF

  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v13);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v2 = *a1;
  v12 = *a1;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = (unsigned __int16)v2 + v3 + 2;
  v5 = (_BYTE **)MmUserProbeAddress;
  if ( v4 < MmUserProbeAddress && (unsigned __int16)v2 <= HIWORD(v12) )
  {
    if ( (v2 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v4);
      v5 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v4 > v3 )
      goto LABEL_12;
  }
  if ( (v2 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v5 = 0;
LABEL_12:
  v6 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, v3, 0LL, 2LL);
  if ( !v6 )
  {
LABEL_13:
    tagDomLock::UnLockExclusive(v13);
    return 0xFFFFFFFFLL;
  }
  v9 = 0;
  if ( catomSysTableEntries > 0 )
  {
    v10 = &aatomSysLoaded;
    do
    {
      if ( *(_WORD *)v10 == v6 )
        break;
      ++v9;
      v10 = (unsigned __int16 near **)((char *)v10 + 2);
    }
    while ( v9 < catomSysTableEntries );
  }
  if ( v9 == catomSysTableEntries )
  {
    v9 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v11 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v11 )
          break;
        ++v9;
        v11 = (unsigned __int16 near **)((char *)v11 + 2);
      }
      while ( v9 < catomSysTableEntries );
    }
    if ( v9 == catomSysTableEntries )
    {
      if ( v9 == 32 )
      {
        UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v6, &aatomSysLoaded, v7);
        UserSetLastError(8LL);
        goto LABEL_13;
      }
      ++catomSysTableEntries;
    }
    *((_WORD *)&aatomSysLoaded + v9) = v6;
    *((_DWORD *)&acatomSysUse + v9) = 0;
    *((_DWORD *)&acatomSysDepends + v9) = 0;
  }
  else
  {
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v6, &aatomSysLoaded, v7);
  }
  tagDomLock::UnLockExclusive(v13);
  return (unsigned int)v9;
}
