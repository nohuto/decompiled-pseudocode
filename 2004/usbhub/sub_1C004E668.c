/*
 * XREFs of sub_1C004E668 @ 0x1C004E668
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C0018F50 @ 0x1C0018F50 (sub_1C0018F50.c)
 *     sub_1C004DDA0 @ 0x1C004DDA0 (sub_1C004DDA0.c)
 *     sub_1C004E390 @ 0x1C004E390 (sub_1C004E390.c)
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C0017E8C @ 0x1C0017E8C (sub_1C0017E8C.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C004C6A0 @ 0x1C004C6A0 (sub_1C004C6A0.c)
 *     sub_1C0050A44 @ 0x1C0050A44 (sub_1C0050A44.c)
 *     sub_1C0050D40 @ 0x1C0050D40 (sub_1C0050D40.c)
 */

__int64 __fastcall sub_1C004E668(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int32 a4,
        char *a5,
        __int32 a6,
        __int64 a7,
        __int64 a8,
        __int32 a9)
{
  _DWORD *v13; // rax
  __int64 v14; // rbp
  unsigned __int32 v15; // r14d
  _DWORD *v16; // r13
  __int64 v17; // rcx
  _DWORD *v18; // rax
  KIRQL v19; // dl
  int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // r9

  sub_1C000F050(a1);
  v13 = sub_1C0011220(a3);
  v14 = *(_QWORD *)(a2 + 376);
  v15 = *(_DWORD *)(a2 + 428);
  v16 = v13;
  sub_1C0037200(a1, a2);
  sub_1C00029EC(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  sub_1C001CDA8(v17, v14, 2);
  v18 = sub_1C0011220(a3);
  sub_1C000FD80(a1, 1024, 1701737761, a3, (int)v18[281]);
  *(_DWORD *)(v14 + 136) = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v14 + 88) = 1734964085;
  v19 = *(_BYTE *)(v14 + 132);
  if ( v20 == 3 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v19);
    sub_1C004C6A0(a1, a3, a2, v21, 0LL);
    sub_1C001518C(a1, a3, -1073741823);
    sub_1C0017FEC(a1, a2);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v19);
    v16[355] |= 0x1000u;
    sub_1C0050A44(a1, a3);
    *((_QWORD *)v16 + 107) = sub_1C0004060(a1, *(_QWORD *)(a2 + 376), a1, 1430414956, 1);
    sub_1C004A608(a1, *(_WORD *)(a2 + 4), a4, a5, 0xCu, a6, -1, aBusfuncC, a9, 0);
    sub_1C0050D40(v16 + 532);
    v16[355] &= ~0x200u;
    sub_1C004C6A0(a1, a3, a2, v22, 0LL);
    v16[283] |= 4u;
    sub_1C0017E8C(a1, a2);
    v15 = 2;
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), v15);
  return v15;
}
