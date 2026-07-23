/*
 * XREFs of HalpSetupRealModeResume @ 0x1403FA300
 * Callers:
 *     HaliAcpiSleep @ 0x140386080 (HaliAcpiSleep.c)
 * Callees:
 *     HalpInterruptBuildStartupStub @ 0x1403A16D0 (HalpInterruptBuildStartupStub.c)
 *     KeSaveStateForHibernate @ 0x1403FF0B0 (KeSaveStateForHibernate.c)
 */

__int64 __fastcall HalpSetupRealModeResume(_QWORD *a1, int a2)
{
  _QWORD *v2; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  *(_DWORD *)HalpWakeVector = a2;
  HalpInterruptBuildStartupStub((PVOID *)&v5, 0LL, a1 + 18, HalpTiledCr3Addresses);
  KeSaveStateForHibernate(v5 + 18);
  v2 = v5;
  v5[79] = retaddr;
  v2[67] = &v5;
  v2[63] = 1LL;
  return 0LL;
}
