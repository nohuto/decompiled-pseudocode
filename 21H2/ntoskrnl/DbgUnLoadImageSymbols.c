/*
 * XREFs of DbgUnLoadImageSymbols @ 0x140585840
 * Callers:
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1409B3554 (PopShutdownSystem.c)
 * Callees:
 *     DebugService2 @ 0x140407AE0 (DebugService2.c)
 */

__int64 __fastcall DbgUnLoadImageSymbols(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v5 = 0;
  v6 = 0;
  v4[0] = a2;
  v4[1] = a3;
  return DebugService2(a1, (__int64)v4, 4u);
}
