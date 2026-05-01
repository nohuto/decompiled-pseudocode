/*
 * XREFs of sub_180063764 @ 0x180063764
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800679F4 @ 0x1800679F4 (sub_1800679F4.c)
 *     sub_18006A214 @ 0x18006A214 (sub_18006A214.c)
 *     sub_18006F434 @ 0x18006F434 (sub_18006F434.c)
 *     sub_180070360 @ 0x180070360 (sub_180070360.c)
 *     sub_180070928 @ 0x180070928 (sub_180070928.c)
 *     sub_180071050 @ 0x180071050 (sub_180071050.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 */

__int64 __fastcall sub_180063764(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  __int64 result; // rax

  v1 = a1 + 1688;
  RtlAcquireSRWLockExclusive(a1 + 1688);
  *(_DWORD *)(a1 + 1696) = GetCurrentThreadId();
  sub_18001E380();
  *(_DWORD *)(a1 + 2712) |= 1u;
  sub_18000F390();
  *(_DWORD *)(a1 + 1696) = 0;
  RtlReleaseSRWLockExclusive(v1);
  sub_18007BF28(a1 + 1768);
  if ( *(_QWORD *)(a1 + 2720) )
    sub_1800679F4();
  sub_18001E380();
  v3 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 != a1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_18006A214(v3 - 1);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3 - 1);
      v3 = v4;
    }
    while ( v4 != (_QWORD *)a1 );
  }
  sub_18000F390();
  if ( *(_QWORD *)(a1 + 1584) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *(_QWORD *)(a1 + 1584) = 0LL;
  }
  sub_180071050(a1);
  sub_18006F434(a1 + 1616);
  sub_180070928(a1 + 312);
  result = sub_180070360(a1);
  if ( *(_QWORD *)(a1 + 560) )
  {
    sub_18001E380();
    TpSetTimer(*(_QWORD *)(a1 + 560), 0LL, 0LL, 0LL);
    sub_18000F390();
    return TpWaitForTimer(*(_QWORD *)(a1 + 560), 1LL);
  }
  return result;
}
