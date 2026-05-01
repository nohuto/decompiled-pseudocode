/*
 * XREFs of DllCanUnloadNow @ 0x180009760
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009C60 @ 0x180009C60 (sub_180009C60.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  __int64 v0; // rdx

  InitOnceExecuteOnce(&InitOnce, InitFn, 0LL, 0LL);
  byte_18005AE90 = 1;
  return (unsigned __int8)sub_180009C60(&qword_18005AE88, v0, 0LL) == 0;
}
