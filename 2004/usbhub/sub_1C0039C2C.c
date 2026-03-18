/*
 * XREFs of sub_1C0039C2C @ 0x1C0039C2C
 * Callers:
 *     sub_1C0035BB0 @ 0x1C0035BB0 (sub_1C0035BB0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0036194 @ 0x1C0036194 (sub_1C0036194.c)
 */

void __fastcall sub_1C0039C2C(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  _DWORD *v11; // rax
  int v12; // edx

  v3 = *(_QWORD *)(a3 + 16);
  sub_1C000F050(a1);
  v7 = sub_1C0011220(v3);
  sub_1C000FD80(a1, 2, 1347638561, 0LL, a3);
  v8 = sub_1C0016CA0(a1, *((_WORD *)v7 + 714));
  v9 = v8;
  if ( v8 )
  {
    sub_1C0013AE0(a1, v8, 1);
    sub_1C001518C(a1, v3, -1073741823);
    sub_1C0017FEC(a1, v9);
    sub_1C001CDA8(v10, a3, a2);
    sub_1C000FD80(a1, 4, 1685219152, v9, v3);
    v11 = sub_1C0011220(v3);
    v12 = 3;
    if ( v11[281] != 3 )
    {
      if ( v11[281] != 4 )
      {
LABEL_6:
        *(_DWORD *)(a3 + 136) = 0;
        stru_1C006B480.Dpc.DeferredRoutine = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a3 + 132));
        return;
      }
      sub_1C000FD80(a1, 4, 1685219123, (__int64)v7, (unsigned int)v7[355]);
      v12 = 4;
    }
    sub_1C0036194(v3, v12, a2);
    goto LABEL_6;
  }
}
