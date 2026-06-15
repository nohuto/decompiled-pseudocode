/*
 * XREFs of sub_18007EE0E @ 0x18007EE0E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

void __fastcall sub_18007EE0E(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  if ( a16 < 0 )
    sub_18005E8F8((__int64)"CAppAudioSessionId::Copy", 479, a16);
  JUMPOUT(0x180005CBELL);
}
