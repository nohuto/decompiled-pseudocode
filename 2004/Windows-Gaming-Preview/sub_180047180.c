/*
 * XREFs of sub_180047180 @ 0x180047180
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008538 @ 0x180008538 (sub_180008538.c)
 *     sub_180008CD4 @ 0x180008CD4 (sub_180008CD4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180047180()
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
    byte_18005A038 = 0;
    if ( lpMem )
      sub_180008538(lpMem);
  }
  else
  {
    sub_180008CD4((__int64)&byte_18005A038);
  }
}
