/*
 * XREFs of sub_1C0016F40 @ 0x1C0016F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001507C @ 0x1C001507C (sub_1C001507C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C0017660 @ 0x1C0017660 (sub_1C0017660.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

__int64 __fastcall sub_1C0016F40(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // r14
  _DWORD *v6; // rdi
  KIRQL v7; // al
  bool v8; // zf
  KIRQL v9; // dl
  int v10; // ebx
  int v11; // r8d
  int v12; // r9d
  _DWORD *v13; // rbx
  KIRQL v14; // dl
  unsigned __int8 v15; // al
  int v16; // edx
  int v17; // r8d
  char v18; // r10

  sub_1C000F050(a1);
  v5 = sub_1C0011220(a3);
  v6 = sub_1C0011220(a3) + 236;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 10, (__int64)&unk_1C0065268, *((_WORD *)v5 + 714));
  sub_1C000FD80(a1, 0x10000, 1936945239, a3, *((unsigned __int16 *)v5 + 714));
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  v6[34] = 1;
  *((_BYTE *)v6 + 132) = v7;
  v6[22] = 2018460752;
  v6[23] = 12;
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)v6;
  *((_QWORD *)v6 + 3) = KeGetCurrentThread();
  v8 = sub_1C0011220(a3)[281] == 3;
  v6[34] = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  v6[22] = 1734964085;
  v9 = *((_BYTE *)v6 + 132);
  if ( v8 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v9);
    sub_1C00176F8(a1, v6, 126LL, 1986356311LL);
    sub_1C000F050(*((_QWORD *)v6 + 1));
    v10 = sub_1C000F050(*((_QWORD *)v6 + 1))[1043];
    v12 = sub_1C0011220(a3)[282];
    if ( v10 == 201 && (v12 != 1 || (v5[355] & 4) != 0) )
    {
      sub_1C0017660((_DWORD)v6, a3, v11, v12, 12);
      v13 = sub_1C000F050(a1);
      sub_1C000F050(*((_QWORD *)v6 + 1));
      v6[8] = 1734964085;
      v14 = *((_BYTE *)v13 + 5064);
      *((_QWORD *)v13 + 168) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)v13 + 632, v14);
      v15 = sub_1C001507C(a1, a3, 0);
      sub_1C000FD80(a1, 0x10000, 1936938801, v15, a3);
      if ( v18 && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E55C(DeviceObject->DeviceExtension, v16, v17, 11, (__int64)&unk_1C0065268, *((_WORD *)v5 + 714), a3);
    }
    else
    {
      sub_1C0018364(a1, v6);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v9);
  }
  return sub_1C00171A0(a1, a3, 0LL, 1936945239LL);
}
