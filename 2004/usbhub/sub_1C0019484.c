/*
 * XREFs of sub_1C0019484 @ 0x1C0019484
 * Callers:
 *     sub_1C0019404 @ 0x1C0019404 (sub_1C0019404.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C005C04C @ 0x1C005C04C (sub_1C005C04C.c)
 */

char *__fastcall sub_1C0019484(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  _DWORD *v11; // r15
  char *result; // rax
  char *v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v11 = sub_1C000F050(a1);
  result = (char *)ExAllocatePoolWithTag(PoolType, 0x90uLL, 0x42554855u);
  v13 = result;
  if ( result )
  {
    sub_1C001D340(result, 0LL, 144LL);
    *((_DWORD *)v13 + 8) = a6;
    *(_DWORD *)v13 = 2018662224;
    *((_QWORD *)v13 + 6) = a3;
    *((_QWORD *)v13 + 5) = a1;
    if ( a4 )
    {
      *((_DWORD *)v13 + 6) = *(_DWORD *)(*(_QWORD *)(a4 + 184) + 24LL);
      *((_QWORD *)v13 + 7) = a4;
      sub_1C005C04C(a4, v13 + 120);
    }
    if ( a5 )
    {
      *((_DWORD *)v13 + 7) = *(_DWORD *)(*(_QWORD *)(a5 + 184) + 24LL);
      *((_QWORD *)v13 + 8) = a5;
    }
    *((_QWORD *)v13 + 9) = a2;
    *((_QWORD *)v13 + 10) = KeGetCurrentThread();
    *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(a2 + 136) = 1;
    stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
    if ( a7 )
    {
      *((_QWORD *)v11 + 114) = v13;
      v13[136] = 1;
    }
    v14 = (_QWORD *)qword_1C006B620;
    v15 = v13 + 8;
    if ( *(__int64 **)qword_1C006B620 != &qword_1C006B618 )
      __fastfail(3u);
    *((_QWORD *)v13 + 2) = qword_1C006B620;
    *v15 = &qword_1C006B618;
    *v14 = v15;
    qword_1C006B620 = (__int64)(v13 + 8);
    *(_DWORD *)(a2 + 136) = 0;
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, *(_BYTE *)(a2 + 132));
    return v13;
  }
  return result;
}
