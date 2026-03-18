/*
 * XREFs of sub_1C00101B0 @ 0x1C00101B0
 * Callers:
 *     sub_1C001AA90 @ 0x1C001AA90 (sub_1C001AA90.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012210 @ 0x1C0012210 (sub_1C0012210.c)
 *     sub_1C0012C98 @ 0x1C0012C98 (sub_1C0012C98.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C001CE0C @ 0x1C001CE0C (sub_1C001CE0C.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003C33C @ 0x1C003C33C (sub_1C003C33C.c)
 */

NTSTATUS __fastcall sub_1C00101B0(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char *DeviceExtension; // rdi
  __int64 v6; // rcx
  __int64 LowPart; // r14
  NTSTATUS v8; // eax
  __int64 v9; // rbx
  char *v10; // rbx
  char *v11; // rsi
  _DWORD *v12; // rax
  __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  KIRQL v17; // dl
  __int16 v19; // r9
  _DWORD *v20; // rax
  __int64 v21; // rdx
  _DWORD *v22; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rbx
  KIRQL v25; // dl
  struct _IO_STACK_LOCATION *v26; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = (char *)a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_32;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    sub_1C002DC78(a1, DeviceExtension);
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v6 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v6 = 1986356304;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = a2;
  }
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (_DWORD)LowPart != 1 )
  {
    v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), a2, File, 1u, 0x20u);
    v9 = v8;
    if ( (v8 & 0xC0000000) == 0xC0000000 )
    {
      a2->IoStatus.Status = v8;
      sub_1C003C33C(a1, a2, 2881LL);
      sub_1C000FD80((__int64)a1, 16, 1348761121, v9, (__int64)a2);
      IofCompleteRequest(a2, 0);
      return v9;
    }
  }
  v10 = (char *)a1->DeviceExtension;
  if ( !v10 )
LABEL_32:
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v10 != 541218120 )
    sub_1C002DC78(a1, a1->DeviceExtension);
  v11 = v10 + 1384;
  v10[5064] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 632);
  *((_DWORD *)v10 + 356) = *((_DWORD *)v10 + 1043);
  *((_DWORD *)v10 + 357) = 102;
  *((_DWORD *)v10 + 354) = 844055622;
  *((_DWORD *)v10 + 355) = 1937139044;
  *((_QWORD *)v10 + 176) = KeGetCurrentThread();
  *((_QWORD *)v10 + 168) = v10 + 1384;
  if ( (_DWORD)LowPart == 1 )
  {
    sub_1C000FD80((__int64)a1, 16, 1348420656, 0LL, (__int64)a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != v19 )
      sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 23, (__int64)&unk_1C0062DE8);
    sub_1C0012210(a1, a2, 0LL, &unk_1C0061F98, 1, 0);
    v20 = sub_1C000F050((__int64)a1);
    v21 = ((unsigned __int8)v20[207] + 1) & 7;
    v20[207] = v21;
    v21 *= 32LL;
    *(_DWORD *)((char *)v20 + v21 + 284) = 107;
    *(_DWORD *)((char *)v20 + v21 + 288) = v20[1043];
    *(_QWORD *)((char *)v20 + v21 + 292) = 211LL;
    v20[1043] = 211;
    v22 = sub_1C000F050((__int64)a1);
    v23 = *((_QWORD *)v10 + 174);
    v24 = v22;
    sub_1C000F050(v23);
    *((_DWORD *)v11 + 8) = 1734964085;
    v25 = *((_BYTE *)v24 + 5064);
    *((_QWORD *)v24 + 168) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)v24 + 632, v25);
    return sub_1C0012C98(a1, v11, a2);
  }
  else
  {
    if ( (int)LowPart >= 2 )
    {
      if ( (int)LowPart <= 3 )
      {
        sub_1C000FD80((__int64)a1, 16, 1348420728, LowPart, (__int64)a2);
        sub_1C0012210(a1, a2, 0LL, &unk_1C0061F68, LowPart, 0);
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
          sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 24, (__int64)&unk_1C0062DE8, LowPart);
        sub_1C001CE0C(a1, 1LL, 204LL, 106LL);
        sub_1C0018364(a1, v10 + 1384);
        return sub_1C000F880(a1, *((_QWORD *)DeviceExtension + 114), a2);
      }
      if ( (_DWORD)LowPart == 4 )
      {
        sub_1C000FD80((__int64)a1, 16, 1348420728, 4LL, (__int64)a2);
        sub_1C0012210(a1, a2, 0LL, &unk_1C0061F68, 4, 0);
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 25, (__int64)&unk_1C0062DE8, 4);
        }
        v12 = sub_1C000F050((__int64)a1);
        v13 = ((unsigned __int8)v12[207] + 1) & 7;
        v12[207] = v13;
        v13 *= 32LL;
        *(_DWORD *)((char *)v12 + v13 + 284) = 105;
        *(_DWORD *)((char *)v12 + v13 + 288) = v12[1043];
        *(_QWORD *)((char *)v12 + v13 + 292) = 204LL;
        v12[1043] = 204;
        v14 = sub_1C000F050((__int64)a1);
        v15 = *((_QWORD *)v10 + 174);
        v16 = v14;
        sub_1C000F050(v15);
        *((_DWORD *)v11 + 8) = 1734964085;
        v17 = *((_BYTE *)v16 + 5064);
        *((_QWORD *)v16 + 168) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)v16 + 632, v17);
        return sub_1C000F880(a1, *((_QWORD *)DeviceExtension + 114), a2);
      }
    }
    sub_1C0018364(a1, v10 + 1384);
    sub_1C003C33C(a1, a2, 2945LL);
    v26 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v26[-1].MajorFunction = *(_OWORD *)&v26->MajorFunction;
    *(_OWORD *)&v26[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v26->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v26[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v26->Parameters.SetQuota + 6);
    v26[-1].FileObject = v26->FileObject;
    v26[-1].Control = 0;
    return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), a2);
  }
}
