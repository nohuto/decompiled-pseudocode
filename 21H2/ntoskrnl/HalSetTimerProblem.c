/*
 * XREFs of HalSetTimerProblem @ 0x1404D5600
 * Callers:
 *     HalpSfiTimerArm @ 0x1404D5770 (HalpSfiTimerArm.c)
 *     HalpSfiTimerInitialize @ 0x1404D5870 (HalpSfiTimerInitialize.c)
 *     HalpRtcArmTimer @ 0x1404D5A50 (HalpRtcArmTimer.c)
 *     HalpHpetAcknowledgeInterrupt @ 0x1404D5DC0 (HalpHpetAcknowledgeInterrupt.c)
 *     HalpHpetArmTimer @ 0x1404D5E00 (HalpHpetArmTimer.c)
 *     HalpHpetSetMatchValue @ 0x1404D5E4C (HalpHpetSetMatchValue.c)
 * Callees:
 *     <none>
 */

void __fastcall HalSetTimerProblem(__int64 a1, int a2, int a3)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // r8

  if ( a1 )
  {
    v4 = (ULONG_PTR *)HalpRegisteredTimers;
    while ( v4 != &HalpRegisteredTimers )
    {
      v5 = v4;
      v4 = (ULONG_PTR *)*v4;
      if ( v5[9] == a1 )
      {
        *((_DWORD *)v5 + 69) = a2;
        *((_DWORD *)v5 + 70) = a3;
        return;
      }
    }
  }
}
