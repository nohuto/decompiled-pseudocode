/*
 * XREFs of sub_180020140 @ 0x180020140
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B77C @ 0x18001B77C (sub_18001B77C.c)
 *     sub_18001C1B8 @ 0x18001C1B8 (sub_18001C1B8.c)
 *     sub_18001C92C @ 0x18001C92C (sub_18001C92C.c)
 *     sub_180021624 @ 0x180021624 (sub_180021624.c)
 *     sub_180021DF8 @ 0x180021DF8 (sub_180021DF8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

void __fastcall sub_180020140(unsigned int a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+24h] [rbp-24h]

  v3 = (unsigned int)a2 >> 31;
  v4 = a2 & 0x7FFFFFFF;
  if ( a1 || a3 || v4 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      sub_18001C1B8(&byte_18021F950, a1, a2, a3);
    }
    else if ( a3 || v4 == 254 )
    {
      sub_18001C92C(&byte_18021F950, a1, v4, a3);
    }
    else
    {
      v6 = a1;
      v7 = (unsigned __int16)a2;
      if ( a2 < 0 )
        HIWORD(v7) |= 1u;
      if ( (unsigned int)sub_180021DF8(&v6) )
        sub_180021624(a1, v4, v3);
    }
  }
  else
  {
    sub_18001B77C((__int64)&byte_18021F950);
  }
}
