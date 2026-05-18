/*
 * XREFs of sub_18000DAA0 @ 0x18000DAA0
 * Callers:
 *     sub_18000EEA0 @ 0x18000EEA0 (sub_18000EEA0.c)
 * Callees:
 *     sub_18000D948 @ 0x18000D948 (sub_18000D948.c)
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 */

__int64 __fastcall sub_18000DAA0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  signed int LastError; // ebx
  unsigned int v12; // ecx

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_18000DC18(a1, a2, a3, a4, a5, a6, 2, -2147024228);
    LastError = 668;
  }
  v12 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v12 = LastError;
  sub_18000D948(a1, a2, a3, a4, a5, a6, a7, v12, 0LL, 0);
  return (unsigned int)LastError;
}
