/*
 * XREFs of sub_18000EDDC @ 0x18000EDDC
 * Callers:
 *     sub_18000D948 @ 0x18000D948 (sub_18000D948.c)
 * Callees:
 *     sub_18000EE74 @ 0x18000EE74 (sub_18000EE74.c)
 *     memset @ 0x18012396A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_18000EDDC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD v4[21]; // [rsp+20h] [rbp-A8h] BYREF

  if ( qword_18021F4B0 )
    qword_18021F4B0();
  memset(v4, 0, 0x98uLL);
  v2 = *(_QWORD *)(a1 + 128);
  LODWORD(v4[3]) = 1;
  v4[0] = 0x1C0000409LL;
  v4[4] = 7LL;
  if ( !v2 )
    sub_18000EE74(v4, 0LL, 1LL);
  v4[5] = *(int *)(a1 + 4);
  v3 = *(unsigned int *)(a1 + 56);
  v4[2] = v2;
  v4[6] = v3;
  LODWORD(v4[3]) = 3;
  sub_18000EE74(v4, 0LL, 0LL);
}
