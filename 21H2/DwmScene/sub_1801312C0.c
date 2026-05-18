/*
 * XREFs of sub_1801312C0 @ 0x1801312C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019674 @ 0x180019674 (sub_180019674.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1801312C0()
{
  int v0; // eax

  if ( byte_18021F508 )
    goto LABEL_6;
  v0 = (int)qword_18021F500;
  if ( qword_18021F500 )
    v0 = (unsigned __int8)qword_18021F500();
  if ( v0 )
  {
LABEL_6:
    byte_18021F950 = 0;
    if ( qword_18021F960 )
      sub_18001D0A0((char *)qword_18021F960);
  }
  else
  {
    sub_180019674((__int64)&byte_18021F950);
  }
}
