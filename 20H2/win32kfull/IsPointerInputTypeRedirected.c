/*
 * XREFs of IsPointerInputTypeRedirected @ 0x1C01F1E00
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerInputRedirected @ 0x1C01F1D64 (IsPointerInputRedirected.c)
 */

__int64 __fastcall IsPointerInputTypeRedirected(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 CurrentProcessWin32Process; // rax

  v3 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  return IsPointerInputRedirected(CurrentProcessWin32Process, *(_QWORD *)(grpdeskRitInput + 8LL), v3, 0LL);
}
