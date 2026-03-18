/*
 * XREFs of sub_1C0036FAC @ 0x1C0036FAC
 * Callers:
 *     sub_1C003AA2C @ 0x1C003AA2C (sub_1C003AA2C.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0036194 @ 0x1C0036194 (sub_1C0036194.c)
 *     sub_1C0036380 @ 0x1C0036380 (sub_1C0036380.c)
 *     sub_1C0039140 @ 0x1C0039140 (sub_1C0039140.c)
 *     sub_1C0058268 @ 0x1C0058268 (sub_1C0058268.c)
 */

void __fastcall sub_1C0036FAC(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _DWORD *v7; // r13
  _DWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // r10d
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  KIRQL v17; // dl
  __int64 v18; // [rsp+20h] [rbp-38h]

  v7 = sub_1C000F050(a1);
  v8 = sub_1C0011220(a2);
  v9 = (__int64)v8;
  if ( *((_BYTE *)v8 + 2740) || (v10 = sub_1C0016CA0(a1, *((_WORD *)v8 + 714)), (v11 = v10) == 0) )
  {
    *(_DWORD *)(a5 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a5 + 132));
  }
  else
  {
    sub_1C000FD80(a1, 4, 1685219152, v10, a2);
    v13 = (_QWORD *)(v9 + 1320);
    v14 = *(_QWORD *)(v9 + 1320);
    if ( *(_QWORD *)(v14 + 8) != v9 + 1320 )
      goto LABEL_11;
    v15 = *(_QWORD **)(v9 + 1328);
    if ( (_QWORD *)*v15 != v13 )
      goto LABEL_11;
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v18 = *(unsigned int *)(v9 + 1420);
    *v13 = 0LL;
    *(_QWORD *)(v9 + 1328) = 0LL;
    sub_1C000FD80(a1, v12, 1685219122, v9, v18);
    sub_1C0058268(a1, a2, a5 + 132);
    v16 = (_QWORD *)*((_QWORD *)v7 + 604);
    if ( (_DWORD *)*v16 != v7 + 1206 )
LABEL_11:
      __fastfail(3u);
    *(_QWORD *)(v9 + 1328) = v16;
    *v13 = v7 + 1206;
    *v16 = v13;
    *((_QWORD *)v7 + 604) = v13;
    sub_1C0036194(a2, 4, a4);
    sub_1C0039140(a2);
    v7[226] = 1;
    *(_DWORD *)(a5 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v17 = *(_BYTE *)(a5 + 132);
    *(_DWORD *)(a5 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v17);
    sub_1C001518C(a1, a2, -1073741810);
    sub_1C0017FEC(a1, v11);
    sub_1C000FE00(a1, *(_WORD *)(v9 + 1428), 1, 0);
    sub_1C0018990(a1, a2, 2017740851, 1);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x46u, (__int64)"FKh&");
    }
    sub_1C0036380(a1, a5);
  }
}
