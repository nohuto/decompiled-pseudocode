/*
 * XREFs of sub_1800666FC @ 0x1800666FC
 * Callers:
 *     sub_180065D0C @ 0x180065D0C (sub_180065D0C.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180066798 @ 0x180066798 (sub_180066798.c)
 */

void __fastcall __noreturn sub_1800666FC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD v5[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_1800B4FA0 )
    qword_1800B4FA0();
  memset(v5, 0, 0x98uLL);
  v3 = *(_QWORD *)(a1 + 128);
  LODWORD(v5[3]) = 1;
  v5[0] = 0x1C0000409LL;
  v5[4] = 7LL;
  if ( !v3 )
    sub_180066798(v5, v2, 1LL);
  v5[5] = *(int *)(a1 + 4);
  v4 = *(unsigned int *)(a1 + 56);
  v5[2] = v3;
  v5[6] = v4;
  LODWORD(v5[3]) = 3;
  sub_180066798(v5, v2, 0LL);
}
