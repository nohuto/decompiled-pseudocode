/*
 * XREFs of CmpCallCallBacks @ 0x140622994
 * Callers:
 *     CmpDoQueryKeyName @ 0x14025BE50 (CmpDoQueryKeyName.c)
 *     CmpDeleteKeyObject @ 0x140622AD0 (CmpDeleteKeyObject.c)
 *     CmUnloadKey @ 0x140659A98 (CmUnloadKey.c)
 * Callees:
 *     CmpCallCallBacksEx @ 0x140626B30 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmpCallCallBacks(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // [rsp+20h] [rbp-28h]

  v7 = a4;
  LOBYTE(a4) = 1;
  return CmpCallCallBacksEx(a1, a2, 0, a4, v7, a5, a6);
}
