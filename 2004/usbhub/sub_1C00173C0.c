/*
 * XREFs of sub_1C00173C0 @ 0x1C00173C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0010D74 @ 0x1C0010D74 (sub_1C0010D74.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0013058 @ 0x1C0013058 (sub_1C0013058.c)
 *     sub_1C0013DA0 @ 0x1C0013DA0 (sub_1C0013DA0.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0017660 @ 0x1C0017660 (sub_1C0017660.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0018160 @ 0x1C0018160 (sub_1C0018160.c)
 *     sub_1C001820C @ 0x1C001820C (sub_1C001820C.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C0018750 @ 0x1C0018750 (sub_1C0018750.c)
 *     sub_1C0018D98 @ 0x1C0018D98 (sub_1C0018D98.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 *     sub_1C0039D88 @ 0x1C0039D88 (sub_1C0039D88.c)
 *     sub_1C003C654 @ 0x1C003C654 (sub_1C003C654.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

void __fastcall sub_1C00173C0(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  struct _DEVICE_OBJECT *v3; // rbp
  __int64 v5; // r12
  _DWORD *v7; // r14
  KSPIN_LOCK *v8; // r13
  _DWORD *v9; // rdi
  int v10; // r8d
  _DWORD *v11; // rbx
  KIRQL v12; // dl
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  _DWORD *v17; // rbx
  KIRQL v18; // dl
  KIRQL v19; // al
  KSPIN_LOCK *v20; // r15
  KSPIN_LOCK **v21; // r8
  int v22; // ebx
  __int64 v23; // rdx
  int v24; // ebx
  int v25; // r8d
  unsigned int v26; // eax
  BOOLEAN v27; // r9
  __int64 v28; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+20h]

  v3 = *(struct _DEVICE_OBJECT **)(a3 + 48);
  v5 = a2;
  v30 = 0;
  v7 = sub_1C0011220((__int64)v3);
  v8 = (KSPIN_LOCK *)sub_1C000F050(*((_QWORD *)v7 + 148));
  v31 = *(_QWORD *)(*(_QWORD *)(a3 + 64) + 184LL);
  sub_1C000FD80((__int64)DeviceObject, 16, 1346651184, a3, (__int64)v3);
  v9 = sub_1C0011220((__int64)v3) + 236;
  sub_1C00176F8(DeviceObject, v9, 126LL, 1381131376LL);
  sub_1C0017660((_DWORD)v9, (_DWORD)v3, v10, 8, 8);
  v11 = sub_1C000F050((__int64)DeviceObject);
  sub_1C000F050(*((_QWORD *)v9 + 1));
  v9[8] = 1734964085;
  v12 = *((_BYTE *)v11 + 5064);
  *((_QWORD *)v11 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v11 + 632, v12);
  *(_QWORD *)(a3 + 112) = sub_1C0004060((__int64)DeviceObject, (__int64)v9, (__int64)v3, 1430414448, 1);
  sub_1C00176F8(DeviceObject, v9, 126LL, 809792336LL);
  v13 = sub_1C0011220(*(_QWORD *)(a3 + 48))[282];
  sub_1C000F050(*((_QWORD *)v9 + 1));
  v15 = sub_1C000F050(*((_QWORD *)v9 + 1))[1043];
  if ( v15 == 201 )
    goto LABEL_22;
  if ( v15 <= 201 )
  {
LABEL_21:
    sub_1C0017660((_DWORD)v9, (_DWORD)v3, v16, v13, 3);
    sub_1C0018364(DeviceObject, v9);
    v22 = -1073741101;
    goto LABEL_37;
  }
  if ( v15 <= 205 )
    goto LABEL_18;
  if ( v15 == 206 )
  {
LABEL_22:
    v24 = v13 - 1;
    if ( v24 )
    {
      if ( v24 == 6 )
      {
        sub_1C0017660((_DWORD)v9, (_DWORD)v3, v16, 7, 13);
        sub_1C0018364(DeviceObject, v9);
        sub_1C000FD80((__int64)DeviceObject, 16, 1999782960, 0LL, *((unsigned __int16 *)v7 + 714));
        KeWaitForSingleObject(v7 + 590, Executive, 0, v27, 0LL);
      }
      else
      {
        sub_1C0017660((_DWORD)v9, (_DWORD)v3, v16, 7, 8);
        sub_1C0018364(DeviceObject, v9);
        if ( (v7[355] & 0x4000000) != 0 )
        {
          sub_1C003C654(DeviceObject);
        }
        else
        {
          sub_1C0039D88(DeviceObject, v9, v3);
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
            sub_1C002E188(::DeviceObject->DeviceExtension, 0, 1, 16, (__int64)&unk_1C0062DF8, *((_WORD *)v7 + 714));
          sub_1C0010D74(v3, (POWER_STATE)1);
        }
        sub_1C00176F8(DeviceObject, v9, 126LL, 809792336LL);
        sub_1C0011220(*(_QWORD *)(a3 + 48));
        v7[596] = *((_DWORD *)v8 + 1054);
        sub_1C0017660((_DWORD)v9, (_DWORD)v3, v25, 1, 8);
        KeSetEvent((PRKEVENT)(v7 + 590), 0, 0);
        sub_1C0018364(DeviceObject, v9);
        sub_1C0018D98(DeviceObject, v3, 0LL);
        sub_1C0013058((__int64)DeviceObject, (__int64)v3, a3);
        if ( (v7[355] & 0x100) != 0 )
        {
          v26 = sub_1C0018160(*((_QWORD *)v9 + 1), v3, &v30);
          v23 = v26;
          if ( (v26 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)sub_1C001CEB4(v26) )
            sub_1C004A608(
              *((_QWORD *)v9 + 1),
              *((unsigned __int16 *)v7 + 714),
              49,
              0,
              0,
              v23,
              v30,
              (__int64)aPdopwrC,
              1186,
              0);
        }
      }
    }
    else
    {
      sub_1C0017660((_DWORD)v9, (_DWORD)v3, v16, 1, 13);
      sub_1C0018364(DeviceObject, v9);
      sub_1C000FD80((__int64)DeviceObject, 16, 1999848496, 0LL, *((unsigned __int16 *)v7 + 714));
    }
    v22 = 0;
    goto LABEL_37;
  }
  if ( v15 <= 208 )
    goto LABEL_21;
  if ( v15 > 211 )
  {
    if ( v15 != 212 )
    {
      if ( v15 == 213 )
      {
        v22 = -1073741810;
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
          sub_1C002E354(::DeviceObject->DeviceExtension, v14, 1, 14, (__int64)&unk_1C0062DF8, *((_WORD *)v7 + 714), 14);
        sub_1C0018364(DeviceObject, v9);
        goto LABEL_37;
      }
      goto LABEL_21;
    }
LABEL_18:
    sub_1C0017660((_DWORD)v9, (_DWORD)v3, v16, v13, 9);
    sub_1C0018364(DeviceObject, v9);
    v22 = -1073741101;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
      sub_1C002E354(::DeviceObject->DeviceExtension, v23, 1, 15, (__int64)&unk_1C0062DF8, *((_WORD *)v7 + 714), 211);
    goto LABEL_37;
  }
  sub_1C0017660((_DWORD)v9, (_DWORD)v3, v16, 3, 7);
  v17 = sub_1C000F050((__int64)DeviceObject);
  sub_1C000F050(*((_QWORD *)v9 + 1));
  v9[8] = 1734964085;
  v18 = *((_BYTE *)v17 + 5064);
  *((_QWORD *)v17 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v17 + 632, v18);
  sub_1C000FD80((__int64)DeviceObject, 16, 1349862448, a3, (__int64)v3);
  sub_1C0013058((__int64)DeviceObject, (__int64)v3, a3);
  sub_1C000FD80((__int64)DeviceObject, 16, 2003321904, 0LL, v5);
  v19 = KeAcquireSpinLockRaiseToDpc(v8 + 522);
  if ( !*((_BYTE *)v8 + 4184) )
  {
    KeReleaseSpinLock(v8 + 522, v19);
    sub_1C001820C(v9, v3, *(_QWORD *)(a3 + 64));
    v22 = 0;
LABEL_37:
    *((_QWORD *)v7 + 320) = MEMORY[0xFFFFF78000000014];
    sub_1C0003610((__int64)DeviceObject, v23, *(_QWORD **)(a3 + 112));
    v28 = *(_QWORD *)(a3 + 64);
    LODWORD(Timeout) = v22;
    *(_QWORD *)(a3 + 112) = 0LL;
    sub_1C0013DA0((__int64)v7, v28, &stru_1C0061E88, *(_DWORD *)(v31 + 24), Timeout);
    *(_DWORD *)(*(_QWORD *)(a3 + 64) + 48LL) = v22;
    IofCompleteRequest(*(PIRP *)(a3 + 64), 0);
    sub_1C0014E84((ULONG_PTR)v3, *(_QWORD *)(a3 + 64));
    sub_1C0018750(DeviceObject, a3);
    return;
  }
  v20 = (KSPIN_LOCK *)(a3 + 96);
  v21 = (KSPIN_LOCK **)v8[525];
  if ( *v21 != v8 + 524 )
    __fastfail(3u);
  *v20 = (KSPIN_LOCK)(v8 + 524);
  v20[1] = (KSPIN_LOCK)v21;
  *v21 = v20;
  v8[525] = (KSPIN_LOCK)v20;
  KeReleaseSpinLock(v8 + 522, v19);
}
