/*
 * XREFs of HalpTimerGetClockConfiguration @ 0x1403CE600
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetClockRates @ 0x1403CE6B4 (HalpTimerGetClockRates.c)
 */

__int64 __fastcall HalpTimerGetClockConfiguration(__int64 a1)
{
  ULONG_PTR v1; // r9
  char v2; // dl
  __int64 *v3; // rbx
  __int64 result; // rax

  v1 = HalpClockTimer;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  if ( *(_DWORD *)(v1 + 228) == 8 || (v2 = 0, (*(_DWORD *)(v1 + 224) & 1) == 0) )
  {
    v2 = 2;
    *(_BYTE *)a1 = 2;
  }
  if ( (*(_DWORD *)(v1 + 224) & 1) != 0 )
  {
    v2 |= 4u;
    *(_BYTE *)a1 = v2;
  }
  if ( HalpAlwaysOnTimer )
  {
    v2 |= 1u;
    *(_BYTE *)a1 = v2;
  }
  if ( (*(_DWORD *)(v1 + 224) & 0x20) != 0 )
    *(_BYTE *)a1 = v2 | 8;
  v3 = (__int64 *)(a1 + 16);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v1 + 228);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(v1 + 224);
  result = HalpTimerGetClockRates(v1, a1 + 16, a1 + 24);
  if ( !HalpTimerMaxIncrement )
  {
    result = *v3;
    HalpTimerMaxIncrement = *v3;
  }
  return result;
}
