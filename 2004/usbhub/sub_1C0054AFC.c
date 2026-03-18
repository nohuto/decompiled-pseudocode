/*
 * XREFs of sub_1C0054AFC @ 0x1C0054AFC
 * Callers:
 *     sub_1C000ABD0 @ 0x1C000ABD0 (sub_1C000ABD0.c)
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 *     sub_1C003A2BC @ 0x1C003A2BC (sub_1C003A2BC.c)
 *     sub_1C003A450 @ 0x1C003A450 (sub_1C003A450.c)
 *     sub_1C003A5DC @ 0x1C003A5DC (sub_1C003A5DC.c)
 *     sub_1C003A78C @ 0x1C003A78C (sub_1C003A78C.c)
 *     sub_1C003AA2C @ 0x1C003AA2C (sub_1C003AA2C.c)
 *     sub_1C003AB30 @ 0x1C003AB30 (sub_1C003AB30.c)
 *     sub_1C003AC9C @ 0x1C003AC9C (sub_1C003AC9C.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C0029E1C @ 0x1C0029E1C (sub_1C0029E1C.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C0036194 @ 0x1C0036194 (sub_1C0036194.c)
 *     sub_1C0053D28 @ 0x1C0053D28 (sub_1C0053D28.c)
 *     sub_1C0054958 @ 0x1C0054958 (sub_1C0054958.c)
 *     sub_1C0058108 @ 0x1C0058108 (sub_1C0058108.c)
 *     sub_1C0058268 @ 0x1C0058268 (sub_1C0058268.c)
 *     sub_1C005C198 @ 0x1C005C198 (sub_1C005C198.c)
 */

void __fastcall sub_1C0054AFC(__int64 a1, struct _DEVICE_OBJECT *a2, int a3, int a4, __int64 a5)
{
  __int64 v9; // r15
  char v10; // r12
  __int64 v11; // rdx
  int v12; // r10d
  _DWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  KIRQL v17; // dl
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // r8

  v9 = 0LL;
  v10 = 0;
  sub_1C000FD80(a1, 256, 1682981967, (__int64)a2, a3);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) != (_WORD)v12 )
    sub_1C002E62C((__int64)DeviceObject->DeviceExtension, v11, v12 + 1, v12 + 25, (__int64)&unk_1C0065258, a2);
  v13 = sub_1C0011220((__int64)a2);
  if ( a1 )
  {
    sub_1C000F050(a1);
    v9 = a5 + 132;
  }
  else
  {
    sub_1C0054958(a2);
  }
  if ( a3 == 6 )
  {
    *(_DWORD *)(a5 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
  }
  else
  {
    if ( a3 != 1 )
      sub_1C005C198(v13, &unk_1C0062B48, 0LL);
    v14 = v13 + 330;
    v15 = *((_QWORD *)v13 + 165);
    if ( v15 || *((_QWORD *)v13 + 166) )
    {
      if ( *(_QWORD **)(v15 + 8) != v14 || (v16 = (_QWORD *)*((_QWORD *)v13 + 166), (_QWORD *)*v16 != v14) )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      *v14 = 0LL;
      *((_QWORD *)v13 + 166) = 0LL;
    }
    if ( (v13[356] & 8) != 0 )
    {
      sub_1C0058268(a1, a2, v9);
      v10 = 1;
    }
    sub_1C0036194((__int64)a2, 6, a4);
    *(_DWORD *)(a5 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v17 = *(_BYTE *)(a5 + 132);
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v17);
    if ( v10 )
      sub_1C000FE00(a1, *((_WORD *)v13 + 714), 1, 0);
    if ( a1 )
      sub_1C0011260(a1, (__int64)(v13 + 426));
    KeWaitForSingleObject(v13 + 324, Executive, 0, 0, 0LL);
    if ( *((_QWORD *)v13 + 301) )
      sub_1C0053D28(a2);
    v18 = (void *)*((_QWORD *)v13 + 142);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *((_QWORD *)v13 + 142) = 0LL;
    }
    v19 = (void *)*((_QWORD *)v13 + 143);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *((_QWORD *)v13 + 143) = 0LL;
    }
    v20 = (void *)*((_QWORD *)v13 + 280);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)v13 + 280) = 0LL;
    }
    v21 = (void *)*((_QWORD *)v13 + 355);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)v13 + 355) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v13 + 299);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)v13 + 299) = 0LL;
    }
    v23 = (void *)*((_QWORD *)v13 + 300);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v13 + 300) = 0LL;
    }
    v24 = (void *)*((_QWORD *)v13 + 316);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *((_QWORD *)v13 + 316) = 0LL;
    }
    v25 = (void *)*((_QWORD *)v13 + 106);
    if ( v25 )
    {
      ExFreePoolWithTag(v25, 0);
      *((_QWORD *)v13 + 106) = 0LL;
    }
    sub_1C0018990(a1, (__int64)a2, 2017740855, 1);
    sub_1C000FD80(a1, 256, 1682457649, (__int64)a2, 0LL);
    if ( (v13[356] & 1) != 0 )
    {
      sub_1C0014E84((ULONG_PTR)a2, (ULONG_PTR)a2);
      KeWaitForSingleObject(v13 + 310, Executive, 0, 0, 0LL);
    }
    v27 = (_QWORD *)*((_QWORD *)v13 + 107);
    if ( v27 )
    {
      sub_1C0003610(a1, v26, v27);
      *((_QWORD *)v13 + 107) = 0LL;
    }
    if ( (v13[356] & 2) != 0 )
      sub_1C0029E1C((__int64)a2);
    v13[356] = 16;
    sub_1C0058108(a2);
  }
}
