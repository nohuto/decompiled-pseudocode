/*
 * XREFs of sub_180039098 @ 0x180039098
 * Callers:
 *     sub_180046410 @ 0x180046410 (sub_180046410.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180039098(__int64 a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *v5; // rcx
  void (__fastcall *v6)(_QWORD *, __int64, __int64); // rax

  if ( *(_BYTE *)a1 )
  {
    v4 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v5 = (_QWORD *)(a1 + 40);
    if ( !*(_QWORD *)(a1 + 40) )
    {
      *v5 = 0LL;
      v6 = (void (__fastcall *)(_QWORD *, __int64, __int64))qword_1800B4F08;
      if ( qword_1800B4F08 || (v6 = (void (__fastcall *)(_QWORD *, __int64, __int64))qword_1800B5010) != 0LL )
        v6(v5, a2, -1LL);
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
