/*
 * XREFs of sub_18001B1F0 @ 0x18001B1F0
 * Callers:
 *     sub_18001B1D0 @ 0x18001B1D0 (sub_18001B1D0.c)
 *     sub_18001B82C @ 0x18001B82C (sub_18001B82C.c)
 *     sub_18001BA94 @ 0x18001BA94 (sub_18001BA94.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001B1F0(__int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  _QWORD *v3; // rdi
  unsigned int v4; // edi
  void (__fastcall *v5)(__int64, __int64 (*)(), __int64); // rax

  if ( !*(_BYTE *)a1 )
    return 0LL;
  v2 = (RTL_SRWLOCK *)(a1 + 8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
  v3 = (_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(a1 + 32) )
  {
    v4 = *(_DWORD *)(a1 + 28);
  }
  else
  {
    *v3 = 0LL;
    v5 = (void (__fastcall *)(__int64, __int64 (*)(), __int64))qword_18021F8D8;
    if ( qword_18021F8D8 || (v5 = (void (__fastcall *)(__int64, __int64 (*)(), __int64))qword_18021F8E0) != 0LL )
      v5(a1 + 32, sub_1800163F0, a1);
    if ( *v3 )
    {
      v4 = 1;
      *(_DWORD *)(a1 + 28) = 1;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v4;
}
