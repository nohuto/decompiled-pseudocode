/*
 * XREFs of KiIntSteerClearCpuSetAssignment @ 0x140520C98
 * Callers:
 *     KeIntSteerAssignCpuSet @ 0x140520A5C (KeIntSteerAssignCpuSet.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x140520B3C (KeIntSteerAssignCpuSetForGsiv.c)
 *     KiIntSteerAssignCpuSet @ 0x140520C3C (KiIntSteerAssignCpuSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerClearCpuSetAssignment(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 136) )
  {
    *(_WORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  return result;
}
