/*
 * XREFs of DbgLoadUserImageSymbols @ 0x1403CCD08
 * Callers:
 *     MiLoadUserSymbols @ 0x1407D0F7C (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x140407AE0 (DebugService2.c)
 */

__int64 __fastcall DbgLoadUserImageSymbols(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v6[0] = a2;
  v6[1] = a3;
  v7 = a5;
  v8 = a4;
  return DebugService2(a1, v6, 3LL);
}
