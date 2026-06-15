/*
 * XREFs of sub_18007ECF1 @ 0x18007ECF1
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

void __fastcall sub_18007ECF1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  if ( a10 < 0 )
    sub_18005E8F8((__int64)"CAudioSessionInstanceId::Copy", 930, a10);
  JUMPOUT(0x180005BBELL);
}
