/*
 * XREFs of sub_18001FDD8 @ 0x18001FDD8
 * Callers:
 *     sub_180020210 @ 0x180020210 (sub_180020210.c)
 * Callees:
 *     sub_18001B108 @ 0x18001B108 (sub_18001B108.c)
 *     sub_18001B288 @ 0x18001B288 (sub_18001B288.c)
 *     sub_18001FE84 @ 0x18001FE84 (sub_18001FE84.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18001FDD8(RTL_SRWLOCK *a1, _QWORD *a2, __int64 a3)
{
  int v6; // eax

  *a2 = 0LL;
  if ( LOBYTE(a1->Ptr) && !byte_18021F508 )
  {
    v6 = (int)qword_18021F500;
    if ( qword_18021F500 )
      v6 = (unsigned __int8)qword_18021F500();
    if ( !v6 && sub_18001B108(a1) )
    {
      AcquireSRWLockExclusive(a1 + 4);
      sub_18001B288((__int64)a1);
      sub_18001FE84(&a1[21], a2, a3, 0LL);
      if ( *a2 )
        *a2 |= 0x80000000uLL;
      if ( a1 != (RTL_SRWLOCK *)-32LL )
        ReleaseSRWLockExclusive(a1 + 4);
    }
  }
}
