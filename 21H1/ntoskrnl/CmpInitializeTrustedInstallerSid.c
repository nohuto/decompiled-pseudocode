/*
 * XREFs of CmpInitializeTrustedInstallerSid @ 0x140A6DB44
 * Callers:
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     RtlLengthRequiredSid @ 0x140673F70 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x14067E0B0 (RtlInitializeSid.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

int CmpInitializeTrustedInstallerSid()
{
  ULONG v0; // eax
  PVOID PoolWithTag; // rax
  _DWORD *v2; // rbx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v0, 0x65536D43u);
  CmpTrustedInstallerSid = PoolWithTag;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(PoolWithTag) = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u);
    v2[2] = 80;
    v2[3] = 956008885;
    v2[4] = -876444647;
    v2[5] = 1831038044;
    v2[6] = 1853292631;
    v2[7] = -2023488832;
  }
  return (int)PoolWithTag;
}
