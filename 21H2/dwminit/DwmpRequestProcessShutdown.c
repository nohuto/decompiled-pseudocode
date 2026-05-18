/*
 * XREFs of DwmpRequestProcessShutdown @ 0x18000AB90
 * Callers:
 *     DwmpTerminateSessionProcess @ 0x18000A560 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000B5B8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 */

int __fastcall DwmpRequestProcessShutdown(CApiPortClient *a1, __int64 a2, __int16 a3, void *a4)
{
  unsigned int v5; // [rsp+20h] [rbp-28h]
  void *v6; // [rsp+30h] [rbp-18h]
  __int16 v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
  v9 = 536870913;
  return CApiPortClient::SendRequest(a1, &v9, a3, a4, v5, &v8, v6, v7);
}
