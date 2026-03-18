/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x14068EA00
 * Callers:
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     SeCheckAuditPrivilege @ 0x140628954 (SeCheckAuditPrivilege.c)
 *     SeSinglePrivilegeCheckEx @ 0x140667BF8 (SeSinglePrivilegeCheckEx.c)
 *     ObpAdjustCreatorAccessState @ 0x14066844C (ObpAdjustCreatorAccessState.c)
 *     PsOpenProcess @ 0x14067A820 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x14067B050 (RtlpNewSecurityObject.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x140298E50 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14068D45C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x1406ECD00 (SepFilterPrivilegeAudits.c)
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
