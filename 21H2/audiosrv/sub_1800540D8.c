/*
 * XREFs of sub_1800540D8 @ 0x1800540D8
 * Callers:
 *     DllMain @ 0x18006D2E0 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800540D8(__int64 a1, __int64 a2, void *a3)
{
  LPVOID Context; // [rsp+40h] [rbp+18h] BYREF

  Context = a3;
  if ( qword_18019E7A8 )
    return 2147943647LL;
  qword_18019E7A8 = 0x8000LL;
  qword_18019E7B8 = 4LL;
  qword_18019E7B0 = 4LL;
  return !InitOnceExecuteOnce(&stru_18019F918, (PINIT_ONCE_FN)sub_180053A00, 0LL, &Context) ? 0x8007000E : 0;
}
