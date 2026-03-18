/*
 * XREFs of sub_1C003A450 @ 0x1C003A450
 * Callers:
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C0044420 @ 0x1C0044420 (sub_1C0044420.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C001CDA8 @ 0x1C001CDA8 (sub_1C001CDA8.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 */

void __fastcall sub_1C003A450(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 i; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // esi
  __int64 v10; // rcx
  KIRQL v11; // dl

  sub_1C000FD80(a1, 2, 1716671314, 0LL, a2);
  sub_1C001CDA8(v5, a2, v4 + 17);
  for ( i = 1; i <= *((unsigned __int8 *)sub_1C000F050(a1) + 2938); ++i )
  {
    v7 = sub_1C0016CA0(a1, i);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 392);
      sub_1C000FD80(a1, 4, 2018526258, v8, 0LL);
      if ( v8 )
      {
        v9 = sub_1C0011220(v8)[281];
        sub_1C0011220(v8);
        if ( v9 > 0 )
        {
          if ( v9 <= 2 )
          {
            sub_1C0054AFC(a1, v8, (unsigned int)v9);
          }
          else
          {
            if ( v9 != 3 )
              continue;
            *(_DWORD *)(a2 + 136) = 0;
            stru_1C006B480.Dpc.DeferredRoutine = 0LL;
            *(_DWORD *)(a2 + 88) = 1734964085;
            KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
            sub_1C0018990(a1, v8, 2017740849, 1);
          }
          sub_1C001CDA8(v10, a2, 17);
        }
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  stru_1C006B480.Dpc.DeferredRoutine = 0LL;
  v11 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v11);
}
