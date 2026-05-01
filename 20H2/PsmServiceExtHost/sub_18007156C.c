/*
 * XREFs of sub_18007156C @ 0x18007156C
 * Callers:
 *     sub_180071A28 @ 0x180071A28 (sub_180071A28.c)
 * Callees:
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_180041058 @ 0x180041058 (sub_180041058.c)
 *     sub_1800410C4 @ 0x1800410C4 (sub_1800410C4.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18007156C(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64),
        __int64 a4)
{
  _QWORD *v8; // rbx
  __int64 v9; // rax
  char *v10; // rdi
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a2 + 36) = 0;
  memset(*(void **)a2, 0, (unsigned __int64)*(unsigned int *)(a2 + 32) << 6);
  sub_1800410C4(*(_QWORD *)(a1 + 24) + 16LL, v12);
  while ( 1 )
  {
    v9 = sub_180041058(v12);
    v10 = (char *)v9;
    if ( !v9 )
      break;
    if ( (*(_QWORD *)(v9 + 32) & 0xF000000000000000uLL) != 0x2000000000000000LL
      && *(_QWORD *)(v9 + 56) == a1
      && (!a3 || a3(v9, a4)) )
    {
      v8 = (_QWORD *)(*(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 36) << 6));
      memset(v8, 0, 0x40uLL);
      v8[6] = v10;
      ++*(_DWORD *)(a2 + 36);
    }
    sub_1800265B0(v10);
  }
  return RtlReleaseSRWLockShared(v12[0] + 16LL);
}
