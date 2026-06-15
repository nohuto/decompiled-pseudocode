/*
 * XREFs of sub_18002EFF0 @ 0x18002EFF0
 * Callers:
 *     sub_180074510 @ 0x180074510 (sub_180074510.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002EFF0(__int64 a1, int *a2, _QWORD *a3)
{
  int v3; // r9d

  *a3 = 0LL;
  v3 = *a2;
  if ( (*(_QWORD *)a2 || a2[2] != 192 || a2[3] != 1174405120)
    && (v3 != 796074085 || a2[1] != 1283256304 || a2[2] != 943112591 || a2[3] != -672026287) )
  {
    if ( v3 != 1585925261 || a2[1] != 1330659430 || a2[2] != -48524958 || a2[3] != 1020542289 )
      return 2147500034LL;
    a1 += 8LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
