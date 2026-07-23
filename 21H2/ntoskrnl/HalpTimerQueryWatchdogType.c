/*
 * XREFs of HalpTimerQueryWatchdogType @ 0x1404B6CF0
 * Callers:
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerQueryWatchdogType(_DWORD *a1)
{
  int v1; // eax
  int v2; // r8d

  v1 = 0;
  if ( HalpWatchdogTimer )
  {
    v2 = *(_DWORD *)(HalpWatchdogTimer + 228);
    if ( v2 == 8 )
    {
      *a1 = 1;
      return 0LL;
    }
    LOBYTE(v1) = v2 != 13;
    v1 += 2;
  }
  *a1 = v1;
  return 0LL;
}
