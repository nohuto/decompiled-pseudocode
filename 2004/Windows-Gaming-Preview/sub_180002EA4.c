/*
 * XREFs of sub_180002EA4 @ 0x180002EA4
 * Callers:
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 * Callees:
 *     sub_180002044 @ 0x180002044 (sub_180002044.c)
 *     memset @ 0x1800453CC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_180002EA4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD v4[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_18005AC48 )
    qword_18005AC48();
  memset(v4, 0, 0x98uLL);
  v2 = *(_QWORD *)(a1 + 128);
  LODWORD(v4[3]) = 1;
  v4[0] = 0x1C0000409LL;
  v4[4] = 7LL;
  if ( !v2 )
    sub_180002044((__int64)v4);
  v4[5] = *(int *)(a1 + 4);
  v3 = *(unsigned int *)(a1 + 56);
  v4[2] = v2;
  v4[6] = v3;
  LODWORD(v4[3]) = 3;
  sub_180002044((__int64)v4);
}
