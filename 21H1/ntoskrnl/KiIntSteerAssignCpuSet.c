/*
 * XREFs of KiIntSteerAssignCpuSet @ 0x14051CC1C
 * Callers:
 *     KeIntSteerAssignCpuSet @ 0x14051CA3C (KeIntSteerAssignCpuSet.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14051CB1C (KeIntSteerAssignCpuSetForGsiv.c)
 * Callees:
 *     KiIntSteerClearCpuSetAssignment @ 0x14051CC78 (KiIntSteerClearCpuSetAssignment.c)
 *     KiIntSteerComputeCpuSet @ 0x14051CCA0 (KiIntSteerComputeCpuSet.c)
 */

__int64 __fastcall KiIntSteerAssignCpuSet(__int64 a1, __int16 a2, __int64 a3)
{
  int v4; // edx

  if ( *(_BYTE *)(a1 + 132) )
  {
    if ( *(_WORD *)(a1 + 72) == a2 )
    {
      if ( *(_QWORD *)(a1 + 136) == a3 )
      {
        return 0;
      }
      else
      {
        *(_QWORD *)(a1 + 136) = a3;
        v4 = KiIntSteerComputeCpuSet(a1);
        if ( v4 < 0 )
          KiIntSteerClearCpuSetAssignment(a1);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v4;
}
