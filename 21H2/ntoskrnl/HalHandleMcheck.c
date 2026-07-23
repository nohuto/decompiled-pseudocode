/*
 * XREFs of HalHandleMcheck @ 0x1404BCCA0
 * Callers:
 *     KiHandleMcheck @ 0x140512960 (KiHandleMcheck.c)
 * Callees:
 *     HalpHandleMachineCheck @ 0x1404BA42C (HalpHandleMachineCheck.c)
 */

char __fastcall HalHandleMcheck(__int64 a1, __int64 a2, _OWORD *a3)
{
  char result; // al
  __int64 v4; // rbx

  result = HalpMcaEnabled;
  if ( HalpMcaEnabled )
  {
    if ( a3 )
      *a3 = 0LL;
    v4 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
    *(_QWORD *)(v4 + 32) = a3;
    result = HalpHandleMachineCheck(a1);
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  return result;
}
