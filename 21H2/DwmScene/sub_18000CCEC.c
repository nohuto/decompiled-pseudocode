/*
 * XREFs of sub_18000CCEC @ 0x18000CCEC
 * Callers:
 *     sub_18000CD78 @ 0x18000CD78 (sub_18000CD78.c)
 *     sub_18000DB78 @ 0x18000DB78 (sub_18000DB78.c)
 * Callees:
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 */

__int64 __fastcall sub_18000CCEC(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  signed int LastError; // r10d
  __int64 result; // rax

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_18000DC18(a1, a2, a3, a4, a5, a6, 2, -2147024228);
    LastError = 668;
  }
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
