/*
 * XREFs of sub_18001B77C @ 0x18001B77C
 * Callers:
 *     sub_1800163A0 @ 0x1800163A0 (sub_1800163A0.c)
 *     sub_180020140 @ 0x180020140 (sub_180020140.c)
 * Callees:
 *     sub_1800191A0 @ 0x1800191A0 (sub_1800191A0.c)
 *     sub_180019C4C @ 0x180019C4C (sub_180019C4C.c)
 *     sub_18001B108 @ 0x18001B108 (sub_18001B108.c)
 *     sub_18001BFF4 @ 0x18001BFF4 (sub_18001BFF4.c)
 *     sub_18001C464 @ 0x18001C464 (sub_18001C464.c)
 *     sub_18001DFF4 @ 0x18001DFF4 (sub_18001DFF4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18001B77C(__int64 a1)
{
  int v2; // eax
  RTL_SRWLOCK *v3; // rbx
  _QWORD v4[25]; // [rsp+20h] [rbp-C8h] BYREF

  if ( !byte_18021F508 )
  {
    v2 = (int)qword_18021F500;
    if ( qword_18021F500 )
      v2 = (unsigned __int8)qword_18021F500();
    if ( !v2 && sub_18001B108((RTL_SRWLOCK *)a1) )
    {
      sub_18001BFF4((LPCRITICAL_SECTION)(*(_QWORD *)(a1 + 24) + 200LL), *(PSRWLOCK *)(a1 + 24));
      v3 = *(RTL_SRWLOCK **)(a1 + 24);
      sub_1800191A0((__int64)v4);
      AcquireSRWLockExclusive(v3);
      sub_18001DFF4(v3, v4);
      if ( v3 )
        ReleaseSRWLockExclusive(v3);
      sub_18001C464(v4);
      sub_180019C4C(v4);
    }
  }
}
