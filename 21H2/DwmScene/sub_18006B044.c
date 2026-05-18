/*
 * XREFs of sub_18006B044 @ 0x18006B044
 * Callers:
 *     sub_18012A6D7 @ 0x18012A6D7 (sub_18012A6D7.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x18012ABDA (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 *     sub_18012AC1A @ 0x18012AC1A (sub_18012AC1A.c)
 *     sub_18012AC76 @ 0x18012AC76 (sub_18012AC76.c)
 *     sub_18012AD21 @ 0x18012AD21 (sub_18012AD21.c)
 *     sub_18012AD93 @ 0x18012AD93 (sub_18012AD93.c)
 *     sub_18012AE11 @ 0x18012AE11 (sub_18012AE11.c)
 *     sub_18012AE51 @ 0x18012AE51 (sub_18012AE51.c)
 *     sub_18012AEAD @ 0x18012AEAD (sub_18012AEAD.c)
 *     sub_18012AF58 @ 0x18012AF58 (sub_18012AF58.c)
 *     sub_18012AFCA @ 0x18012AFCA (sub_18012AFCA.c)
 *     sub_18012BA1F @ 0x18012BA1F (sub_18012BA1F.c)
 * Callees:
 *     sub_1800671C0 @ 0x1800671C0 (sub_1800671C0.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006B044(__int64 a1)
{
  sub_1800671C0((__int64 *)(a1 + 32));
  if ( *(_BYTE *)(a1 + 16) )
    sub_180067304(*(_QWORD *)(a1 + 8));
  return sub_18011C1A0(a1);
}
