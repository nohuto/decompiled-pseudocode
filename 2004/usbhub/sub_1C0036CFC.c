/*
 * XREFs of sub_1C0036CFC @ 0x1C0036CFC
 * Callers:
 *     sub_1C002FF30 @ 0x1C002FF30 (sub_1C002FF30.c)
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C0039F00 @ 0x1C0039F00 (sub_1C0039F00.c)
 */

__int64 __fastcall sub_1C0036CFC(struct _DEVICE_OBJECT *a1, __int64 a2, _DWORD *a3)
{
  int v6; // ebx
  _DWORD *v7; // r15
  _DWORD *v8; // r13
  _DWORD *v9; // rsi
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  bool v14; // zf
  KIRQL v15; // dl
  int v16; // eax

  v6 = -1;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x51u, (__int64)"FKh&");
  v7 = sub_1C0011220(a2);
  v8 = sub_1C000F050((__int64)a1);
  v9 = sub_1C0011220(a2) + 236;
  v10 = sub_1C0016CA0((__int64)a1, *((_WORD *)v7 + 714));
  if ( !v10 )
  {
    sub_1C000FD80((__int64)a1, 4, 1129932081, 0LL, 0LL);
    v6 = -1073741811;
    goto LABEL_17;
  }
  v11 = v8[640];
  if ( (v11 & 0x4000) != 0 )
  {
    sub_1C000FD80((__int64)a1, 4, 1132029234, 0LL, 0LL);
    *a3 = -1073713152;
LABEL_8:
    v6 = -1073741810;
    goto LABEL_17;
  }
  if ( (v11 & 0x10) != 0 )
  {
    sub_1C000FD80((__int64)a1, 4, 1132029235, 0LL, 0LL);
    *a3 = -1073704960;
    v6 = -1073741630;
    goto LABEL_17;
  }
  v12 = sub_1C0016B5C((__int64)a1, *((_WORD *)v7 + 714), 0LL, 0x6C435943u);
  sub_1C000FD80((__int64)a1, 4, 1668899692, *((unsigned __int16 *)v7 + 714), v12);
  if ( !v12 )
    goto LABEL_8;
  if ( a2 == v12 )
  {
    sub_1C001CDA8(v13, (__int64)v9, 14);
    v14 = sub_1C0011220(a2)[281] == 3;
    v9[34] = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v9[22] = 1734964085;
    v15 = *((_BYTE *)v9 + 132);
    if ( v14 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v15);
      sub_1C000FD80((__int64)a1, 8, 1668899655, *((unsigned __int16 *)v7 + 714), *((unsigned __int16 *)v7 + 714));
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 412));
      v16 = sub_1C0039F00(a1);
      sub_1C000FD80((__int64)a1, 8, 1668895315, *((unsigned __int16 *)v7 + 714), v16);
      sub_1C0034AF8((__int64)a1, *((_WORD *)v7 + 714), (__int64)v9, 1);
      v6 = 0;
    }
    else
    {
      v6 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v15);
    }
  }
  sub_1C00171A0((__int64)a1, v12, 0LL, 0x6C435943u);
LABEL_17:
  sub_1C000FD80((__int64)a1, 8, 1668899655, *((unsigned __int16 *)v7 + 714), v6);
  return (unsigned int)v6;
}
