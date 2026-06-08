/*
 * XREFs of SetPerformanceEnergyBiasPolicy @ 0x1C0001850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetPerformanceEnergyBiasPolicy(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // rax
  __int64 result; // rax

  v2 = (1500 - 15 * a2) / 0x64u;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 80LL) )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_1C001C708)(
             *(unsigned int *)(*(_QWORD *)a1 + 84LL),
             432LL,
             -16LL,
             v2 & 0xF);
  v3 = __readmsr(0x1B0u);
  result = ((unsigned __int8)v2 ^ (unsigned __int8)v3) & 0xF ^ v3;
  __writemsr(0x1B0u, result);
  return result;
}
