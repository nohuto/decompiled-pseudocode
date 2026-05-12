/*
 * XREFs of StorPortAdapterPowerControl @ 0x1C003FC00
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011F5C (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0018548 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall StorPortAdapterPowerControl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  int IsAdapterControlSupported; // eax
  __int64 v9; // r10
  unsigned int v10; // edx

  IsAdapterControlSupported = RaidIsAdapterControlSupported(a1, 10);
  v9 = 0LL;
  if ( IsAdapterControlSupported )
  {
    v10 = RaCallMiniportAdapterControl(a1 + 304);
    v9 = MEMORY[0];
  }
  else
  {
    v10 = -1073741637;
  }
  *a7 = v9;
  return v10;
}
