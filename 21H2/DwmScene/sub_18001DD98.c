/*
 * XREFs of sub_18001DD98 @ 0x18001DD98
 * Callers:
 *     sub_180020ED0 @ 0x180020ED0 (sub_180020ED0.c)
 * Callees:
 *     sub_18001B82C @ 0x18001B82C (sub_18001B82C.c)
 *     sub_18001DE58 @ 0x18001DE58 (sub_18001DE58.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18001DD98(volatile signed __int32 *a1, unsigned __int8 a2, char a3, __int64 a4)
{
  __int64 v6; // r8
  int v7; // ebx
  int v8; // ebp
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h] BYREF
  __int16 v12; // [rsp+4Ch] [rbp-1Ch]

  LODWORD(v6) = *a1;
  v7 = (int)a1;
  v8 = a2;
  if ( (*a1 & 4) == 0 )
  {
    v6 = *(_QWORD *)sub_18001B82C(a1, (signed __int32 *)&v10);
    v10 = v6;
  }
  LODWORD(v10) = 0;
  v11 = 0;
  BYTE4(v10) = 2;
  v12 = WORD2(v10);
  return sub_18001DE58(
           v7 + 8,
           59381168,
           ((unsigned int)v6 >> 10) & 1,
           ((unsigned int)v6 >> 11) & 1,
           (__int64)&v11,
           v8,
           a3,
           a4);
}
