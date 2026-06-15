/*
 * XREFs of sub_18009D044 @ 0x18009D044
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005289C @ 0x18005289C (sub_18005289C.c)
 */

void __fastcall sub_18009D044(
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
        __int64 a12,
        int a13,
        int a14,
        unsigned __int64 a15)
{
  __int64 *v15; // [rsp+78h] [rbp+20h]

  if ( a14 < 0 )
    sub_18005289C(v15, a15);
  JUMPOUT(0x180053701LL);
}
