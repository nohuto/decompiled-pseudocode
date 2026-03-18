/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x140606DA0
 * Callers:
 *     SeCheckAuditPrivilege @ 0x1405E5248 (SeCheckAuditPrivilege.c)
 *     PsOpenProcess @ 0x1406023B0 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x140602BE0 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheckEx @ 0x14063B9F8 (SeSinglePrivilegeCheckEx.c)
 *     ObpAdjustCreatorAccessState @ 0x1406BD90C (ObpAdjustCreatorAccessState.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405E4E9C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1406C160C (SepFilterPrivilegeAudits.c)
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
