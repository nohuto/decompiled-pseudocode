/*
 * XREFs of sub_1C003A78C @ 0x1C003A78C
 * Callers:
 *     sub_1C0003070 @ 0x1C0003070 (sub_1C0003070.c)
 *     sub_1C0031600 @ 0x1C0031600 (sub_1C0031600.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001B724 @ 0x1C001B724 (sub_1C001B724.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0039140 @ 0x1C0039140 (sub_1C0039140.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 */

void __fastcall sub_1C003A78C(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r15
  __int64 v5; // rcx
  _QWORD **v6; // r14
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  _DWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD **v14; // r14
  _QWORD *v15; // r10
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // r10
  __int16 v20; // r9
  __int16 v21; // r14
  unsigned __int16 i; // bx
  __int64 v23; // rax
  __int64 v24; // rbp
  _DWORD *v25; // rax
  __int64 v26; // rcx
  KIRQL v27; // dl

  sub_1C000FD80(a1, 2, 1716736630, 0LL, a2);
  v4 = sub_1C000F050(a1);
  sub_1C001CDA8(v5, a2, 11);
  if ( (v4[640] & 0x40000000) != 0 )
    sub_1C001B724(a1);
  sub_1C000FD80(a1, 2, 1718374961, 0LL, a2);
  v6 = (_QWORD **)(v4 + 1206);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
LABEL_13:
      __fastfail(3u);
    v9 = v7 - 165;
    *v6 = v8;
    v8[1] = v6;
    sub_1C000FD80(a1, 4, 1718374962, (__int64)(v7 - 165), 0LL);
    v10 = v9[105];
    *v11 = 0LL;
    v9[166] = 0LL;
    v12 = sub_1C0011220(v10);
    sub_1C0054AFC(a1, v9[105], (unsigned int)v12[281]);
    sub_1C001CDA8(v13, a2, 11);
  }
  v14 = (_QWORD **)(v4 + 1210);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == v14 )
      break;
    if ( (_QWORD **)v15[1] != v14 )
      goto LABEL_13;
    v16 = (_QWORD *)*v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 )
      goto LABEL_13;
    v17 = v15 - 165;
    *v14 = v16;
    v16[1] = v14;
    sub_1C000FD80(a1, 4, 1346650466, (__int64)(v15 - 165), 0LL);
    v18 = v17[105];
    *v19 = 0LL;
    v17[166] = 0LL;
    sub_1C0011220(v18);
    *((_DWORD *)v17 + 355) |= 0x40000u;
  }
  sub_1C000FD80(a1, 2, 1718374963, 0LL, a2);
  v21 = v20 + 1;
  for ( i = v20 + 1; (v4[640] & 0x400000) != 0 && i <= *((unsigned __int8 *)sub_1C000F050(a1) + 2938); i += v21 )
  {
    v23 = sub_1C0016CA0(a1, i);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 392);
      sub_1C000FD80(a1, 4, 2018526259, v24, 0LL);
      if ( v24 )
      {
        sub_1C0039140(v24);
        v25 = sub_1C0011220(v24);
        sub_1C0054AFC(a1, v24, (unsigned int)v25[281]);
        sub_1C001CDA8(v26, a2, 11);
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  v27 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v27);
}
