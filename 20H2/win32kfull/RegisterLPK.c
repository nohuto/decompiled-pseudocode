/*
 * XREFs of RegisterLPK @ 0x1C0114980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterLPK(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 760) = a1;
  return 1LL;
}
