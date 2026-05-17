/*
 * XREFs of LdrGetDllHandle @ 0x180016870
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetDllHandleEx @ 0x1800168A0 (LdrGetDllHandleEx.c)
 */

__int64 __fastcall LdrGetDllHandle(int a1, int a2, int a3, __int64 a4)
{
  return LdrGetDllHandleEx(1, a1, a2, a3, a4);
}
