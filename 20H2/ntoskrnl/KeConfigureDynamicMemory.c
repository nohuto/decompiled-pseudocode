/*
 * XREFs of KeConfigureDynamicMemory @ 0x140511208
 * Callers:
 *     MiAddPhysicalMemory @ 0x1408C76D0 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C8514 (MiMapNewPfns.c)
 *     MiRemovePhysicalMemory @ 0x1408C87CC (MiRemovePhysicalMemory.c)
 * Callees:
 *     VslConfigureDynamicMemory @ 0x1404FA594 (VslConfigureDynamicMemory.c)
 *     HvlpAddPhysicalMemory @ 0x1405C7D1C (HvlpAddPhysicalMemory.c)
 */

NTSTATUS __fastcall KeConfigureDynamicMemory(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdx
  NTSTATUS result; // eax

  if ( a1 > a2 )
    goto LABEL_9;
  v6 = a2 - a1;
  if ( v6 == -1LL )
    goto LABEL_9;
  if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
  {
    if ( !a3 )
    {
      result = HvlpAddPhysicalMemory(a1, v6 + 1);
      goto LABEL_10;
    }
    if ( a3 - 1 <= 1 )
    {
      result = 0;
      goto LABEL_10;
    }
LABEL_9:
    result = -1073741811;
LABEL_10:
    if ( result < 0 )
      return result;
  }
  return VslConfigureDynamicMemory(a1, a2, a3);
}
