/*
 * XREFs of PoRegisterPowerSettingCallback @ 0x14067BD00
 * Callers:
 *     HvlpRegisterPowerPolicyCallbacks @ 0x1404F8684 (HvlpRegisterPowerPolicyCallbacks.c)
 *     PopSetPowerSettingValue @ 0x14067A8D8 (PopSetPowerSettingValue.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x14078F230 (PopIdleInitAoAcDozeS4Timer.c)
 *     CmpInitializeLazyWriters @ 0x14078F3E8 (CmpInitializeLazyWriters.c)
 *     SSHSupportRegisterPowerSettingCallback @ 0x140796B5C (SSHSupportRegisterPowerSettingCallback.c)
 *     TtmInitCurrentSession @ 0x1408FE65C (TtmInitCurrentSession.c)
 *     PopEsInit @ 0x140A4052C (PopEsInit.c)
 *     PopInitializePowerSettingCallbacks @ 0x140A6B410 (PopInitializePowerSettingCallbacks.c)
 *     PpmInfoRegisterCallbacks @ 0x140A6B4EC (PpmInfoRegisterCallbacks.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A74328 (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x140281E90 (PopSetNotificationWork.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     RtlPcToFileName @ 0x1403CC630 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopEnsureErratumSubscribed @ 0x14056ED24 (PopEnsureErratumSubscribed.c)
 *     PopFindPowerSettingConfiguration @ 0x14067AD78 (PopFindPowerSettingConfiguration.c)
 *     PopStateIsSessionSpecific @ 0x14067AE74 (PopStateIsSessionSpecific.c)
 *     EmClientRuleEvaluate @ 0x140990340 (EmClientRuleEvaluate.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall PoRegisterPowerSettingCallback(
        PDEVICE_OBJECT DeviceObject,
        LPCGUID SettingGuid,
        PPOWER_SETTING_CALLBACK Callback,
        PVOID Context,
        PVOID *Handle)
{
  GUID *v7; // rdi
  bool v8; // r14
  unsigned __int64 *v9; // rsi
  __int64 v10; // rcx
  char *PoolWithTag; // rax
  char *v12; // rbx
  PDEVICE_OBJECT v13; // rax
  GUID v14; // xmm0
  __int64 *PowerSettingConfiguration; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rcx
  NTSTATUS v19; // edi
  _QWORD *v21; // rax
  __int64 *v22; // rax
  int v23; // [rsp+28h] [rbp-E0h] BYREF
  int v24; // [rsp+2Ch] [rbp-DCh]
  __int128 *v25; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING v26; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT v27; // [rsp+48h] [rbp-C0h]
  __int128 v28; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v29[528]; // [rsp+68h] [rbp-A0h] BYREF

  v23 = 0;
  v25 = 0LL;
  v27 = DeviceObject;
  v7 = (GUID *)SettingGuid;
  v24 = dword_140C23E8C;
  v28 = 0LL;
  v8 = 0;
  v26 = 0LL;
  if ( PopStateIsSessionSpecific(SettingGuid) )
    return -1073741811;
  v9 = 0LL;
  if ( Callback )
  {
    v10 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *(_QWORD *)&v7->Data1;
    if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *(_QWORD *)&v7->Data1 )
      v10 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - *(_QWORD *)v7->Data4;
    if ( !v10 )
    {
      memset(v29, 0, 0x208uLL);
      v26.MaximumLength = 520;
      v26.Buffer = (wchar_t *)v29;
      if ( (int)RtlPcToFileName((unsigned __int64)Callback, &v26) >= 0 )
      {
        DWORD2(v28) = 16;
        *(_QWORD *)&v28 = &v26;
        v25 = &v28;
        if ( (int)EmClientRuleEvaluate(&GUID_EM_PO_CONSOLE_STATE_CHANGE_REMAP_RULE, &v25, 1LL, &v23) >= 0 )
        {
          v22 = &PopPrimaryDisplayVisibleStateErratum;
          if ( v23 != 2 )
            v22 = 0LL;
          v9 = (unsigned __int64 *)v22;
        }
      }
    }
  }
  ExAcquireFastMutex(&PopSettingLock);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x74655350u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    v13 = v27;
    *((_DWORD *)v12 + 4) = 1952797520;
    v14 = *v7;
    *((_QWORD *)v12 + 10) = Callback;
    *((_QWORD *)v12 + 11) = Context;
    *((_QWORD *)v12 + 12) = v13;
    *(GUID *)(v12 + 52) = v14;
    if ( v9 )
    {
      PopEnsureErratumSubscribed(v9);
      v7 = (GUID *)(v9 + 2);
    }
    *(GUID *)(v12 + 36) = *v7;
    PowerSettingConfiguration = PopFindPowerSettingConfiguration(v7, -1);
    if ( PowerSettingConfiguration )
    {
      v16 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_IDLE_BACKGROUND_TASK.Data1 )
        v16 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_IDLE_BACKGROUND_TASK.Data4;
      if ( !v16 )
        goto LABEL_25;
      v17 = *(_QWORD *)&v7->Data1 - *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1;
      if ( *(_QWORD *)&v7->Data1 == *(_QWORD *)&GUID_BACKGROUND_TASK_NOTIFICATION.Data1 )
        v17 = *(_QWORD *)v7->Data4 - *(_QWORD *)GUID_BACKGROUND_TASK_NOTIFICATION.Data4;
      if ( !v17 )
LABEL_25:
        *((_QWORD *)v12 + 9) = PowerSettingConfiguration[v24 + 8];
      v18 = (__int64 **)PowerSettingConfiguration[3];
      if ( *v18 == PowerSettingConfiguration + 2 )
      {
        *(_QWORD *)v12 = PowerSettingConfiguration + 2;
        *((_QWORD *)v12 + 1) = v18;
        *v18 = (__int64 *)v12;
        PowerSettingConfiguration[3] = (__int64)v12;
        goto LABEL_18;
      }
    }
    else
    {
      v21 = (_QWORD *)qword_140C23068;
      if ( *(__int64 **)qword_140C23068 == &PopRegisteredPowerSettingCallbacks )
      {
        *(_QWORD *)v12 = &PopRegisteredPowerSettingCallbacks;
        *((_QWORD *)v12 + 1) = v21;
        *v21 = v12;
        qword_140C23068 = (__int64)v12;
LABEL_18:
        v19 = 0;
        v8 = (unsigned int)PopOsInitPhase >= 3;
        if ( Handle )
          *Handle = v12;
        goto LABEL_20;
      }
    }
    __fastfail(3u);
  }
  v19 = -1073741670;
LABEL_20:
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( v8 )
    PopSetNotificationWork(0x20u);
  return v19;
}
