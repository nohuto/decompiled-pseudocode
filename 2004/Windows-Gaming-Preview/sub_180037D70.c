/*
 * XREFs of sub_180037D70 @ 0x180037D70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180037D70(__int64 a1, int a2)
{
  __int64 v3; // rax
  void (*v4)(void); // rax

  if ( qword_18005ADB0 )
  {
    v3 = *(_QWORD *)qword_18005ADB0;
    if ( a2 )
      v4 = *(void (**)(void))(v3 + 8);
    else
      v4 = *(void (**)(void))(v3 + 16);
    v4();
    return 0LL;
  }
  else
  {
    RoOriginateError(2147500037LL, 0LL);
    return 2147500037LL;
  }
}
