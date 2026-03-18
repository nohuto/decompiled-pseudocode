/*
 * XREFs of CiSchedulerWait @ 0x1C00021A0
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0002D50 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001010 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerSleep @ 0x1C0001DB0 (CiSchedulerSleep.c)
 *     CiSchedulerUpdateTimer @ 0x1C0002990 (CiSchedulerUpdateTimer.c)
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 *     CiLogSchedulerEvent @ 0x1C0003C20 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerSleep @ 0x1C0003D0C (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C0003D90 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C00043B8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004604 (WPP_SF_d.c)
 */

char __fastcall CiSchedulerWait(__int64 a1, unsigned __int32 *a2)
{
  unsigned __int32 *v2; // r14
  unsigned int DpcData_high; // edx
  unsigned int v4; // ecx
  int v5; // r12d
  unsigned int v6; // esi
  int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // esi
  struct _DEVICE_OBJECT *SystemArgument1; // r8
  struct _DEVICE_OBJECT *NextDevice; // rcx
  __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int32 v18; // ebx
  int v19; // edi
  int v20; // ebp
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // rcx
  unsigned __int64 DeviceObjectExtension; // rbx
  bool v25; // zf
  __int64 v26; // r15
  __int64 *v27; // rsi
  __int64 v28; // rax
  unsigned __int8 v29; // dl
  unsigned int v30; // ebp
  int v31; // eax
  int v32; // eax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  int v38; // eax
  const EVENT_DESCRIPTOR *v39; // rdx
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // rax
  unsigned __int32 v41; // [rsp+30h] [rbp-98h]
  int v42; // [rsp+34h] [rbp-94h]
  int v43; // [rsp+38h] [rbp-90h]
  int v44; // [rsp+40h] [rbp-88h] BYREF
  __int64 v45; // [rsp+48h] [rbp-80h] BYREF
  __int64 v46; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int32 *v47; // [rsp+58h] [rbp-70h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v49[2]; // [rsp+70h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+80h] [rbp-48h] BYREF

  v2 = a2;
  v47 = a2;
  if ( CiThreadsMovedUp )
  {
    if ( CiSchedulerInLazyMode )
    {
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      v4 = 2;
    }
    else
    {
      DpcData_high = (unsigned int)WPP_MAIN_CB.SecurityDescriptor;
      v4 = 1;
    }
    CiSchedulerSleep(v4, DpcData_high, v2);
    if ( (*v2 & 0xC) != 0 )
      return 0;
    v5 = 0;
    while ( 1 )
    {
      if ( !CiSchedulerDisallowLazyMode )
      {
        v6 = byte_1C0007218;
        v7 = 0;
        v8 = 0;
        if ( !byte_1C0007218 )
          goto LABEL_13;
        v9 = 0LL;
        do
        {
          if ( !(unsigned __int8)PoCpuIdledSinceLastCallImprecise(v8, v9 + CiLastIdleTime) )
            ++v7;
          ++v8;
          v9 += 8LL;
        }
        while ( v8 < v6 );
        if ( v7 )
          v10 = 0;
        else
LABEL_13:
          v10 = (2 * CiProcessorIdleHistoryBits) | 1;
        CiProcessorIdleHistoryBits = CiSchedulerIdleCycleBitMask & v10;
      }
      if ( !CiProcessorIdleHistoryBits )
      {
        if ( CiSchedulerInLazyMode )
        {
          CiSchedulerInLazyMode = 0;
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_d6228770c66e391feed760a5a2fdfd5b_Traceguids);
        }
        return 0;
      }
      if ( CiProcessorIdleHistoryBits == CiSchedulerIdleCycleBitMask )
      {
        if ( !CiSchedulerInLazyMode )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              13LL,
              &WPP_d6228770c66e391feed760a5a2fdfd5b_Traceguids,
              HIDWORD(WPP_MAIN_CB.Dpc.DpcData));
          CiSchedulerInLazyMode = 1;
        }
        v11 = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
        v12 = 4;
      }
      else
      {
        v11 = *(&WPP_MAIN_CB.ActiveThreadCount + 1);
        v12 = 3;
      }
      if ( byte_1C0007358 )
        CiLogSchedulerWakeup(*v2);
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
      if ( CiSchedulerInLazyMode )
      {
        SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
        if ( WPP_MAIN_CB.Dpc.SystemArgument1 == &WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
LABEL_121:
          *v2 |= 0x80u;
          WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
          return 0;
        }
        while ( 1 )
        {
          NextDevice = SystemArgument1->NextDevice;
          if ( NextDevice != (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
            break;
LABEL_139:
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type;
          if ( SystemArgument1 == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1 )
            goto LABEL_121;
        }
        while ( (BYTE4(NextDevice->DeviceExtension) & 1) != 0 )
        {
          NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
          if ( NextDevice == (struct _DEVICE_OBJECT *)&SystemArgument1->NextDevice )
            goto LABEL_139;
        }
      }
      if ( qword_1C00071B8 )
        RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
      v45 = 0LL;
      if ( CiSchedulerWaitStatus == 257 )
        v15 = KeQueryInterruptTimePrecise(&v45);
      else
        v15 = MEMORY[0xFFFFF78000000008];
      v16 = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
      byte_1C00071C4 = 0;
      qword_1C00071B8 = v15 + v11;
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
          v16 = (unsigned __int64)&WPP_MAIN_CB.SectorSize ^ *(_QWORD *)&WPP_MAIN_CB.SectorSize;
        else
          v16 = 0LL;
      }
      LOBYTE(SystemArgument1) = 0;
      if ( !v16 )
        goto LABEL_46;
      while ( *(_QWORD *)(v16 + 24) > v15 + (unsigned __int64)v11 )
      {
        v17 = *(_QWORD *)v16;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_46;
          v17 ^= v16;
        }
        if ( !v17 )
          goto LABEL_46;
LABEL_39:
        v16 = v17;
      }
      v17 = *(_QWORD *)(v16 + 8);
      if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_45;
        v17 ^= v16;
      }
      if ( v17 )
        goto LABEL_39;
LABEL_45:
      LOBYTE(SystemArgument1) = 1;
LABEL_46:
      RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v16, SystemArgument1, &WPP_MAIN_CB.Reserved);
      CiSchedulerUpdateTimer(v15);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      if ( byte_1C0007358 )
        CiLogSchedulerSleep(v12, v11);
      v18 = _InterlockedExchange(&CiSchedulerWakeupReason, 0);
      while ( 2 )
      {
        v41 = v18;
        if ( !v18 )
          CiSchedulerWaitStatus = KeWaitForSingleObject(
                                    *(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
                                    Executive,
                                    0,
                                    1u,
                                    0LL);
        if ( !*(_QWORD *)&WPP_MAIN_CB.SectorSize )
          goto LABEL_97;
        v19 = 0;
        v43 = 0;
        v20 = 0;
        v42 = 0;
        v46 = 0LL;
        if ( CiSchedulerWaitStatus == 257 )
          v21 = KeQueryInterruptTimePrecise(&v46);
        else
          v21 = MEMORY[0xFFFFF78000000008];
        v22 = v21 + 2000;
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
        CiSchedulerTimerNode = 2LL;
        if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
        {
          if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            goto LABEL_83;
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                       + 1);
        }
        else
        {
          DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
        }
        if ( !DeviceObjectExtension )
          goto LABEL_82;
        while ( 2 )
        {
          if ( *(_QWORD *)(DeviceObjectExtension + 24) <= v22 )
          {
            RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, DeviceObjectExtension);
            v25 = *(_DWORD *)(DeviceObjectExtension + 32) == 1;
            *(_QWORD *)(DeviceObjectExtension + 24) = 0LL;
            if ( v25 )
            {
              if ( *(_BYTE *)(DeviceObjectExtension + 36) )
              {
                v26 = DeviceObjectExtension - 96;
              }
              else
              {
                v38 = *(_DWORD *)(DeviceObjectExtension + 128);
                v26 = DeviceObjectExtension - 56;
                if ( (v38 & 1) != 0 )
                {
                  v42 = 1;
                  ++CiTotalTasksDeadlineExpired;
                  v5 = 1;
                  *(_DWORD *)(v26 + 184) = v38 | 4;
                }
              }
              v27 = *(__int64 **)(v26 + 32);
              if ( v27 != (__int64 *)(v26 + 32) )
              {
                do
                {
                  if ( (*((_BYTE *)v27 + 68) & 1) == 0 )
                  {
                    if ( CiThreadsMovedUp )
                    {
                      v28 = *(v27 - 1);
                      if ( *(_QWORD *)(v28 + 120) || !*(_BYTE *)(v28 + 132) && *(_QWORD *)(v28 + 80) )
                      {
                        v23 = *(unsigned __int8 *)(*(v27 - 2) + 40);
                        v29 = *(_BYTE *)(*(v27 - 2) + 40);
                        if ( (unsigned __int8)v23 > *((_BYTE *)v27 + 24) )
                          v29 = *((_BYTE *)v27 + 24);
                      }
                      else
                      {
                        v29 = *((_BYTE *)v27 + 24);
                      }
                    }
                    else
                    {
                      v29 = *((_BYTE *)v27 + 26);
                    }
                    v30 = v29;
                    if ( *((unsigned __int8 *)v27 + 27) != v29 )
                    {
                      *((_BYTE *)v27 + 27) = v29;
                      if ( byte_1C0007358 )
                        CiLogSchedulerEvent(v27 - 10, v29);
                      KeSetActualBasePriorityThread(v27[2], v30);
                    }
                  }
                  v27 = (__int64 *)*v27;
                }
                while ( v27 != (__int64 *)(v26 + 32) );
                v19 = v43;
              }
              v31 = *(_DWORD *)(v26 + 184);
              if ( (v31 & 2) != 0 )
              {
                if ( *(_BYTE *)(DeviceObjectExtension + 36) || !*(_BYTE *)(v26 + 132) || v5 )
                {
                  *(_DWORD *)(v26 + 184) = v31 & 0xFFFFFFFD;
                  CiSchedulerSetTaskIndexThreadTag(v26, 0);
                  --CiTotalTasksBuffering;
                  goto LABEL_74;
                }
              }
              else
              {
LABEL_74:
                if ( v5 )
                  CiSchedulerSetTaskIndexThreadTag(v26, 2u);
              }
              v5 = 0;
              if ( byte_1C0007358 )
              {
                if ( *(_BYTE *)(DeviceObjectExtension + 36) )
                {
                  v49[0] = v26 + 144;
                  v39 = &CiTaskIndexPreDeadlineExpiredEvent;
                  p_UserData = (struct _EVENT_DATA_DESCRIPTOR *)v49;
                  v49[1] = 4LL;
                }
                else
                {
                  UserData.Ptr = v26 + 144;
                  v39 = &CiTaskIndexDeadlineExpiredEvent;
                  p_UserData = &UserData;
                  *(_QWORD *)&UserData.Size = 4LL;
                }
                EtwWrite(RegHandle, v39, 0LL, 1u, p_UserData);
              }
              v32 = 32;
            }
            else
            {
              v32 = 16;
            }
            v19 |= v32;
            v43 = v19;
            if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) != 0 )
            {
              if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
                break;
              DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize
                                                                                           + 1);
            }
            else
            {
              DeviceObjectExtension = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension;
            }
            if ( !DeviceObjectExtension )
              break;
            continue;
          }
          break;
        }
        v20 = v42;
LABEL_82:
        v18 = v41;
LABEL_83:
        if ( (v19 & 0x20) != 0 )
        {
          if ( v20 )
          {
            if ( CiCurrentMediaBufferingState )
            {
              CiCurrentMediaBufferingState = 0;
              v23 = 0LL;
              goto LABEL_126;
            }
          }
          else
          {
            LOBYTE(v23) = CiTotalTasksBuffering != 0;
            if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
              && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
            {
              CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
LABEL_126:
              PoNotifyMediaBuffering(v23);
            }
          }
        }
        if ( (v19 & 0x10) == 0 )
        {
          v33 = v22 - 2000;
          if ( ((__int64)WPP_MAIN_CB.DeviceObjectExtension & 1) == 0 )
          {
            v34 = (__int64)WPP_MAIN_CB.DeviceObjectExtension;
            goto LABEL_89;
          }
          if ( WPP_MAIN_CB.DeviceObjectExtension == (struct _DEVOBJ_EXTENSION *)1 )
            goto LABEL_154;
          v34 = (unsigned __int64)WPP_MAIN_CB.DeviceObjectExtension ^ ((unsigned __int64)&WPP_MAIN_CB.SectorSize + 1);
LABEL_89:
          if ( !v34 )
          {
LABEL_154:
            if ( CiSchedulerTimerNode != 1 )
            {
              CiSchedulerTimerNode = 1LL;
              ExCancelTimer(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0LL);
            }
          }
          else if ( v34 != CiSchedulerTimerNode )
          {
            v35 = *(_QWORD *)(v34 + 24);
            if ( v33 > v35 )
            {
              v36 = 0LL;
            }
            else
            {
              v36 = v33 - v35;
              if ( v36 < -2000 )
                v36 += 2000LL;
            }
            CiSchedulerTimerNode = v34;
            ExSetTimer(
              *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels,
              v36,
              0LL,
              &WPP_MAIN_CB.Queue.Wcb.DeviceContext);
          }
        }
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
        if ( v20 )
        {
          if ( byte_1C0007358 )
          {
            v50.Ptr = (ULONGLONG)&v44;
            v44 = 1;
            *(_QWORD *)&v50.Size = 4LL;
            EtwWrite(RegHandle, &CiTurboEngagedEvent, 0LL, 1u, &v50);
          }
          PoLatencySensitivityHint(4LL);
        }
        v18 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v19;
        if ( (v18 & 0xFFFFFFDF) == 0 )
        {
LABEL_97:
          if ( byte_1C0007358 )
            CiLogSchedulerWakeup(v18);
          v18 = 0;
          continue;
        }
        break;
      }
      v2 = v47;
      *v47 = v18;
      if ( (v18 & 0xC) != 0 )
        return 0;
    }
  }
  CiSchedulerSleep(0, HIDWORD(WPP_MAIN_CB.SecurityDescriptor), a2);
  return 1;
}
