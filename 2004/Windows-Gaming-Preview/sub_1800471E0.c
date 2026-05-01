/*
 * XREFs of sub_1800471E0 @ 0x1800471E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007A7C @ 0x180007A7C (sub_180007A7C.c)
 *     sub_180008BE0 @ 0x180008BE0 (sub_180008BE0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800471E0()
{
  int v0; // eax

  if ( byte_18005AC18 )
    goto LABEL_6;
  v0 = (int)qword_18005ABE0;
  if ( qword_18005ABE0 )
    v0 = (unsigned __int8)qword_18005ABE0();
  if ( v0 )
  {
LABEL_6:
    byte_18005A430 = 0;
    sub_180007A7C((__int64)&byte_18005A430);
  }
  else
  {
    sub_180008BE0((__int64)&byte_18005A430);
  }
}
