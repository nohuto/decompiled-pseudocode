/*
 * XREFs of sub_180038FF0 @ 0x180038FF0
 * Callers:
 *     sub_180038D80 @ 0x180038D80 (sub_180038D80.c)
 *     sub_180038EBC @ 0x180038EBC (sub_180038EBC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180038FF0(__int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  _QWORD *v3; // rdi
  void (__fastcall *v4)(__int64, __int64 (__fastcall *)(), __int64); // rax
  unsigned int v5; // edi

  if ( !*(_BYTE *)a1 )
    return 0LL;
  v2 = (RTL_SRWLOCK *)(a1 + 8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v3 = (_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 32) )
  {
    v5 = *(_DWORD *)(a1 + 28);
  }
  else
  {
    *v3 = 0LL;
    v4 = (void (__fastcall *)(__int64, __int64 (__fastcall *)(), __int64))qword_1800B4F08;
    if ( qword_1800B4F08
      || (v4 = (void (__fastcall *)(__int64, __int64 (__fastcall *)(), __int64))qword_1800B5010) != 0LL )
    {
      v4(a1 + 32, sub_180063E70, a1);
    }
    if ( *v3 )
    {
      v5 = 1;
      *(_DWORD *)(a1 + 28) = 1;
    }
    else
    {
      v5 = 0;
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v5;
}
