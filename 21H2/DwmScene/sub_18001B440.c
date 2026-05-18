/*
 * XREFs of sub_18001B440 @ 0x18001B440
 * Callers:
 *     sub_18001C9C0 @ 0x18001C9C0 (sub_18001C9C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18001B440(__int64 a1, __int64 a2)
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
      v6 = (void (__fastcall *)(_QWORD *, __int64, __int64))qword_18021F8D8;
      if ( qword_18021F8D8 || (v6 = (void (__fastcall *)(_QWORD *, __int64, __int64))qword_18021F8E0) != 0LL )
        v6(v5, a2, -1LL);
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
}
