/*
 * XREFs of PopScanIdleList @ 0x14035C514
 * Callers:
 *     PopPolicySystemIdle @ 0x14070E290 (PopPolicySystemIdle.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetPowerSettingValue @ 0x14031D2BC (PopGetPowerSettingValue.c)
 *     PopDiagTraceEventNoPayload @ 0x14031D664 (PopDiagTraceEventNoPayload.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14033DE1C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopRequestPowerIrp @ 0x14036CE40 (PopRequestPowerIrp.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopCoalescingCheck @ 0x1405690CC (PopCoalescingCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x14056BCA0 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14056D2EC (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValueAcDc @ 0x14070E5A8 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x14070F018 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopScanIdleList()
{
  int v0; // ebx
  int v1; // esi
  KIRQL v2; // al
  unsigned __int64 v3; // r15
  __int64 *v4; // r13
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // eax
  unsigned int v10; // r15d
  __int64 *v11; // rbx
  __int32 v12; // r12d
  unsigned __int32 v13; // r14d
  unsigned int v14; // esi
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // eax
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v29; // rdx
  char v30; // al
  char v31; // al
  int v32; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v36; // eax
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-E0h]
  char v38; // [rsp+48h] [rbp-C0h] BYREF
  char v39; // [rsp+49h] [rbp-BFh] BYREF
  int Src; // [rsp+4Ch] [rbp-BCh] BYREF
  int v41; // [rsp+50h] [rbp-B8h]
  int v42; // [rsp+54h] [rbp-B4h] BYREF
  int v43; // [rsp+58h] [rbp-B0h]
  int v44; // [rsp+5Ch] [rbp-ACh]
  unsigned int v45; // [rsp+60h] [rbp-A8h] BYREF
  int v46; // [rsp+68h] [rbp-A0h]
  unsigned int v47; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v48; // [rsp+70h] [rbp-98h]
  unsigned int v49; // [rsp+74h] [rbp-94h]
  unsigned __int32 v50; // [rsp+78h] [rbp-90h] BYREF
  __int32 v51; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v52; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v54; // [rsp+A8h] [rbp-60h]
  __int64 v55; // [rsp+B0h] [rbp-58h]
  int *v56; // [rsp+B8h] [rbp-50h]
  __int64 v57; // [rsp+C0h] [rbp-48h]
  __int64 v58; // [rsp+C8h] [rbp-40h]
  int v59; // [rsp+D0h] [rbp-38h]
  int v60; // [rsp+D4h] [rbp-34h]
  __int64 *v61; // [rsp+D8h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-28h]
  char *v63; // [rsp+E8h] [rbp-20h]
  __int64 v64; // [rsp+F0h] [rbp-18h]
  unsigned __int32 *v65; // [rsp+F8h] [rbp-10h]
  __int64 v66; // [rsp+100h] [rbp-8h]
  __int32 *v67; // [rsp+108h] [rbp+0h]
  __int64 v68; // [rsp+110h] [rbp+8h]
  char *v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+120h] [rbp+18h]
  char *v71; // [rsp+128h] [rbp+20h]
  __int64 v72; // [rsp+130h] [rbp+28h]
  char *v73; // [rsp+138h] [rbp+30h]
  __int64 v74; // [rsp+140h] [rbp+38h]

  LOBYTE(v0) = 0;
  v46 = dword_140C23EE8;
  v1 = 0;
  v49 = dword_140C23EE4;
  Src = 0;
  v45 = 0;
  v47 = *((_DWORD *)PopPolicy + 53);
  v48 = PopCurrentCoalescingSpindownTimeout;
  v43 = v0;
  v44 = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v3 = v2;
  LOBYTE(v41) = v2;
  if ( !byte_140C5059C )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v4 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      v10 = 0;
      do
      {
        v11 = v4 - 4;
        v12 = _InterlockedExchange((volatile __int32 *)v4 - 7, 0);
        *((_DWORD *)v4 - 5) += v12;
        if ( v12 || *((_DWORD *)v11 + 2) )
          *(_DWORD *)v11 = 0;
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v11, PopIdleScanInterval);
        if ( !v13 )
          *((_DWORD *)v11 + 14) = 1;
        if ( v46 == 1 )
          v14 = *((_DWORD *)v11 + 4);
        else
          v14 = *((_DWORD *)v11 + 5);
        v15 = *((unsigned int *)v11 + 12);
        if ( (_DWORD)v15 == 1 )
        {
          if ( v14 == -1 )
            v14 = v47;
          v22 = PopCoalescingCheck(v48, v14, v13);
          v14 = v22;
          if ( v22 )
            ++v44;
          v10 = v49;
          if ( v49 > v22 )
            v10 = v22;
          v23 = *((_DWORD *)v11 + 23);
          v16 = (unsigned int)(PopIdleScanInterval + *((_DWORD *)v11 + 22));
          if ( v13 )
          {
            if ( v23 <= PopIdleScanInterval )
              v25 = 0;
            else
              v25 = v23 - PopIdleScanInterval;
          }
          else
          {
            v24 = PopIdleScanInterval + v23;
            v16 = v10;
            v25 = v10;
            if ( v24 <= v10 )
            {
              v16 = (unsigned int)(PopIdleScanInterval + *((_DWORD *)v11 + 22));
              v25 = v24;
            }
          }
          v15 = *((unsigned int *)v11 + 12);
          *((_DWORD *)v11 + 22) = v16;
          *((_DWORD *)v11 + 23) = v25;
        }
        else
        {
          v16 = v13;
        }
        if ( v14 && (unsigned int)v16 >= v14 && *((_DWORD *)v11 + 14) == 1 && (v13 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v11 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v11[3], v16, v15);
          if ( (int)PopRequestPowerIrp(v11[3], 0LL, 0, 0LL) >= 0 )
          {
            *((_DWORD *)v11 + 3) = 0;
            v26 = *((_DWORD *)v11 + 13);
            ++dword_140C50598;
            *((_DWORD *)v11 + 14) = v26;
          }
        }
        else if ( (_DWORD)v15 == 1 )
        {
          v27 = (unsigned __int8)v43;
          if ( !v13 )
            v27 = 1;
          v43 = v27;
        }
        v51 = v12;
        v50 = v13;
        v39 = 0;
        v38 = 0;
        LOWORD(v42) = 0;
        v52 = 0LL;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK) )
          {
            DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v11[3], 0x67446F50u);
            v52 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
            {
              v29 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
              if ( v29 )
              {
                LOWORD(v42) = *(_WORD *)(v29 + 40) >> 1;
                v30 = *((_BYTE *)v11 + 52) - 1;
                v53.Ptr = (ULONGLONG)(v11 + 3);
                v38 = v30;
                v31 = *((_BYTE *)v11 + 56) - 1;
                *(_QWORD *)&v53.Size = 8LL;
                v39 = v31;
                v54 = &v52;
                v56 = &v42;
                v55 = 8LL;
                v57 = 2LL;
                v32 = *(unsigned __int16 *)(v29 + 40);
                v58 = *(_QWORD *)(v29 + 48);
                v61 = v11 + 2;
                v63 = (char *)v11 + 20;
                v65 = &v50;
                v67 = &v51;
                v69 = (char *)v11 + 12;
                v71 = &v38;
                v73 = &v39;
                v59 = v32;
                v60 = 0;
                v62 = 4LL;
                v64 = 4LL;
                v66 = 4LL;
                v68 = 4LL;
                v70 = 4LL;
                v72 = 1LL;
                v74 = 1LL;
                EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0xBu, &v53);
                DeviceAttachmentBaseRefWithTag = v52;
              }
              if ( DeviceAttachmentBaseRefWithTag )
                ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x67446F50u);
            }
          }
        }
        if ( *((_DWORD *)v11 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v4 - 4, v14, v10);
        v4 = (__int64 *)*v4;
      }
      while ( v4 != &PopIdleDetectList );
      LOBYTE(v3) = v41;
      LOBYTE(v0) = v43;
      v1 = v44;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v21 = (v36 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v36;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v3);
    v5 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v5 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    v6 = dword_140C23348 % (unsigned int)PopIdleScanInterval;
    v7 = dword_140C23348 / (unsigned int)PopIdleScanInterval;
    if ( dword_140C2334C )
    {
      v6 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval;
      v8 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      if ( v7 < v8 )
      {
        PopBackgroundTaskAllowed = 0;
        goto LABEL_11;
      }
      if ( v7 != v8 )
      {
LABEL_11:
        if ( !v1 || (_BYTE)v0 )
        {
          if ( !v5 && !dword_140C23ECC )
          {
            PopGetPowerSettingValue((__int64)&GUID_IDLE_BACKGROUND_TASK, v6, 3, &Src, (__int64)UserData, &v45);
            ++Src;
            PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK);
            v6 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
            PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
          }
          if ( PopBackgroundTaskAllowed && PopSIdle >= 50 && !PopBackgroundTaskIgnoreCount && !dword_140C23ECC )
          {
            PopGetPowerSettingValue((__int64)&GUID_BACKGROUND_TASK_NOTIFICATION, v6, 0, &Src, (__int64)UserData, &v45);
            ++Src;
            PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, &Src);
            PopBackgroundTaskAllowed = 0;
            PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
          }
        }
        return 0LL;
      }
    }
    PopBackgroundTaskAllowed = 1;
    goto LABEL_11;
  }
  KxReleaseSpinLock(&PopDopeGlobalLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v3);
  return 0LL;
}
