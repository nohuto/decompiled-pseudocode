/*
 * XREFs of sub_18001FD3C @ 0x18001FD3C
 * Callers:
 *     sub_18001B82C @ 0x18001B82C (sub_18001B82C.c)
 *     sub_18001BA94 @ 0x18001BA94 (sub_18001BA94.c)
 *     sub_18001FDC0 @ 0x18001FDC0 (sub_18001FDC0.c)
 * Callees:
 *     sub_180020FF0 @ 0x180020FF0 (sub_180020FF0.c)
 */

void __fastcall sub_18001FD3C(__int64 a1, volatile signed __int32 *a2, int a3, int a4)
{
  RTL_SRWLOCK *v8; // rsi
  int v9; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-30h]

  if ( *(_BYTE *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( !a4 || a4 != *(_DWORD *)(a1 + 28) || (v9 = a3, v10 = a2, !(unsigned __int8)sub_180020FF0(a1 + 80, &v9, 16LL)) )
      _InterlockedAnd(a2, a3 != 0 ? -5 : -2111);
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
  }
}
