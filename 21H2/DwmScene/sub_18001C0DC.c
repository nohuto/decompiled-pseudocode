/*
 * XREFs of sub_18001C0DC @ 0x18001C0DC
 * Callers:
 *     sub_1800163F0 @ 0x1800163F0 (sub_1800163F0.c)
 *     sub_18001B9E0 @ 0x18001B9E0 (sub_18001B9E0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001C0DC(__int64 a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rdx
  __int64 i; // rax
  int v5; // eax

  if ( *(_BYTE *)a1 )
  {
    v2 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    v3 = *(_QWORD *)(a1 + 88);
    for ( i = *(_QWORD *)(a1 + 80); i != v3; i += 16LL )
      _InterlockedAnd(*(volatile signed __int32 **)(i + 8), *(_DWORD *)i != 0 ? -5 : -2111);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a1 + 80);
    v5 = 1;
    if ( *(_DWORD *)(a1 + 28) != -1 )
      v5 = *(_DWORD *)(a1 + 28) + 1;
    *(_DWORD *)(a1 + 28) = v5;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
