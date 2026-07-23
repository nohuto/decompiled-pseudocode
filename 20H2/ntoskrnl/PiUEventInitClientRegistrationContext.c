/*
 * XREFs of PiUEventInitClientRegistrationContext @ 0x14071AE94
 * Callers:
 *     PiUEventHandleRegistration @ 0x140718598 (PiUEventHandleRegistration.c)
 * Callees:
 *     RtlLengthSid @ 0x140209E10 (RtlLengthSid.c)
 *     KeInitializeGuardedMutex @ 0x140240260 (KeInitializeGuardedMutex.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140360F50 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x1403F9AF0 (ZwCreateWnfStateName.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405F7240 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405F73E0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406320E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406FC010 (RtlSetOwnerSecurityDescriptor.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

_WNF_STATE_NAME *PiUEventInitClientRegistrationContext()
{
  ACL *v0; // rbx
  _WNF_STATE_NAME *PoolWithTag; // rax
  _WNF_STATE_NAME *v2; // rdi
  struct _FAST_MUTEX *v3; // rax
  PSID v4; // rsi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // esi
  ACL *v10; // rax
  void *v12; // rcx
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-59h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v15; // [rsp+78h] [rbp-29h]
  unsigned __int8 CapabilitySid[48]; // [rsp+80h] [rbp-21h] BYREF
  char CapabilityGroupSid[48]; // [rsp+B0h] [rbp+Fh] BYREF

  *(_QWORD *)&UnicodeString.Length = 2752552LL;
  v15 = 0LL;
  v0 = 0LL;
  UnicodeString.Buffer = L"lpacPnpNotifications";
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  PoolWithTag = (_WNF_STATE_NAME *)ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x59706E50u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x90uLL);
    v3 = (struct _FAST_MUTEX *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x59706E50u);
    v2[2] = (_WNF_STATE_NAME)v3;
    if ( !v3 )
      goto LABEL_18;
    KeInitializeGuardedMutex(v3);
    v2[16].Data[1] = 4;
    v2[15] = (_WNF_STATE_NAME)&v2[14];
    v2[14] = (_WNF_STATE_NAME)&v2[14];
    LOBYTE(v2[17].Data[1]) = 1;
    v2[13] = (_WNF_STATE_NAME)&v2[12];
    v2[12] = (_WNF_STATE_NAME)&v2[12];
    if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid) < 0 )
      goto LABEL_18;
    if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) < 0 )
      goto LABEL_18;
    v4 = SeLocalSystemSid;
    if ( RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 1u) < 0
      || (v5 = RtlLengthSid(SeLowMandatorySid),
          v6 = RtlLengthSid(SeAllAppPackagesSid) + v5,
          v7 = RtlLengthSid(SeWorldSid) + v6,
          v8 = RtlLengthSid(v4) + v7,
          v9 = v8 + RtlLengthSid(CapabilitySid) + 48,
          v10 = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x59706E50u),
          (v0 = v10) == 0LL)
      || RtlCreateAcl(v10, v9, 2u) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 0x10000000, (unsigned __int8 *)SeLocalSystemSid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeWorldSid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeAllAppPackagesSid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, (unsigned __int8 *)SeLowMandatorySid, 0) < 0
      || (int)RtlpAddKnownAce(v0, 2u, 2, 1, CapabilitySid, 0) < 0
      || RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v0, 0) < 0
      || ZwCreateWnfStateName(v2 + 11, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 4u, SecurityDescriptor) < 0 )
    {
LABEL_18:
      v12 = (void *)v2[2];
      if ( v12 )
        ExFreePoolWithTag(v12, 0x59706E50u);
      ExFreePoolWithTag(v2, 0x59706E50u);
      v2 = 0LL;
    }
    if ( v0 )
      ExFreePoolWithTag(v0, 0x59706E50u);
  }
  return v2;
}
