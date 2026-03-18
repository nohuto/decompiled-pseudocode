/*
 * XREFs of sub_1C0041990 @ 0x1C0041990
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0018570 @ 0x1C0018570 (sub_1C0018570.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C00413CC @ 0x1C00413CC (sub_1C00413CC.c)
 *     sub_1C0041EF0 @ 0x1C0041EF0 (sub_1C0041EF0.c)
 *     sub_1C00438A0 @ 0x1C00438A0 (sub_1C00438A0.c)
 *     sub_1C0043A40 @ 0x1C0043A40 (sub_1C0043A40.c)
 *     sub_1C0043ED8 @ 0x1C0043ED8 (sub_1C0043ED8.c)
 *     sub_1C0048584 @ 0x1C0048584 (sub_1C0048584.c)
 */

__int64 __fastcall sub_1C0041990(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT TargetDevice)
{
  struct _DEVICE_OBJECT *v3; // r14
  char *DeviceExtension; // rbx
  NTSTATUS v6; // esi
  PDEVICE_OBJECT v7; // rcx
  PDEVICE_OBJECT v9; // rax
  __m128i si128; // xmm0
  PDEVICE_OBJECT v11; // rax
  PDEVICE_OBJECT v12; // rax
  PDEVICE_OBJECT v13; // rax
  PDEVICE_OBJECT v14; // rax
  PDEVICE_OBJECT v15; // rax
  PDEVICE_OBJECT v16; // rax
  int v17; // edi
  _DWORD *v18; // rax
  int v19; // ecx
  int v20; // edx
  KIRQL v21; // al
  _DWORD *v22; // rax
  __int64 v23; // r9
  __int64 v24; // r10
  int v25; // r11d
  PDEVICE_OBJECT SourceDevice; // [rsp+80h] [rbp+40h] BYREF

  SourceDevice = 0LL;
  v3 = 0LL;
  DeviceExtension = 0LL;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x14u, (__int64)&unk_1C0062F40);
  v6 = IoCreateDevice(
         DriverObject,
         (stru_1C006B480.Dpc.TargetInfoAsUlong << 12) + 5280,
         0LL,
         0x8600u,
         0x80u,
         0,
         &SourceDevice);
  if ( v6 >= 0 )
  {
    if ( !SourceDevice )
      return 3221225473LL;
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    if ( !DeviceExtension )
      sub_1C002DC78((__int64)SourceDevice, (ULONG_PTR)DriverObject);
    *(_DWORD *)DeviceExtension = 541218120;
    *((_QWORD *)DeviceExtension + 1) = aVer1p;
  }
  v7 = SourceDevice;
  if ( !SourceDevice )
    return 3221225473LL;
  if ( v6 >= 0 )
  {
    v9 = IoAttachDeviceToDeviceStack(SourceDevice, TargetDevice);
    v7 = SourceDevice;
    v3 = v9;
    if ( !v9 )
    {
      IoDeleteDevice(SourceDevice);
      return 3221225473LL;
    }
  }
  if ( !v7 )
    sub_1C002DC78(0LL, (ULONG_PTR)DriverObject);
  if ( v6 < 0 )
    sub_1C002DC78((__int64)v7, (ULONG_PTR)DriverObject);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), 0x42554855u, 0, 0, 0x20u);
  *((_QWORD *)DeviceExtension + 150) = SourceDevice;
  *((_QWORD *)DeviceExtension + 149) = TargetDevice;
  *((_QWORD *)DeviceExtension + 171) = sub_1C0043F70;
  *((_QWORD *)DeviceExtension + 151) = v3;
  *((_QWORD *)DeviceExtension + 100) = DeviceExtension + 2936;
  *((_DWORD *)DeviceExtension + 340) = 1;
  *((_DWORD *)DeviceExtension + 685) = 1;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2744), NotificationEvent, 0);
  KeInitializeSemaphore((PRKSEMAPHORE)DeviceExtension + 155, 1, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1C0065950);
  *(__m128i *)(DeviceExtension + 1288) = si128;
  *(__m128i *)(DeviceExtension + 1268) = si128;
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 632);
  sub_1C0018570(dword_1C006B758);
  sub_1C0041EF0(SourceDevice);
  sub_1C0048584(SourceDevice, DeviceExtension + 880, stru_1C006B480.Dpc.TargetInfoAsUlong);
  v11 = SourceDevice;
  *((_QWORD *)DeviceExtension + 175) = SourceDevice;
  *((_QWORD *)DeviceExtension + 173) = 2017613128LL;
  *((_QWORD *)DeviceExtension + 174) = v11;
  *((_DWORD *)DeviceExtension + 374) = 1734964085;
  *((_DWORD *)DeviceExtension + 362) = 1734964085;
  *((_DWORD *)DeviceExtension + 358) = 1734964085;
  *((_DWORD *)DeviceExtension + 354) = 1734964085;
  *((_DWORD *)DeviceExtension + 365) = 1734964085;
  *((_DWORD *)DeviceExtension + 368) = 1734964085;
  *((_DWORD *)DeviceExtension + 371) = 1734964085;
  *((_DWORD *)DeviceExtension + 376) = 1734964085;
  *((_DWORD *)DeviceExtension + 384) = 0;
  v12 = SourceDevice;
  *((_QWORD *)DeviceExtension + 197) = SourceDevice;
  *((_QWORD *)DeviceExtension + 196) = v12;
  *((_QWORD *)DeviceExtension + 195) = 2017613128LL;
  *((_DWORD *)DeviceExtension + 418) = 1734964085;
  *((_DWORD *)DeviceExtension + 406) = 1734964085;
  *((_DWORD *)DeviceExtension + 402) = 1734964085;
  *((_DWORD *)DeviceExtension + 398) = 1734964085;
  *((_DWORD *)DeviceExtension + 409) = 1734964085;
  *((_DWORD *)DeviceExtension + 412) = 1734964085;
  *((_DWORD *)DeviceExtension + 415) = 1734964085;
  *((_DWORD *)DeviceExtension + 420) = 1734964085;
  v13 = SourceDevice;
  *((_QWORD *)DeviceExtension + 219) = SourceDevice;
  *((_QWORD *)DeviceExtension + 218) = v13;
  *((_DWORD *)DeviceExtension + 434) = 2017613128;
  *((_DWORD *)DeviceExtension + 435) = 4;
  *((_DWORD *)DeviceExtension + 462) = 1734964085;
  *((_DWORD *)DeviceExtension + 450) = 1734964085;
  *((_DWORD *)DeviceExtension + 446) = 1734964085;
  *((_DWORD *)DeviceExtension + 442) = 1734964085;
  *((_DWORD *)DeviceExtension + 453) = 1734964085;
  *((_DWORD *)DeviceExtension + 456) = 1734964085;
  *((_DWORD *)DeviceExtension + 459) = 1734964085;
  *((_DWORD *)DeviceExtension + 464) = 1734964085;
  v14 = SourceDevice;
  *((_QWORD *)DeviceExtension + 241) = SourceDevice;
  *((_DWORD *)DeviceExtension + 478) = 2017613128;
  *((_DWORD *)DeviceExtension + 479) = 5;
  *((_QWORD *)DeviceExtension + 240) = v14;
  *((_DWORD *)DeviceExtension + 506) = 1734964085;
  *((_DWORD *)DeviceExtension + 494) = 1734964085;
  *((_DWORD *)DeviceExtension + 490) = 1734964085;
  *((_DWORD *)DeviceExtension + 486) = 1734964085;
  *((_DWORD *)DeviceExtension + 497) = 1734964085;
  *((_DWORD *)DeviceExtension + 500) = 1734964085;
  *((_DWORD *)DeviceExtension + 503) = 1734964085;
  *((_DWORD *)DeviceExtension + 508) = 1734964085;
  v15 = SourceDevice;
  *((_QWORD *)DeviceExtension + 263) = SourceDevice;
  *((_QWORD *)DeviceExtension + 262) = v15;
  *((_DWORD *)DeviceExtension + 522) = 2017613128;
  *((_DWORD *)DeviceExtension + 523) = 6;
  *((_DWORD *)DeviceExtension + 550) = 1734964085;
  *((_DWORD *)DeviceExtension + 538) = 1734964085;
  *((_DWORD *)DeviceExtension + 534) = 1734964085;
  *((_DWORD *)DeviceExtension + 530) = 1734964085;
  *((_DWORD *)DeviceExtension + 541) = 1734964085;
  *((_DWORD *)DeviceExtension + 544) = 1734964085;
  *((_DWORD *)DeviceExtension + 547) = 1734964085;
  *((_DWORD *)DeviceExtension + 552) = 1734964085;
  v16 = SourceDevice;
  *((_QWORD *)DeviceExtension + 285) = SourceDevice;
  *((_QWORD *)DeviceExtension + 284) = v16;
  *((_DWORD *)DeviceExtension + 566) = 2017613128;
  *((_DWORD *)DeviceExtension + 567) = 8;
  *((_DWORD *)DeviceExtension + 594) = 1734964085;
  *((_DWORD *)DeviceExtension + 582) = 1734964085;
  *((_DWORD *)DeviceExtension + 578) = 1734964085;
  *((_DWORD *)DeviceExtension + 574) = 1734964085;
  *((_DWORD *)DeviceExtension + 585) = 1734964085;
  *((_DWORD *)DeviceExtension + 588) = 1734964085;
  *((_DWORD *)DeviceExtension + 591) = 1734964085;
  *((_DWORD *)DeviceExtension + 596) = 1734964085;
  IoRegisterShutdownNotification(SourceDevice);
  v17 = sub_1C00413CC((__int64)SourceDevice);
  if ( v17 >= 0 )
  {
    v18 = sub_1C000F050((__int64)SourceDevice);
    LOBYTE(v19) = 1;
    sub_1C00438A0(v19, v20, (_DWORD)SourceDevice, 0, 0LL, (__int64)(v18 + 346));
    SourceDevice->Flags |= 0x2000u;
    SourceDevice->Flags &= ~0x80u;
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
    *((_DWORD *)DeviceExtension + 314) = 1;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v21);
    v22 = sub_1C000F050((__int64)SourceDevice);
    v17 = sub_1C0043ED8(v22 + 346, 1LL);
  }
  sub_1C000FD80((__int64)SourceDevice, 2, 1749116004, 0LL, v17);
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
    sub_1C000FD80((__int64)SourceDevice, v25, 1749115937, v23, v24);
    sub_1C0043A40(SourceDevice);
    IoDetachDevice(v3);
    IoDeleteDevice(SourceDevice);
  }
  return (unsigned int)v17;
}
