/*
 * XREFs of sub_180131270 @ 0x180131270
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001950C @ 0x18001950C (sub_18001950C.c)
 *     sub_18001C56C @ 0x18001C56C (sub_18001C56C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180131270()
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
    byte_18020F020 = 0;
    sub_18001C56C((__int64)&byte_18020F020);
  }
  else
  {
    sub_18001950C((__int64)&byte_18020F020);
  }
}
