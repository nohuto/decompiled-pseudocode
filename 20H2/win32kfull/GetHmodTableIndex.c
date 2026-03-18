/*
 * XREFs of GetHmodTableIndex @ 0x1C007502C
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C0074888 (zzzSetWindowsHookEx.c)
 *     _SetWinEventHook @ 0x1C0076C94 (_SetWinEventHook.c)
 *     _RegisterDManipHook @ 0x1C011D224 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0127C48 (_RegisterUserApiHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00754E0 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetHmodTableIndex(unsigned int *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  ULONG64 v5; // rbx
  ULONG64 v6; // rdx
  _BYTE **v7; // rax
  unsigned __int16 v8; // ax
  int v10; // ebx
  unsigned __int16 near **v11; // rcx
  unsigned __int16 near **v12; // rcx
  int v13; // [rsp+58h] [rbp+10h]
  tagDomLock *v14; // [rsp+60h] [rbp+18h] BYREF

  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v14);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v4 = *a1;
  v13 = *a1;
  v5 = *((_QWORD *)a1 + 1);
  if ( (v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (unsigned __int16)v4 + v5 + 2;
  v7 = (_BYTE **)MmUserProbeAddress;
  if ( v6 < MmUserProbeAddress && (unsigned __int16)v4 <= HIWORD(v13) )
  {
    if ( (v4 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v6, v2, v3);
      v7 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v6 > v5 )
      goto LABEL_12;
  }
  if ( (v4 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v7 = 0;
LABEL_12:
  v8 = UserAddAtomToAtomTableEx(UserLibmgmtAtomTableHandle, v5, 0LL, 2LL);
  if ( !v8 )
  {
LABEL_13:
    tagDomLock::UnLockExclusive(v14);
    return 0xFFFFFFFFLL;
  }
  v10 = 0;
  if ( catomSysTableEntries > 0 )
  {
    v11 = &aatomSysLoaded;
    do
    {
      if ( *(_WORD *)v11 == v8 )
        break;
      ++v10;
      v11 = (unsigned __int16 near **)((char *)v11 + 2);
    }
    while ( v10 < catomSysTableEntries );
  }
  if ( v10 == catomSysTableEntries )
  {
    v10 = 0;
    if ( catomSysTableEntries > 0 )
    {
      v12 = &aatomSysLoaded;
      do
      {
        if ( !*(_WORD *)v12 )
          break;
        ++v10;
        v12 = (unsigned __int16 near **)((char *)v12 + 2);
      }
      while ( v10 < catomSysTableEntries );
    }
    if ( v10 == catomSysTableEntries )
    {
      if ( v10 == 32 )
      {
        UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v8, &aatomSysLoaded);
        UserSetLastError(8LL);
        goto LABEL_13;
      }
      ++catomSysTableEntries;
    }
    *((_WORD *)&aatomSysLoaded + v10) = v8;
    *((_DWORD *)&acatomSysUse + v10) = 0;
    *((_DWORD *)&acatomSysDepends + v10) = 0;
  }
  else
  {
    UserDeleteAtomFromAtomTable(UserLibmgmtAtomTableHandle, v8, &aatomSysLoaded);
  }
  tagDomLock::UnLockExclusive(v14);
  return (unsigned int)v10;
}
