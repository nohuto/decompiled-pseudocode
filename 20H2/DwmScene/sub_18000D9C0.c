/*
 * XREFs of sub_18000D9C0 @ 0x18000D9C0
 * Callers:
 *     sub_18000EDC0 @ 0x18000EDC0 (sub_18000EDC0.c)
 * Callees:
 *     sub_18000D868 @ 0x18000D868 (sub_18000D868.c)
 *     sub_18000DB38 @ 0x18000DB38 (sub_18000DB38.c)
 */

__int64 __fastcall sub_18000D9C0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  signed int LastError; // ebx
  unsigned int v12; // ecx

  LastError = GetLastError();
  if ( !LastError )
  {
    sub_18000DB38(a1, a2, a3, a4, a5, a6, 2, -2147024228);
    LastError = 668;
  }
  v12 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v12 = LastError;
  sub_18000D868(a1, a2, a3, a4, a5, a6, a7, v12, 0LL, 0);
  return (unsigned int)LastError;
}
