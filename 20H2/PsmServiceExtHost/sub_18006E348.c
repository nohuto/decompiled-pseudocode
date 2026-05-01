/*
 * XREFs of sub_18006E348 @ 0x18006E348
 * Callers:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 *     sub_180032644 @ 0x180032644 (sub_180032644.c)
 *     sub_18006E004 @ 0x18006E004 (sub_18006E004.c)
 *     sub_18006E160 @ 0x18006E160 (sub_18006E160.c)
 *     sub_18006E3C8 @ 0x18006E3C8 (sub_18006E3C8.c)
 *     sub_18006E42C @ 0x18006E42C (sub_18006E42C.c)
 *     sub_18006E504 @ 0x18006E504 (sub_18006E504.c)
 *     sub_18006ECD0 @ 0x18006ECD0 (sub_18006ECD0.c)
 *     sub_18006EEBC @ 0x18006EEBC (sub_18006EEBC.c)
 *     sub_18006EF94 @ 0x18006EF94 (sub_18006EF94.c)
 *     sub_18006F1FC @ 0x18006F1FC (sub_18006F1FC.c)
 *     sub_18006F39C @ 0x18006F39C (sub_18006F39C.c)
 *     sub_18006F550 @ 0x18006F550 (sub_18006F550.c)
 *     sub_1800701C0 @ 0x1800701C0 (sub_1800701C0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18006E348(volatile signed __int64 *P)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  void *v5; // rcx

  v2 = _InterlockedExchangeAdd64(P, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    if ( *((_QWORD *)P + 6) )
      TpReleaseWait();
    v5 = (void *)*((_QWORD *)P + 5);
    if ( v5 )
      NtClose(v5);
    LOBYTE(v4) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)P);
  }
  return v4;
}
