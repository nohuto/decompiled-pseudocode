/*
 * XREFs of sub_18001C92C @ 0x18001C92C
 * Callers:
 *     sub_180020140 @ 0x180020140 (sub_180020140.c)
 * Callees:
 *     sub_180017B64 @ 0x180017B64 (sub_180017B64.c)
 *     sub_18001B108 @ 0x18001B108 (sub_18001B108.c)
 *     sub_18001C824 @ 0x18001C824 (sub_18001C824.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18001C92C(_BYTE *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // eax

  if ( *a1 && sub_18001B108((RTL_SRWLOCK *)a1) && sub_18001C824(*((PSRWLOCK *)a1 + 3), a2, a3, a4) && !byte_18021F508 )
  {
    v8 = (int)qword_18021F500;
    if ( qword_18021F500 )
      v8 = (unsigned __int8)qword_18021F500();
    if ( !v8 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)a1 + 4);
      sub_180017B64((struct _TP_TIMER **)a1 + 6, a1 + 65, a1);
      if ( a1 != (_BYTE *)-32LL )
        ReleaseSRWLockExclusive((PSRWLOCK)a1 + 4);
    }
  }
}
