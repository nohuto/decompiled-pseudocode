/*
 * XREFs of PopIsDozeSupported @ 0x14070FA68
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x140576788 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopPolicySystemIdle @ 0x14070E290 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x1407782B8 (PopInitSIdle.c)
 *     PopDeferDoze @ 0x1408EBDB8 (PopDeferDoze.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x14070FAA8 (PopIsHibernateSupported.c)
 */

char __fastcall PopIsDozeSupported(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  char v3; // al

  if ( (unsigned __int8)PopIsHibernateSupported(a1) || PopPromoteHibernateToShutdown != v2 )
  {
    v3 = v2;
    if ( *(_BYTE *)(v1 + 7) != (_BYTE)v2 )
      v3 = 1;
    LOBYTE(v2) = v3;
  }
  return v2;
}
