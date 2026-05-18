/*
 * XREFs of sub_180024850 @ 0x180024850
 * Callers:
 *     sub_18002A430 @ 0x18002A430 (sub_18002A430.c)
 *     sub_180078E1C @ 0x180078E1C (sub_180078E1C.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 *     sub_18007A10C @ 0x18007A10C (sub_18007A10C.c)
 *     sub_18007CC84 @ 0x18007CC84 (sub_18007CC84.c)
 *     sub_18008C0A4 @ 0x18008C0A4 (sub_18008C0A4.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_1800C2B80 @ 0x1800C2B80 (sub_1800C2B80.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_18011BF60 @ 0x18011BF60 (sub_18011BF60.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180024850(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp-18h]

  sub_18011BF60(v4);
  a1[2] = 0LL;
  a1[3] = 0LL;
  sub_180020B7C(a1, (__int64)v4);
  if ( v5 >= 0x10 )
  {
    v2 = v4[0];
    if ( v5 + 1 >= 0x1000 )
    {
      v2 = *(_QWORD *)(v4[0] - 8LL);
      if ( (unsigned __int64)(v4[0] - v2 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v2, v5 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v2);
  }
  return a1;
}
