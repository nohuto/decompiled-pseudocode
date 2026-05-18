/*
 * XREFs of sub_18001C764 @ 0x18001C764
 * Callers:
 *     sub_180020120 @ 0x180020120 (sub_180020120.c)
 * Callees:
 *     sub_180017B64 @ 0x180017B64 (sub_180017B64.c)
 *     sub_18001B108 @ 0x18001B108 (sub_18001B108.c)
 *     sub_18001C5F4 @ 0x18001C5F4 (sub_18001C5F4.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18001C764(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax

  if ( *(_BYTE *)a1 )
  {
    if ( qword_18021F840 )
      qword_18021F840(a2, 0LL, a3, 1LL, 0LL, 0LL, 0, 1LL);
    if ( sub_18001B108((RTL_SRWLOCK *)a1) && sub_18001C5F4(*(PSRWLOCK *)(a1 + 24), a2, a3) && !byte_18021F508 )
    {
      v6 = (int)qword_18021F500;
      if ( qword_18021F500 )
        v6 = (unsigned __int8)qword_18021F500();
      if ( !v6 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
        sub_180017B64((struct _TP_TIMER **)(a1 + 48), (_BYTE *)(a1 + 65), (void *)a1);
        if ( a1 != -32 )
          ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 32));
      }
    }
  }
}
