/*
 * XREFs of CmpCallCallBacks @ 0x14061CA8C
 * Callers:
 *     CmpDoQueryKeyName @ 0x140302C50 (CmpDoQueryKeyName.c)
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 *     CmUnloadKey @ 0x1406A219C (CmUnloadKey.c)
 * Callees:
 *     CmpCallCallBacksEx @ 0x140614140 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmpCallCallBacks(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  return CmpCallCallBacksEx(a1, a2, 0LL, 1, a4, a5, a6);
}
