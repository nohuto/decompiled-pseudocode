/*
 * XREFs of InbvDisplayString @ 0x1403A9300
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140C50A94 )
    return 0;
  if ( qword_140C50AA0 )
    qword_140C50AA0(&v3);
  if ( qword_140C50A98 && (v2 = *(__int64 (**)(void))(qword_140C50A98 + 40)) != 0LL )
    return v2();
  else
    return 0;
}
