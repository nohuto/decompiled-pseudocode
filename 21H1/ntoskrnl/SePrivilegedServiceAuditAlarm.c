/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x1405E5240
 * Callers:
 *     SeCheckAuditPrivilege @ 0x1405E2FB8 (SeCheckAuditPrivilege.c)
 *     SeSinglePrivilegeCheckEx @ 0x1405E30A8 (SeSinglePrivilegeCheckEx.c)
 *     PsOpenProcess @ 0x140602740 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x140602F70 (RtlpNewSecurityObject.c)
 *     ObpAdjustCreatorAccessState @ 0x140616FB4 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405E3150 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1406CBA00 (SepFilterPrivilegeAudits.c)
 */

void __fastcall SePrivilegedServiceAuditAlarm(unsigned __int16 *a1, __int64 *a2, int *a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  PSE_EXPORTS v11; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  if ( !RtlEqualSid(SeLocalSystemSid, v10) )
  {
    if ( (v11 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v10))
      && !RtlEqualSid(v11->SeLocalServiceSid, v10)
      || (unsigned __int8)SepFilterPrivilegeAudits(1LL, a3) )
    {
      SepAdtPrivilegedServiceAuditAlarm((int)a2, &SeSubsystemName, a1, v4, a2[2], a3, a4);
    }
  }
}
