/*
 * XREFs of sub_1800B5E1C @ 0x1800B5E1C
 * Callers:
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 *     sub_1800542FC @ 0x1800542FC (sub_1800542FC.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B5EB8 @ 0x1800B5EB8 (sub_1800B5EB8.c)
 */

void __fastcall __noreturn sub_1800B5E1C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_18019FA10 )
    qword_18019FA10();
  memset(v5, 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 128);
  LODWORD(v5[3]) = 1;
  v5[0] = 0x1C0000409LL;
  v5[4] = 7LL;
  if ( !v3 )
    sub_1800B5EB8(v5, v2, 1LL);
  v5[5] = *(int *)(a1 + 4);
  v4 = *(unsigned int *)(a1 + 56);
  v5[2] = v3;
  v5[6] = v4;
  LODWORD(v5[3]) = 3;
  sub_1800B5EB8(v5, v2, 0LL);
}
