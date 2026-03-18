/*
 * XREFs of sub_1C003A5DC @ 0x1C003A5DC
 * Callers:
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0036194 @ 0x1C0036194 (sub_1C0036194.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 */

void __fastcall sub_1C003A5DC(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 i; // si
  __int64 v7; // rax
  __int64 v8; // rdi
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r12
  __int64 v11; // r8
  __int64 v12; // rcx
  KIRQL v13; // dl

  sub_1C000FD80(a1, 2, 1716736630, 0LL, a2);
  sub_1C001CDA8(v5, a2, v4 + 5);
  for ( i = 1; i <= *((unsigned __int8 *)sub_1C000F050(a1) + 2938); ++i )
  {
    v7 = sub_1C0016CA0(a1, i);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 392);
      sub_1C000FD80(a1, 4, 2018526257, v8, 0LL);
      if ( v8 )
      {
        v9 = (KSPIN_LOCK *)sub_1C0011220(v8);
        v10 = KeAcquireSpinLockRaiseToDpc(v9 + 351);
        if ( *((_DWORD *)v9 + 704) == 1 )
        {
          *((_DWORD *)v9 + 704) = 2;
          USBD_RemoveDeviceFromGlobalList(v8);
        }
        KeReleaseSpinLock(v9 + 351, v10);
        v11 = (unsigned int)sub_1C0011220(v8)[281];
        if ( (int)v11 > 0 )
        {
          if ( (int)v11 <= 2 )
          {
            sub_1C0054AFC(a1, v8, v11);
            sub_1C001CDA8(v12, a2, 5);
          }
          else if ( (_DWORD)v11 == 3 )
          {
            sub_1C0036194(v8, 3, 5);
          }
        }
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  v13 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v13);
}
