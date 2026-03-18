/*
 * XREFs of Command_D0EntryPostInterruptsEnabled @ 0x1C0013B34
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013000 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     Command_SendInternalCommandSynchronously @ 0x1C002DF68 (Command_SendInternalCommandSynchronously.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C00476D0 (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Command_D0EntryPostInterruptsEnabled(__int64 a1, int a2)
{
  __int64 v2; // rsi
  char *v3; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int16 v7; // ax
  char *PoolWithTag; // rax
  int v10; // edx
  int v11; // r9d
  __int16 v12; // dx
  void *v13; // rcx
  __int64 (__fastcall *v14)(); // rcx
  unsigned int v15; // eax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  if ( a2 != 5 )
    return 0LL;
  v5 = *(_QWORD *)(v2 + 88);
  if ( (*(_DWORD *)(v5 + 104) & 0x100) != 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(
                            (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                            0x80uLL,
                            0x49434858u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v11 = 27;
      LOBYTE(v10) = 2;
LABEL_13:
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), v10, 7, v11, (__int64)&WPP_36fa723b951d376375e8eba1d8934b4f_Traceguids);
      return 0LL;
    }
    memset(PoolWithTag + 8, 0, 0x78uLL);
    *(_QWORD *)v3 = a1;
    KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
    *((_QWORD *)v3 + 7) = v3;
    *((_QWORD *)v3 + 6) = Command_GetSupportedExtendedCapabilityCommandCompletion;
    *((_DWORD *)v3 + 11) = *((_DWORD *)v3 + 11) & 0xFFFF03FF | 0x6000;
    Command_SendInternalCommandSynchronously(a1, v3);
    if ( (*(_BYTE *)(v5 + 108) & 1) != 0 )
      *(_DWORD *)(v2 + 572) = 2;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_WORD *)(v6 + 248);
  if ( v7 == 4147 || v7 == 6418 || v7 == 6945 || !_stricmp((const char *)(v6 + 304), "NVDA") )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) = -1LL;
    if ( !v3 )
    {
      v3 = (char *)ExAllocatePoolWithTag((POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState, 0x80uLL, 0x49434858u);
      if ( !v3 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 0LL;
        v11 = 28;
        LOBYTE(v10) = 3;
        goto LABEL_13;
      }
    }
    v12 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 248LL);
    if ( v12 == 4147 || v12 == 6418 )
    {
      memset(v3 + 8, 0, 0x78uLL);
      *(_QWORD *)v3 = a1;
      KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
      v14 = Command_RenesasGetFirmwareVersionCommandCompletion;
    }
    else
    {
      v13 = v3 + 8;
      if ( v12 == 6945 )
      {
        memset(v13, 0, 0x78uLL);
        *(_QWORD *)v3 = a1;
        KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
        *((_QWORD *)v3 + 7) = v3;
        *((_QWORD *)v3 + 6) = Command_ASMediaGetFirmwareVersionLowCommandCompletion;
        *((_DWORD *)v3 + 11) = *((_DWORD *)v3 + 11) & 0xFFFF03FF | 0xD000;
        Command_SendInternalCommandSynchronously(a1, v3);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) == -1LL )
          goto LABEL_7;
        memset(v3 + 8, 0, 0x78uLL);
        *(_QWORD *)v3 = a1;
        KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
        v14 = Command_ASMediaGetFirmwareVersionHighCommandCompletion;
        v15 = *((_DWORD *)v3 + 11) & 0xFFFF03FF | 0xCC00;
LABEL_28:
        *((_QWORD *)v3 + 7) = v3;
        *((_QWORD *)v3 + 6) = v14;
        *((_DWORD *)v3 + 11) = v15;
        Command_SendInternalCommandSynchronously(a1, v3);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) != -1LL )
          Etw_ControllerFirmareVersionUpdate();
        goto LABEL_7;
      }
      memset(v13, 0, 0x78uLL);
      *(_QWORD *)v3 = a1;
      KeInitializeEvent((PRKEVENT)(v3 + 104), SynchronizationEvent, 0);
      v14 = Command_NvidiaGetFirmwareVersionCommandCompletion;
    }
    v15 = *((_DWORD *)v3 + 11) & 0xFFFF03FF | 0xC400;
    goto LABEL_28;
  }
LABEL_7:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x49434858u);
  return 0LL;
}
