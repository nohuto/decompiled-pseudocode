/*
 * XREFs of sub_1C003AEF8 @ 0x1C003AEF8
 * Callers:
 *     sub_1C00575A0 @ 0x1C00575A0 (sub_1C00575A0.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C0016EC0 @ 0x1C0016EC0 (sub_1C0016EC0.c)
 *     sub_1C0017660 @ 0x1C0017660 (sub_1C0017660.c)
 *     sub_1C00176F8 @ 0x1C00176F8 (sub_1C00176F8.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C00347F4 @ 0x1C00347F4 (sub_1C00347F4.c)
 *     sub_1C0036194 @ 0x1C0036194 (sub_1C0036194.c)
 *     sub_1C00372B4 @ 0x1C00372B4 (sub_1C00372B4.c)
 *     sub_1C0039D88 @ 0x1C0039D88 (sub_1C0039D88.c)
 */

void __fastcall sub_1C003AEF8(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3)
{
  _DWORD *v6; // rbp
  _DWORD *v7; // r13
  int v8; // r9d
  int v9; // r12d
  __int64 v10; // rcx
  _DWORD *v11; // rax
  int v12; // ecx
  __int64 v13; // rbx
  _DWORD *v14; // rax
  _QWORD *v15; // rbp
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  _DWORD *v18; // rax
  __int64 v19; // rbx
  _DWORD *v20; // rax
  __int64 v21; // rbx
  _DWORD *v22; // rax
  int v23; // edx
  int v24; // r8d
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  struct _KEVENT *v32; // rbx

  v6 = sub_1C0011220((__int64)a2);
  v7 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 2, 1884509473, 0LL, a3);
  v9 = v8 + 1;
  sub_1C001CDA8(v10, a3, v8 + 1);
  v11 = sub_1C0011220((__int64)a2);
  if ( v11[281] != 3 )
  {
    v12 = v11[281] - 3 - v9;
    if ( v12 )
    {
      if ( v12 != v9 )
        goto LABEL_4;
      sub_1C0036194((__int64)a2, 5, v9);
      v13 = *((_QWORD *)v6 + 148);
      v14 = sub_1C000F050(v13);
      if ( sub_1C00372B4(v13, (__int64)a2, (_QWORD *)v14 + 605) )
        goto LABEL_4;
      v15 = v6 + 330;
      v16 = (_QWORD *)*((_QWORD *)v7 + 606);
      if ( (_DWORD *)*v16 == v7 + 1210 )
      {
        *v15 = v7 + 1210;
        v15[1] = v16;
        *v16 = v15;
        *((_QWORD *)v7 + 606) = v15;
LABEL_4:
        *(_DWORD *)(a3 + 136) = 0;
        stru_1C006B480.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
        return;
      }
LABEL_17:
      __fastfail(3u);
    }
    sub_1C000FD80(a1, 4, 1936879666, (__int64)a2, 4LL);
    v17 = *((_QWORD *)v6 + 148);
    v18 = sub_1C000F050(v17);
    if ( sub_1C00372B4(v17, (__int64)a2, (_QWORD *)v18 + 601)
      || (v19 = *((_QWORD *)v6 + 148), v20 = sub_1C000F050(v19), sub_1C00372B4(v19, (__int64)a2, (_QWORD *)v20 + 603)) )
    {
      v21 = *((_QWORD *)v6 + 148);
      v22 = sub_1C000F050(v21);
      if ( sub_1C00372B4(v21, (__int64)a2, (_QWORD *)v22 + 603) )
      {
        v23 = 4;
        v24 = 18;
LABEL_16:
        sub_1C0036194((__int64)a2, v23, v24);
        *(_DWORD *)(a3 + 136) = 0;
        stru_1C006B480.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
        sub_1C0018990(a1, (__int64)a2, 2017740850, v9);
        sub_1C000FD80(a1, 4, 1682457650, (__int64)a2, 0LL);
        return;
      }
      v25 = v6 + 330;
      v26 = *((_QWORD *)v6 + 165);
      if ( *(_DWORD **)(v26 + 8) != v6 + 330 )
        goto LABEL_17;
      v27 = (_QWORD *)*((_QWORD *)v6 + 166);
      if ( (_QWORD *)*v27 != v25 )
        goto LABEL_17;
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      *v25 = 0LL;
      *((_QWORD *)v6 + 166) = 0LL;
    }
    v24 = v9;
    v23 = 5;
    goto LABEL_16;
  }
  *(_DWORD *)(a3 + 136) = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(a3 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
  if ( sub_1C0011220((__int64)a2)[197] != v9 )
  {
    v28 = (_QWORD *)sub_1C0004060(a1, a3, (__int64)a2, 1381200755, v9);
    sub_1C0039D88(*((struct _DEVICE_OBJECT **)v6 + 148), a3, a2);
    sub_1C0003610(a1, v29, v28);
    sub_1C00176F8(a1, a3, 136, 1835356755);
    sub_1C0017660(a3, (__int64)a2, v30, v9, 14);
    sub_1C0018364(a1, a3);
  }
  sub_1C0016EC0(a1, (__int64)a2);
  v31 = sub_1C0016CA0(a1, *((_WORD *)v6 + 714));
  if ( v31 )
  {
    v32 = (struct _KEVENT *)(v31 + 520);
    KeWaitForSingleObject((PVOID)(v31 + 520), Executive, 0, 0, 0LL);
    sub_1C00347F4(a1, *((_WORD *)v6 + 714), a3);
    KeSetEvent(v32, 0, 0);
  }
}
