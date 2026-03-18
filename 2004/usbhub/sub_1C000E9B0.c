/*
 * XREFs of sub_1C000E9B0 @ 0x1C000E9B0
 * Callers:
 *     sub_1C001AA90 @ 0x1C001AA90 (sub_1C001AA90.c)
 * Callees:
 *     sub_1C000200C @ 0x1C000200C (sub_1C000200C.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C0012210 @ 0x1C0012210 (sub_1C0012210.c)
 *     sub_1C00125E0 @ 0x1C00125E0 (sub_1C00125E0.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C001B49C @ 0x1C001B49C (sub_1C001B49C.c)
 *     sub_1C001CE0C @ 0x1C001CE0C (sub_1C001CE0C.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 *     sub_1C0031714 @ 0x1C0031714 (sub_1C0031714.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C003C33C @ 0x1C003C33C (sub_1C003C33C.c)
 *     sub_1C003C45C @ 0x1C003C45C (sub_1C003C45C.c)
 *     sub_1C0043ED8 @ 0x1C0043ED8 (sub_1C0043ED8.c)
 *     sub_1C005C04C @ 0x1C005C04C (sub_1C005C04C.c)
 */

__int64 __fastcall sub_1C000E9B0(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  DWORD LowPart; // r12d
  char *DeviceExtension; // r13
  __int64 v6; // rcx
  unsigned int v7; // r15d
  const EVENT_DESCRIPTOR *v8; // rbx
  _DWORD *v9; // rcx
  const GUID *v10; // rdx
  _DWORD *v11; // rdi
  char *v12; // rbx
  int v13; // ecx
  __int64 v14; // rcx
  struct _KSEMAPHORE *v15; // rdi
  PVOID v16; // rdi
  _QWORD *v17; // r15
  char *PoolWithTag; // rax
  char *v19; // rdi
  void (__fastcall *v20)(PIRP, char *); // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  unsigned int v24; // r15d
  __int64 v25; // rax
  void *v26; // r9
  __int64 v27; // r8
  int v28; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v30; // ebx
  void *v31; // r9
  __int128 *v32; // r8
  int v33; // edi
  int v34; // ebx
  unsigned int v35; // edi
  __int128 *v36; // r8
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rax
  void *v40; // r9
  __int128 v41; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E8h] [rbp-20h] BYREF

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( !DeviceObject )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_88;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceExtension);
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v6 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v6 = 1937339216;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = Irp;
  }
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, File, 1u, 0x20u);
  v8 = (const EVENT_DESCRIPTOR *)&unk_1C0061F08;
  if ( LowPart != 1 )
    v8 = &EventDescriptor;
  v41 = 0LL;
  if ( dword_1C006B650 )
  {
    v9 = DeviceObject->DeviceExtension;
    if ( !v9 )
      sub_1C002DC78(DeviceObject, 0LL);
    if ( *v9 != 541218120 )
      sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
    if ( qword_1C006B3A0 && (int)qword_1C006B3A0(Irp, &v41) >= 0 )
      v10 = (const GUID *)&v41;
    else
      v10 = 0LL;
    sub_1C00125E0(v8, v10);
  }
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v7;
    sub_1C000FD80((_DWORD)DeviceObject, 16, 829651315, v7, (__int64)Irp);
    sub_1C003C33C(DeviceObject, Irp, 2585LL);
    v26 = &unk_1C0062958;
    if ( LowPart != 1 )
      v26 = &unk_1C0062948;
    sub_1C0012210(DeviceObject, Irp, 0LL, v26, LowPart, v7);
    IofCompleteRequest(Irp, 0);
    return v7;
  }
  v11 = DeviceObject->DeviceExtension;
  if ( !v11 )
LABEL_88:
    sub_1C002DC78(DeviceObject, 0LL);
  if ( *v11 != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  v12 = (char *)(v11 + 346);
  KeWaitForSingleObject(v11 + 1240, Executive, 0, 0, 0LL);
  v11[360] = v11[340];
  v11[361] = 101;
  v11[358] = 827278406;
  *((_QWORD *)v11 + 176) = KeGetCurrentThread();
  v13 = v11[6];
  *((_QWORD *)v11 + 166) = v11 + 346;
  v14 = ((_BYTE)v13 + 1) & 7;
  v11[6] = v14;
  v14 *= 32LL;
  *(_DWORD *)((char *)v11 + v14 + 28) = 101;
  *(_DWORD *)((char *)v11 + v14 + 32) = v11[340];
  *(_DWORD *)((char *)v11 + v14 + 36) = v11[340];
  *(_DWORD *)((char *)v11 + v14 + 40) = 812874099;
  sub_1C000F050(*((_QWORD *)v11 + 174));
  if ( *(_DWORD *)(sub_1C000F050(*((_QWORD *)v11 + 174)) + 1360) == 6 )
  {
    sub_1C00317D8(DeviceObject, v11 + 346);
    sub_1C0011260(DeviceObject, *((_QWORD *)DeviceExtension + 346));
    v7 = sub_1C003C45C(DeviceObject, 0LL, 0LL);
    if ( v7 == -1073741536 )
      sub_1C0043ED8(v11 + 346, 8LL);
    else
      KeWaitForSingleObject(DeviceExtension + 2576, Executive, 0, 0, 0LL);
    sub_1C0031714((_DWORD)DeviceObject, (_DWORD)v12, 101, 863205747, 1);
  }
  sub_1C000F050(*((_QWORD *)v11 + 174));
  if ( *(_DWORD *)(sub_1C000F050(*((_QWORD *)v11 + 174)) + 1360) != 5 )
  {
    v42 = 0LL;
    sub_1C00317D8(DeviceObject, v12);
    sub_1C000FD80((_DWORD)DeviceObject, 16, 846428531, v7, (__int64)Irp);
    sub_1C00176F8(DeviceObject, v12, 101LL, 829651315LL);
    v27 = 201LL;
    if ( LowPart != 1 )
      v27 = 205LL;
    sub_1C001CE0C(DeviceObject, 0LL, v27, (unsigned int)(LowPart != 1) + 127);
    sub_1C0018364(DeviceObject, v12);
    v28 = sub_1C005C04C(Irp, &v42);
    sub_1C003C33C(DeviceObject, Irp, 2647LL);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v30 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v31 = &unk_1C0062958;
    if ( LowPart != 1 )
      v31 = &unk_1C0062948;
    v32 = &v42;
    if ( v28 < 0 )
      v32 = 0LL;
    goto LABEL_65;
  }
  v15 = (struct _KSEMAPHORE *)DeviceObject->DeviceExtension;
  if ( !v15 )
    goto LABEL_88;
  if ( v15->Header.LockNV != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  sub_1C000F050(*((_QWORD *)v12 + 1));
  *((_DWORD *)v12 + 12) = 1734964085;
  v15[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v15 + 155, 16, 1, 0);
  v16 = DeviceObject->DeviceExtension;
  if ( !v16 )
    goto LABEL_88;
  if ( *(_DWORD *)v16 != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  *((_BYTE *)v16 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16 + 632);
  *((_DWORD *)v12 + 10) = *((_DWORD *)v16 + 1043);
  *((_DWORD *)v12 + 11) = 101;
  *((_DWORD *)v12 + 8) = 844055622;
  *((_DWORD *)v12 + 9) = 846428531;
  *((_QWORD *)v12 + 3) = KeGetCurrentThread();
  *((_QWORD *)v16 + 168) = v12;
  sub_1C000F050(*((_QWORD *)v12 + 1));
  if ( *(_DWORD *)(sub_1C000F050(*((_QWORD *)v12 + 1)) + 4172) == 213 )
  {
    v43 = 0LL;
    sub_1C001CE0C(DeviceObject, LowPart, 213LL, (unsigned int)(LowPart == 1) + 103);
    sub_1C0018364(DeviceObject, v12);
    v33 = sub_1C005C04C(Irp, &v43);
    sub_1C003C33C(DeviceObject, Irp, 2680LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v30 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v31 = &unk_1C0062958;
    if ( LowPart != 1 )
      v31 = &unk_1C0062948;
    v32 = &v43;
    if ( v33 < 0 )
      v32 = 0LL;
LABEL_65:
    sub_1C0012210(DeviceObject, 0LL, v32, v31, LowPart, v30);
    return v30;
  }
  if ( LowPart == 1 && *(_DWORD *)(sub_1C000F050(DeviceObject) + 4212) == 1 )
  {
    v44 = 0LL;
    sub_1C0018364(DeviceObject, v12);
    v34 = sub_1C005C04C(Irp, &v44);
    sub_1C003C33C(DeviceObject, Irp, 2708LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v35 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    v36 = &v44;
    if ( v34 < 0 )
      v36 = 0LL;
    sub_1C0012210(DeviceObject, 0LL, v36, &unk_1C0062958, LowPart, v35);
    return v35;
  }
  v17 = DeviceObject->DeviceExtension;
  if ( !v17 )
    goto LABEL_88;
  if ( *(_DWORD *)v17 != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, 0x90uLL, 0x42554855u);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0LL, 144LL);
    v20 = (void (__fastcall *)(PIRP, char *))qword_1C006B3A0;
    *(_DWORD *)v19 = 2018662224;
    *((_DWORD *)v19 + 8) = 11;
    *((_QWORD *)v19 + 6) = DeviceObject;
    *((_QWORD *)v19 + 5) = DeviceObject;
    *((_DWORD *)v19 + 6) = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    *((_QWORD *)v19 + 7) = Irp;
    if ( v20 )
      v20(Irp, v19 + 120);
    *((_QWORD *)v19 + 9) = v12;
    *((_QWORD *)v19 + 10) = KeGetCurrentThread();
    v12[132] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
    *((_DWORD *)v12 + 34) = 1;
    stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
    if ( LowPart != 1 )
    {
      v17[114] = v19;
      v19[136] = 1;
    }
    v21 = (_QWORD *)qword_1C006B620;
    v22 = v19 + 8;
    if ( *(__int64 **)qword_1C006B620 != &qword_1C006B618 )
      __fastfail(3u);
    *((_QWORD *)v19 + 2) = qword_1C006B620;
    *v22 = &qword_1C006B618;
    *v21 = v22;
    qword_1C006B620 = (__int64)(v19 + 8);
    *((_DWORD *)v12 + 34) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v12[132]);
    if ( LowPart == 1 )
    {
      *((_QWORD *)DeviceExtension + 634) = MEMORY[0xFFFFF78000000014];
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      {
        v39 = sub_1C000F050(DeviceObject);
        sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 22, (__int64)&unk_1C0062DE8, *(_DWORD *)(v39 + 4208));
      }
      sub_1C000F050(*((_QWORD *)v12 + 1));
      v24 = *(_DWORD *)(sub_1C000F050(*((_QWORD *)v12 + 1)) + 4172);
      sub_1C000F050(*((_QWORD *)v12 + 1));
      v25 = sub_1C000F050(*((_QWORD *)v12 + 1));
      if ( *(_DWORD *)(v25 + 4172) == 205 )
        return sub_1C001B49C(DeviceObject, Irp, v19);
      if ( *(_DWORD *)(v25 + 4172) == 206 )
        v24 = 201;
      *(_DWORD *)(sub_1C000F050(DeviceObject) + 4212) = 1;
      sub_1C001CE0C(DeviceObject, 0LL, v24, 129LL);
      sub_1C0018364(DeviceObject, v12);
    }
    else if ( LowPart == 5 || LowPart - 2 <= 4 )
    {
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      {
        if ( LOWORD(::DeviceObject->DeviceType) )
        {
          v37 = sub_1C000F050(DeviceObject);
          sub_1C002E354(
            ::DeviceObject->DeviceExtension,
            v38,
            1,
            21,
            (__int64)&unk_1C0062DE8,
            LowPart,
            *(_DWORD *)(v37 + 4208));
        }
      }
      return sub_1C000200C(DeviceObject, Irp, v19);
    }
    sub_1C003C33C(DeviceObject, Irp, 2821LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v30 = PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
    return v30;
  }
  sub_1C0018364(DeviceObject, v12);
  Irp->IoStatus.Status = -1073741670;
  sub_1C000FD80((_DWORD)DeviceObject, 16, 829651315, -1073741670, (__int64)Irp);
  sub_1C003C33C(DeviceObject, Irp, 2740LL);
  v40 = &unk_1C0062958;
  if ( LowPart != 1 )
    v40 = &unk_1C0062948;
  sub_1C0012210(DeviceObject, Irp, 0LL, v40, LowPart, -1073741670);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
  return 3221225626LL;
}
