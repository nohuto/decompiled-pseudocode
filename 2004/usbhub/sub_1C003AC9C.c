/*
 * XREFs of sub_1C003AC9C @ 0x1C003AC9C
 * Callers:
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0036194 @ 0x1C0036194 (sub_1C0036194.c)
 *     sub_1C0037200 @ 0x1C0037200 (sub_1C0037200.c)
 *     sub_1C00372B4 @ 0x1C00372B4 (sub_1C00372B4.c)
 *     sub_1C0039140 @ 0x1C0039140 (sub_1C0039140.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 *     sub_1C005A710 @ 0x1C005A710 (sub_1C005A710.c)
 */

void __fastcall sub_1C003AC9C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rcx
  _DWORD *v11; // rax
  _DWORD *v12; // rsi
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rbx
  _DWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  int v20; // eax

  v4 = 0LL;
  sub_1C000FD80(a1, 2, 1884441942, 0LL, a3);
  sub_1C001CDA8(v7, a3, 6);
  v8 = sub_1C0011220(a2)[281];
  if ( !a1 )
  {
    v9 = v8;
    v10 = 0LL;
LABEL_12:
    sub_1C0054AFC(v10, a2, v9);
    return;
  }
  v11 = sub_1C0011220(a2);
  v12 = v11;
  v13 = v8 - 3;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        v15 = *((_QWORD *)v11 + 148);
        v16 = sub_1C000F050(v15);
        if ( sub_1C00372B4(v15, a2, (_QWORD *)v16 + 605) )
        {
          v17 = v12 + 330;
          v18 = *((_QWORD *)v12 + 165);
          if ( *(_DWORD **)(v18 + 8) != v12 + 330 || (v19 = (_QWORD *)*((_QWORD *)v12 + 166), (_QWORD *)*v19 != v17) )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v17 = 0LL;
          *((_QWORD *)v12 + 166) = 0LL;
        }
        v9 = 5LL;
        v10 = a1;
        goto LABEL_12;
      }
    }
    else
    {
      sub_1C0036194(a2, 4, 6);
    }
    *(_DWORD *)(a3 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(a3 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
    return;
  }
  if ( (v11[358] & 0x2000) != 0 )
    v4 = sub_1C0016CA0(a1, *((_WORD *)v11 + 714));
  sub_1C0036194(a2, 3, 6);
  *(_DWORD *)(a3 + 136) = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
  sub_1C005A710(a1, a2, 1LL);
  if ( v4 )
  {
    sub_1C0039140(a2);
    KeWaitForSingleObject(v12 + 724, Executive, 0, 0, 0LL);
    v20 = v12[355];
    if ( (v20 & 0x8000000) == 0 )
    {
      v12[355] = v20 | 0x8000000;
      sub_1C0037200(a1, v4);
      sub_1C000FE00(a1, *((_WORD *)v12 + 714), 1, 0);
    }
    KeSetEvent((PRKEVENT)(v12 + 724), 0, 0);
  }
}
