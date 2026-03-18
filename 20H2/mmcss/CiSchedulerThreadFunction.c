/*
 * XREFs of CiSchedulerThreadFunction @ 0x1C0002D50
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerWait @ 0x1C00021A0 (CiSchedulerWait.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0002C60 (CiSchedulerRemoveDeadline.c)
 *     CiSchedulerDeepSleep @ 0x1C0002CC0 (CiSchedulerDeepSleep.c)
 *     CiLogSchedulerEvent @ 0x1C0003C20 (CiLogSchedulerEvent.c)
 *     CiLogSchedulerWakeup @ 0x1C0003D90 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1C00043B8 (WPP_SF_.c)
 */

void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  PVOID *p_Reserved; // r13
  struct _KTHREAD *CurrentThread; // rax
  char v4; // di
  int v5; // ebp
  __int64 AttachedDevice_low; // rcx
  unsigned int v7; // r14d
  struct _DEVICE_OBJECT *SystemArgument1; // r12
  struct _DEVICE_OBJECT *NextDevice; // rdi
  __int64 i; // r15
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 **v15; // rdx
  char v16; // bl
  unsigned __int8 AttachedDevice; // al
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  p_Reserved = 0LL;
  if ( byte_1C0007358 )
    CiLogSchedulerWakeup(1LL);
  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  CiThreadsMovedUp = 1;
  CiSchedulerThread = CurrentThread;
  CiSchedulerInLazyMode = 0;
  KeSetActualBasePriorityThread(CurrentThread, 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_d6228770c66e391feed760a5a2fdfd5b_Traceguids);
  v18 = 0;
  do
  {
    v5 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v7 = 0;
    SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( CiThreadsMovedUp = v4;
          SystemArgument1 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1;
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type )
    {
      p_Reserved = &SystemArgument1[-1].Reserved;
      NextDevice = SystemArgument1->NextDevice;
      for ( i = (__int64)&SystemArgument1->NextDevice;
            NextDevice != (struct _DEVICE_OBJECT *)i;
            NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type )
      {
        if ( (BYTE4(NextDevice->DeviceExtension) & 1) == 0 )
        {
          if ( CiThreadsMovedUp )
          {
            v11 = *((_QWORD *)&NextDevice[-1].Reserved + 1);
            if ( *(_QWORD *)(v11 + 120) || !*(_BYTE *)(v11 + 132) && *(_QWORD *)(v11 + 80) )
            {
              AttachedDevice_low = *((unsigned __int8 *)NextDevice[-1].Reserved + 40);
              AttachedDevice = (unsigned __int8)NextDevice->AttachedDevice;
              if ( (unsigned __int8)AttachedDevice_low > AttachedDevice )
                AttachedDevice_low = AttachedDevice;
            }
            else
            {
              AttachedDevice_low = LOBYTE(NextDevice->AttachedDevice);
            }
          }
          else
          {
            AttachedDevice_low = BYTE2(NextDevice->AttachedDevice);
          }
          v12 = (unsigned __int8)AttachedDevice_low;
          if ( BYTE3(NextDevice->AttachedDevice) != (unsigned __int8)AttachedDevice_low )
          {
            BYTE3(NextDevice->AttachedDevice) = AttachedDevice_low;
            if ( byte_1C0007358 )
              CiLogSchedulerEvent(&NextDevice[-1].Dpc.DpcData, (unsigned __int8)AttachedDevice_low);
            KeSetActualBasePriorityThread(NextDevice->NextDevice, v12);
          }
          ++v5;
          ++v7;
        }
      }
    }
    if ( CiThreadsMovedUp && v7 > 1 )
    {
      v13 = (__int64 *)p_Reserved[4];
      AttachedDevice_low = (__int64)(p_Reserved + 4);
      if ( (PVOID *)v13[1] != p_Reserved + 4
        || (v14 = *v13, *(__int64 **)(*v13 + 8) != v13)
        || (*(_QWORD *)AttachedDevice_low = v14,
            *(_QWORD *)(v14 + 8) = AttachedDevice_low,
            v15 = (__int64 **)p_Reserved[5],
            *v15 != (__int64 *)AttachedDevice_low) )
      {
        __fastfail(3u);
      }
      *v13 = AttachedDevice_low;
      v13[1] = (__int64)v15;
      *v15 = v13;
      p_Reserved[5] = v13;
    }
    if ( v5 )
    {
      v4 = CiSchedulerWait(AttachedDevice_low, &v18);
    }
    else
    {
      v4 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline((__int64)&WPP_MAIN_CB.Reserved);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      CiSchedulerDeepSleep((__int32 *)&v18);
    }
    v16 = v18;
    if ( byte_1C0007358 )
      CiLogSchedulerWakeup(v18);
  }
  while ( (v16 & 8) == 0 );
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_d6228770c66e391feed760a5a2fdfd5b_Traceguids);
  PsTerminateSystemThread(0);
}
