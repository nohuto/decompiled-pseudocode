/*
 * XREFs of InbvDisplayString @ 0x1403A7A30
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140C509E4 )
    return 0;
  if ( qword_140C509F0 )
    qword_140C509F0(&v3);
  if ( qword_140C509E8 && (v2 = *(__int64 (**)(void))(qword_140C509E8 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
