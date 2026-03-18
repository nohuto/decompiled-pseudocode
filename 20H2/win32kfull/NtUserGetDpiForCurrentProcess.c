/*
 * XREFs of NtUserGetDpiForCurrentProcess @ 0x1C01207C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserGetDpiForCurrentProcess(__int64 a1, __int64 a2, __int64 a3)
{
  return *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 284);
}
