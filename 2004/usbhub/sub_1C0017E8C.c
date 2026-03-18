/*
 * XREFs of sub_1C0017E8C @ 0x1C0017E8C
 * Callers:
 *     sub_1C0010540 @ 0x1C0010540 (sub_1C0010540.c)
 *     sub_1C004E668 @ 0x1C004E668 (sub_1C004E668.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C0036194 @ 0x1C0036194 (sub_1C0036194.c)
 *     sub_1C0036380 @ 0x1C0036380 (sub_1C0036380.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C003B3C4 @ 0x1C003B3C4 (sub_1C003B3C4.c)
 *     sub_1C005C198 @ 0x1C005C198 (sub_1C005C198.c)
 */

void __fastcall sub_1C0017E8C(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r15
  __int64 v6; // rbx
  _DWORD *v7; // r13
  _DWORD *v8; // rsi
  int v9; // edx
  int v10; // r8d
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  int v13; // edx
  int v14; // r8d
  KIRQL v15; // dl

  v2 = *(_QWORD *)(a2 + 376);
  *(_BYTE *)(v2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v2 + 136) = 1;
  *(_DWORD *)(v2 + 88) = 2018460752;
  *(_DWORD *)(v2 + 92) = 2;
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)v2;
  *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
  v5 = *(_QWORD *)(a2 + 392);
  if ( !v5 )
  {
    *(_DWORD *)(v2 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    v15 = *(_BYTE *)(v2 + 132);
    *(_DWORD *)(v2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v15);
    return;
  }
  v6 = (int)sub_1C0011220(*(_QWORD *)(a2 + 392))[281];
  v7 = sub_1C000F050(a1);
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 1);
  v8 = sub_1C0011220(v5);
  sub_1C000FD80(a1, 4, 1919248208, v5, v6);
  if ( (_DWORD)v6 != 3 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E55C(DeviceObject->DeviceExtension, v9, v10, 42, (__int64)"FKh&", *((_WORD *)v8 + 714), v5);
    v11 = (_QWORD *)*((_QWORD *)v7 + 602);
    v12 = v8 + 330;
    if ( (_DWORD *)*v11 != v7 + 1202 )
      __fastfail(3u);
    *((_QWORD *)v8 + 166) = v11;
    *v12 = v7 + 1202;
    *v11 = v12;
    *((_QWORD *)v7 + 602) = v12;
    LOBYTE(v12) = 1;
    sub_1C005C198(v8, &unk_1C00626C0, v12);
    sub_1C0036194(v5, 2LL, 2LL);
    v7[226] = 1;
    *(_DWORD *)(v2 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v2 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 43, (__int64)"FKh&");
    if ( (v8[355] & 0x100) != 0 )
    {
      if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
        goto LABEL_67;
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 44, (__int64)"FKh&");
    }
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 45, (__int64)"FKh&");
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      {
        if ( LOWORD(DeviceObject->DeviceType) )
          sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 46, (__int64)"FKh&", *((_BYTE *)v8 + 1400));
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C003B3C4(DeviceObject->DeviceExtension, v13, v14, 47, (__int64)"FKh&", *((_BYTE *)v8 + 1401));
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            if ( LOWORD(DeviceObject->DeviceType) )
              sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 48, (__int64)"FKh&", *((_WORD *)v8 + 701));
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
            {
              if ( LOWORD(DeviceObject->DeviceType) )
                sub_1C003B3C4(DeviceObject->DeviceExtension, v13, v14, 49, (__int64)"FKh&", *((_BYTE *)v8 + 1168));
              if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
              {
                if ( LOWORD(DeviceObject->DeviceType) )
                  sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 50, (__int64)"FKh&", *((_BYTE *)v8 + 1404));
                if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                {
                  if ( LOWORD(DeviceObject->DeviceType) )
                    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 51, (__int64)"FKh&", *((_BYTE *)v8 + 1405));
                  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                  {
                    if ( LOWORD(DeviceObject->DeviceType) )
                      sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 52, (__int64)"FKh&", *((_BYTE *)v8 + 1406));
                    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                    {
                      if ( LOWORD(DeviceObject->DeviceType) )
                        sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 53, (__int64)"FKh&", *((_BYTE *)v8 + 1407));
                      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                      {
                        if ( LOWORD(DeviceObject->DeviceType) )
                          sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 54, (__int64)"FKh&", *((_WORD *)v8 + 704));
                        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                        {
                          if ( LOWORD(DeviceObject->DeviceType) )
                            sub_1C002E188(
                              DeviceObject->DeviceExtension,
                              0,
                              1,
                              55,
                              (__int64)"FKh&",
                              *((_WORD *)v8 + 705));
                          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                          {
                            if ( LOWORD(DeviceObject->DeviceType) )
                              sub_1C002E188(
                                DeviceObject->DeviceExtension,
                                0,
                                1,
                                56,
                                (__int64)"FKh&",
                                *((_WORD *)v8 + 706));
                            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                            {
                              if ( LOWORD(DeviceObject->DeviceType) )
                                sub_1C002E188(
                                  DeviceObject->DeviceExtension,
                                  0,
                                  1,
                                  57,
                                  (__int64)"FKh&",
                                  *((_BYTE *)v8 + 1414));
                              if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                              {
                                if ( LOWORD(DeviceObject->DeviceType) )
                                  sub_1C002E188(
                                    DeviceObject->DeviceExtension,
                                    0,
                                    1,
                                    58,
                                    (__int64)"FKh&",
                                    *((_BYTE *)v8 + 1415));
                                if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
                                {
                                  if ( LOWORD(DeviceObject->DeviceType) )
                                    sub_1C002E188(
                                      DeviceObject->DeviceExtension,
                                      0,
                                      1,
                                      59,
                                      (__int64)"FKh&",
                                      *((_BYTE *)v8 + 1416));
                                  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
                                    sub_1C002E188(
                                      DeviceObject->DeviceExtension,
                                      0,
                                      1,
                                      60,
                                      (__int64)"FKh&",
                                      *((_BYTE *)v8 + 1417));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    if ( *((_QWORD *)v8 + 261) && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, v13, v14, 61, (__int64)"FKh&", *((_QWORD *)v8 + 261));
    if ( *((_QWORD *)v8 + 263) && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, v13, v14, 62, (__int64)"FKh&", *((_QWORD *)v8 + 263));
    if ( *((_QWORD *)v8 + 265) && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, v13, v14, 63, (__int64)"FKh&", *((_QWORD *)v8 + 265));
    if ( *((_QWORD *)v8 + 269) && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, v13, v14, 64, (__int64)"FKh&", *((_QWORD *)v8 + 269));
    if ( *((_QWORD *)v8 + 267) && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, v13, v14, 65, (__int64)"FKh&", *((_QWORD *)v8 + 267));
    if ( *((_QWORD *)v8 + 271) )
    {
      if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      {
LABEL_97:
        sub_1C0036380(a1, v2);
        return;
      }
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C003B2A0(DeviceObject->DeviceExtension, v13, v14, 66, (__int64)"FKh&", *((_QWORD *)v8 + 271));
    }
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 67, (__int64)"FKh&");
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4(DeviceObject->DeviceExtension, 0, 1, 68, (__int64)"FKh&");
    }
    goto LABEL_97;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E55C(
        DeviceObject->DeviceExtension,
        *(unsigned __int16 *)(a2 + 4),
        v10,
        41,
        (__int64)"FKh&",
        *(_WORD *)(a2 + 4),
        *(_QWORD *)(a2 + 392));
  }
  *(_DWORD *)(v2 + 136) = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(v2 + 132));
  sub_1C001518C(a1, v5, 0);
  sub_1C0017FEC(a1, a2);
}
