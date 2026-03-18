/*
 * XREFs of NtIsOneCoreTransformMode @ 0x1C003F600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtIsOneCoreTransformMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3, a4) + 820) >> 23) & 1;
}
