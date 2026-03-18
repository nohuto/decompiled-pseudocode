/*
 * XREFs of PopIsDozeSupported @ 0x1406A611C
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x140576DD8 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopPolicySystemIdle @ 0x1406A6300 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x14077A6C8 (PopInitSIdle.c)
 *     PopDeferDoze @ 0x1408ED038 (PopDeferDoze.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopIsHibernateSupported @ 0x1406A615C (PopIsHibernateSupported.c)
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
