/*
 * XREFs of sub_180077780 @ 0x180077780
 * Callers:
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

char __fastcall sub_180077780(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  result = PdcNotificationClientUnregister();
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 9LL);
    if ( result )
    {
      v7 = a1;
      v6 = v5;
      return sub_180063424(v3, byte_18009EE7A, v4, v5, (__int64)&v6, (__int64)&v7);
    }
  }
  return result;
}
