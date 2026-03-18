/*
 * XREFs of RegisterLPK @ 0x1C01137C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterLPK(__int64 a1)
{
  *(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 760) = a1;
  return 1LL;
}
