/*
 * XREFs of SeCaptureSid @ 0x1406465B0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtSecureConnectPort @ 0x140645D70 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x140647DB4 (AlpcpConnectPort.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140669238 (ExpWnfCaptureScopeInstanceId.c)
 *     NtCreateTokenEx @ 0x140672E90 (NtCreateTokenEx.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406B7268 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlValidSid @ 0x140606780 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSid(char *Src, char a2, __int64 a3, __int64 a4, int a5, char a6, PSID *a7)
{
  __int64 v8; // rax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // ecx
  char *v12; // rdx
  unsigned int v13; // r14d
  PVOID PoolWithTag; // rax
  PSID v15; // rbx

  if ( a2 )
  {
    v8 = (__int64)(Src + 1);
    if ( (unsigned __int64)(Src + 1) >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(unsigned __int8 *)v8;
    LOBYTE(v10) = v9;
    v11 = 4 * v9 + 8;
    if ( 4 * v9 != -8 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = &Src[v11];
      if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    if ( !a6 )
    {
      *a7 = Src;
      return 0LL;
    }
    v10 = (unsigned __int8)Src[1];
    v11 = 4 * v10 + 8;
  }
  v13 = v11;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x69536553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v13);
  *((_BYTE *)*a7 + 1) = v10;
  v15 = *a7;
  if ( RtlValidSid(*a7) )
    return 0LL;
  ExFreePoolWithTag(v15, 0);
  *a7 = 0LL;
  return 3221225592LL;
}
