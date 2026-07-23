/*
 * XREFs of HalSetTimerProblem @ 0x1404D5840
 * Callers:
 *     HalpSfiTimerArm @ 0x1404D59B0 (HalpSfiTimerArm.c)
 *     HalpSfiTimerInitialize @ 0x1404D5AB0 (HalpSfiTimerInitialize.c)
 *     HalpRtcArmTimer @ 0x1404D5C90 (HalpRtcArmTimer.c)
 *     HalpHpetAcknowledgeInterrupt @ 0x1404D6000 (HalpHpetAcknowledgeInterrupt.c)
 *     HalpHpetArmTimer @ 0x1404D6040 (HalpHpetArmTimer.c)
 *     HalpHpetSetMatchValue @ 0x1404D608C (HalpHpetSetMatchValue.c)
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
