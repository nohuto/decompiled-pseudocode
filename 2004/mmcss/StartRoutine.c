/*
 * XREFs of StartRoutine @ 0x1C0002D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00021A0 @ 0x1C00021A0 (sub_1C00021A0.c)
 *     sub_1C0002C60 @ 0x1C0002C60 (sub_1C0002C60.c)
 *     sub_1C0002CC0 @ 0x1C0002CC0 (sub_1C0002CC0.c)
 *     sub_1C0003C20 @ 0x1C0003C20 (sub_1C0003C20.c)
 *     sub_1C0003D90 @ 0x1C0003D90 (sub_1C0003D90.c)
 *     sub_1C00043B8 @ 0x1C00043B8 (sub_1C00043B8.c)
 */

void __fastcall StartRoutine(struct _KEVENT *StartContext)
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
    sub_1C0003D90(1LL);
  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  byte_1C000722C = 1;
  Object = CurrentThread;
  byte_1C000725C = 0;
  KeSetActualBasePriorityThread(CurrentThread, 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
    sub_1C00043B8(off_1C0007000->AttachedDevice, 15LL, &unk_1C0005448);
  v18 = 0;
  do
  {
    v5 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject);
    v7 = 0;
    SystemArgument1 = (struct _DEVICE_OBJECT *)DeviceObject.Dpc.SystemArgument1;
    DeviceObject.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( byte_1C000722C = v4;
          SystemArgument1 != (struct _DEVICE_OBJECT *)&DeviceObject.Dpc.SystemArgument1;
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
          if ( byte_1C000722C )
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
              sub_1C0003C20(&NextDevice[-1].Dpc.DpcData, (unsigned __int8)AttachedDevice_low);
            KeSetActualBasePriorityThread(NextDevice->NextDevice, v12);
          }
          ++v5;
          ++v7;
        }
      }
    }
    if ( byte_1C000722C && v7 > 1 )
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
      v4 = sub_1C00021A0(AttachedDevice_low, &v18);
    }
    else
    {
      v4 = 1;
      byte_1C000722C = 1;
      byte_1C000725C = 1;
      sub_1C0002C60((__int64)&DeviceObject.Reserved);
      DeviceObject.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&DeviceObject.Queue.Wcb.DeviceObject, 0);
      sub_1C0002CC0((__int32 *)&v18);
    }
    v16 = v18;
    if ( byte_1C0007358 )
      sub_1C0003D90(v18);
  }
  while ( (v16 & 8) == 0 );
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 4u )
    sub_1C00043B8(off_1C0007000->AttachedDevice, 16LL, &unk_1C0005448);
  PsTerminateSystemThread(0);
}
