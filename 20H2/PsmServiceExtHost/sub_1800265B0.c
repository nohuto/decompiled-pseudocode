/*
 * XREFs of sub_1800265B0 @ 0x1800265B0
 * Callers:
 *     sub_180001164 @ 0x180001164 (sub_180001164.c)
 *     sub_1800018B0 @ 0x1800018B0 (sub_1800018B0.c)
 *     sub_180002110 @ 0x180002110 (sub_180002110.c)
 *     sub_180004474 @ 0x180004474 (sub_180004474.c)
 *     sub_180004E94 @ 0x180004E94 (sub_180004E94.c)
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180005AF0 @ 0x180005AF0 (sub_180005AF0.c)
 *     sub_1800072AC @ 0x1800072AC (sub_1800072AC.c)
 *     sub_180007634 @ 0x180007634 (sub_180007634.c)
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     sub_18000A230 @ 0x18000A230 (sub_18000A230.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F200 @ 0x18000F200 (sub_18000F200.c)
 *     sub_180010560 @ 0x180010560 (sub_180010560.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_180011430 @ 0x180011430 (sub_180011430.c)
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 *     sub_180013860 @ 0x180013860 (sub_180013860.c)
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 *     sub_180014E9C @ 0x180014E9C (sub_180014E9C.c)
 *     sub_18001F8F0 @ 0x18001F8F0 (sub_18001F8F0.c)
 *     sub_180021550 @ 0x180021550 (sub_180021550.c)
 *     sub_180022B60 @ 0x180022B60 (sub_180022B60.c)
 *     sub_180022DB0 @ 0x180022DB0 (sub_180022DB0.c)
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 *     sub_18002CAD4 @ 0x18002CAD4 (sub_18002CAD4.c)
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_180040EF0 @ 0x180040EF0 (sub_180040EF0.c)
 *     sub_180044710 @ 0x180044710 (sub_180044710.c)
 *     sub_1800632E8 @ 0x1800632E8 (sub_1800632E8.c)
 *     sub_1800688D8 @ 0x1800688D8 (sub_1800688D8.c)
 *     sub_180068B10 @ 0x180068B10 (sub_180068B10.c)
 *     sub_180068C98 @ 0x180068C98 (sub_180068C98.c)
 *     sub_18006B648 @ 0x18006B648 (sub_18006B648.c)
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 *     sub_18006D504 @ 0x18006D504 (sub_18006D504.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 *     sub_18006D6E8 @ 0x18006D6E8 (sub_18006D6E8.c)
 *     sub_18006D850 @ 0x18006D850 (sub_18006D850.c)
 *     sub_1800706FC @ 0x1800706FC (sub_1800706FC.c)
 *     sub_180070AA0 @ 0x180070AA0 (sub_180070AA0.c)
 *     sub_18007156C @ 0x18007156C (sub_18007156C.c)
 *     sub_1800730C0 @ 0x1800730C0 (sub_1800730C0.c)
 *     sub_180073544 @ 0x180073544 (sub_180073544.c)
 *     sub_180073D58 @ 0x180073D58 (sub_180073D58.c)
 *     sub_1800746B0 @ 0x1800746B0 (sub_1800746B0.c)
 *     sub_1800765F8 @ 0x1800765F8 (sub_1800765F8.c)
 * Callees:
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180027CD0 @ 0x180027CD0 (sub_180027CD0.c)
 *     sub_180027D94 @ 0x180027D94 (sub_180027D94.c)
 */

char __fastcall sub_1800265B0(char *P)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 v4; // rax
  int v5; // ecx
  void *v6; // rcx
  void *v7; // rcx

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  v4 = v2 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v5 = *((_DWORD *)P + 10);
    if ( v5 == 1 )
    {
      sub_180026650(*((PVOID *)P + 8));
      v6 = (void *)*((_QWORD *)P + 9);
      if ( v6 )
        NtClose(v6);
    }
    else if ( v5 )
    {
      if ( v5 == 2 && !*((_DWORD *)P + 24) && !*((_DWORD *)P + 25) )
        NtDeleteWnfStateName(P + 96);
    }
    else
    {
      sub_180027D94(P + 1296);
      v7 = (void *)*((_QWORD *)P + 7);
      if ( v7 )
        sub_180026650(v7);
      sub_180027CD0(P + 64);
    }
    LOBYTE(v4) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return v4;
}
