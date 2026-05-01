/*
 * XREFs of sub_180077A70 @ 0x180077A70
 * Callers:
 *     sub_18003C668 @ 0x18003C668 (sub_18003C668.c)
 * Callees:
 *     sub_1800466F8 @ 0x1800466F8 (sub_1800466F8.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180077A70(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_1800466F8((volatile signed __int32 *)(a1 + 12));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, v1 + 1);
    if ( qword_1800B5050 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1800B5050 + 16LL))(qword_1800B5050);
  }
  return v1;
}
