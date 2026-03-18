/*
 * XREFs of sub_1C000F880 @ 0x1C000F880
 * Callers:
 *     sub_1C00101B0 @ 0x1C00101B0 (sub_1C00101B0.c)
 * Callees:
 *     sub_1C0002310 @ 0x1C0002310 (sub_1C0002310.c)
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0010064 @ 0x1C0010064 (sub_1C0010064.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001507C @ 0x1C001507C (sub_1C001507C.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 *     sub_1C001B180 @ 0x1C001B180 (sub_1C001B180.c)
 *     sub_1C001C744 @ 0x1C001C744 (sub_1C001C744.c)
 *     sub_1C002D554 @ 0x1C002D554 (sub_1C002D554.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C003B9F4 @ 0x1C003B9F4 (sub_1C003B9F4.c)
 *     sub_1C003BA78 @ 0x1C003BA78 (sub_1C003BA78.c)
 *     sub_1C003BACC @ 0x1C003BACC (sub_1C003BACC.c)
 *     sub_1C003C4AC @ 0x1C003C4AC (sub_1C003C4AC.c)
 */

__int64 __fastcall sub_1C000F880(PDEVICE_OBJECT DeviceObject, __int64 a2, IRP *a3)
{
  IRP *v3; // r13
  int v6; // r12d
  int v7; // ebp
  int v8; // r15d
  char v9; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v11; // r10
  int v12; // r9d
  __int64 v13; // r10
  int v14; // eax
  int v15; // r9d
  DWORD LowPart; // r8d
  DWORD v17; // r8d
  _DWORD *v18; // rbx
  unsigned __int16 i; // bx
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v21; // rsi
  __int64 v22; // rcx
  KIRQL v23; // bp
  PVOID v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _DWORD *v29; // rsi
  int v30; // r9d
  int v31; // eax
  _DWORD *v32; // rax
  struct _IO_STACK_LOCATION *v33; // r11
  _DWORD *v34; // rbx
  __int64 Options; // rax
  __int64 v36; // r10
  __int64 v37; // r11
  __int64 v38; // r10
  unsigned int v39; // ebx
  __int64 v41; // rbp
  int v42; // edx
  int v43; // r8d
  unsigned __int16 j; // r13
  __int64 v45; // rax
  __int64 v46; // rsi
  _DWORD *v47; // [rsp+40h] [rbp-48h]
  __int64 v48; // [rsp+48h] [rbp-40h]

  v3 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v47 = sub_1C000F050((__int64)DeviceObject);
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1349731448, a2, (__int64)v3);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  v48 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = v3;
  sub_1C000FD80((_DWORD)DeviceObject, 8, 1381192816, 0, 0LL);
  sub_1C001A550(DeviceObject, v11, 10LL);
  sub_1C000F050((__int64)DeviceObject);
  sub_1C000FD80((_DWORD)DeviceObject, 2048, 1346458174, 3, v48);
  *(_DWORD *)(v13 + 128) = v12;
  v14 = sub_1C0002AF0(DeviceObject, v13, 7);
  sub_1C000FD80((_DWORD)DeviceObject, 2048, 1346458172, 0, v14);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  *(_DWORD *)(a2 + 28) = LowPart;
  v17 = LowPart - 3;
  if ( v17 )
  {
    if ( v17 == 1 )
    {
      v47[1054] = 0;
      sub_1C000FD80((_DWORD)DeviceObject, 16, 1349280819, v15, (__int64)v3);
      v18 = sub_1C000F050((__int64)DeviceObject);
      sub_1C001B180(DeviceObject);
      if ( (v18[640] & 0x80000) != 0 && (int)sub_1C002D554(DeviceObject, 0LL) >= 0 )
        v18[640] &= ~0x80000u;
      sub_1C001B180(DeviceObject);
      sub_1C001C744(DeviceObject);
      for ( i = 1; ; ++i )
      {
        if ( !DeviceObject )
          sub_1C002DC78(0LL, 0LL);
        DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !DeviceExtension )
LABEL_39:
          sub_1C002DC78(DeviceObject, 0LL);
        if ( *(_DWORD *)DeviceExtension != 541218120 )
          sub_1C002DC78(DeviceObject, DeviceExtension);
        if ( i > DeviceExtension[2938] )
          break;
        v21 = 0LL;
        if ( (dword_1C006B268 & 0x100) != 0 )
        {
          v22 = *((_QWORD *)DeviceExtension + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
          *(_DWORD *)v22 = 1329877100;
          *(_QWORD *)(v22 + 16) = i;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 24) = 1180976179LL;
        }
        v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
        stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
        if ( (dword_1C006B268 & 8) != 0 )
        {
          v24 = DeviceObject->DeviceExtension;
          if ( v24 )
          {
            v25 = *((_QWORD *)v24 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
            *(_DWORD *)v25 = 1413771367;
            *(_QWORD *)(v25 + 16) = i;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 24) = 0LL;
          }
        }
        if ( i )
        {
          v26 = (unsigned __int8 *)DeviceObject->DeviceExtension;
          if ( !v26 )
            goto LABEL_39;
          if ( *(_DWORD *)v26 != 541218120 )
            sub_1C002DC78(DeviceObject, v26);
          if ( i <= v26[2938] )
          {
            v27 = *((_QWORD *)v26 + 382);
            if ( v27 )
            {
              v28 = 2928LL * i + v27 - 2928;
              if ( (dword_1C006B268 & 8) != 0 )
              {
                v27 = *((_QWORD *)v26 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
                *(_DWORD *)v27 = 1044672615;
                *(_QWORD *)(v27 + 8) = 0LL;
                *(_QWORD *)(v27 + 16) = i;
                *(_QWORD *)(v27 + 24) = v28;
              }
              if ( v28 )
              {
                v21 = *(_QWORD *)(v28 + 392);
                if ( v21 )
                  v21 = sub_1C0002310(v27, v21, (__int64)v3, 1180976179);
              }
            }
          }
        }
        stru_1C006B480.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v23);
        if ( v21 )
        {
          v41 = sub_1C0011220(v21);
          if ( (unsigned __int8)sub_1C001507C(DeviceObject, v21, 3221225860LL)
            && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            if ( LOWORD(::DeviceObject->DeviceType) )
              sub_1C002E55C(
                ::DeviceObject->DeviceExtension,
                v42,
                v43,
                29,
                (__int64)&unk_1C0062DE8,
                *(_WORD *)(v41 + 1428),
                v21);
          }
          sub_1C00171A0(DeviceObject, v21, v3, 1180976179LL);
        }
      }
    }
    v29 = v47;
  }
  else
  {
    v47[1054] = *(_DWORD *)(a2 + 88);
    sub_1C000FD80((_DWORD)DeviceObject, 16, 1349280818, v15, (__int64)v3);
    if ( *(&stru_1C006B480.AlignmentRequirement + 1) )
    {
      if ( *(&stru_1C006B480.AlignmentRequirement + 1) == 1 )
      {
        v7 = 1;
      }
      else if ( *(&stru_1C006B480.AlignmentRequirement + 1) == 3 )
      {
        v7 = HIBYTE(v47[640]) & 1;
      }
    }
    for ( j = 1; j <= *((unsigned __int8 *)sub_1C000F050((__int64)DeviceObject) + 2938); ++j )
    {
      v45 = sub_1C0016B5C(DeviceObject, j, a3, 1180976178LL);
      v46 = v45;
      if ( v45 )
      {
        ++v8;
        if ( *(_BYTE *)(sub_1C0011220(v45) + 2740) )
          v9 = 1;
        if ( (unsigned __int8)sub_1C003C4AC(v46) )
        {
          sub_1C00171A0(DeviceObject, v46, a3, 1180976178LL);
          v6 = 1;
          if ( !*(&stru_1C006B480.AlignmentRequirement + 1) )
            v7 = 1;
        }
        else
        {
          sub_1C00171A0(DeviceObject, v46, a3, 1180976178LL);
        }
      }
    }
    v29 = v47;
    if ( v9 && ((v47[640] & 1) != 0 || v8 == 1) || v7 )
    {
      sub_1C003BA78(DeviceObject);
    }
    else
    {
      sub_1C003BACC(DeviceObject);
      if ( !v6 )
      {
        sub_1C001B180(DeviceObject);
        sub_1C001C744(DeviceObject);
        v3 = a3;
        goto LABEL_27;
      }
    }
    sub_1C0010064(DeviceObject);
    sub_1C003B9F4(DeviceObject);
    v3 = a3;
  }
LABEL_27:
  sub_1C000F050((__int64)DeviceObject);
  sub_1C000FD80((_DWORD)DeviceObject, 2048, 1112756286, 0, 0LL);
  v31 = sub_1C0002AF0(DeviceObject, v48, v30 + 6);
  sub_1C000FD80((_DWORD)DeviceObject, 2048, 1112756284, 0, v31);
  v32 = sub_1C000F050((__int64)DeviceObject);
  v33 = v3->Tail.Overlay.CurrentStackLocation;
  v34 = v32;
  Options = v33->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    sub_1C000FD80((_DWORD)DeviceObject, 16, 1347374641, *(_QWORD *)&v34[2 * Options + 210], (__int64)v3);
    sub_1C000FD80((_DWORD)DeviceObject, 16, 1347374642, *(_QWORD *)&v34[2 * v36 + 214], v37);
    *(_QWORD *)&v34[2 * v38 + 210] = 0LL;
    *(_QWORD *)&v34[2 * v38 + 214] = 0LL;
    v34[v38 + 218] = 4510;
    PoStartNextPowerIrp(v3);
    v33 = v3->Tail.Overlay.CurrentStackLocation;
  }
  ++v3->CurrentLocation;
  v3->Tail.Overlay.CurrentStackLocation = v33 + 1;
  v39 = PoCallDriver(*((PDEVICE_OBJECT *)v29 + 151), v3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v29 + 306), v3, 0x20u);
  return v39;
}
