/*
 * XREFs of sub_180008CE8 @ 0x180008CE8
 * Callers:
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001FEC0 @ 0x18001FEC0 (sub_18001FEC0.c)
 *     sub_1800823D0 @ 0x1800823D0 (sub_1800823D0.c)
 * Callees:
 *     sub_1800097FC @ 0x1800097FC (sub_1800097FC.c)
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 */

__int64 __fastcall sub_180008CE8(_QWORD *a1, int a2)
{
  __int64 v5; // rcx

  sub_180009854(*a1);
  if ( !a2 && !*((_DWORD *)a1 + 21) )
    return sub_1800097FC(*a1);
  v5 = *a1;
  ++a1[11];
  sub_1800097FC(v5);
  return RtlWakeAddressAll(a1 + 11);
}
