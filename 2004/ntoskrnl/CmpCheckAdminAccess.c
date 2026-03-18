/*
 * XREFs of CmpCheckAdminAccess @ 0x1406DD098
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x14064FCAC (CmpVEExecuteCreateLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1406DCA90 (CmpVEPerformOpenAccessCheck.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     SeAccessCheckFromState @ 0x14027DC60 (SeAccessCheckFromState.c)
 *     CmpBuildAdminInformation @ 0x1406DD170 (CmpBuildAdminInformation.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCheckAdminAccess(
        ACCESS_MASK DesiredAccess,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        __int64 a3,
        BOOLEAN *a4)
{
  int v7; // edi
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-28h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-24h] BYREF
  PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation; // [rsp+58h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-18h] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  PrimaryTokenInformation = 0LL;
  Privileges = 0LL;
  v7 = CmpBuildAdminInformation(&PrimaryTokenInformation, a3);
  if ( v7 >= 0 )
  {
    *a4 = SeAccessCheckFromState(
            SecurityDescriptor,
            PrimaryTokenInformation,
            0LL,
            DesiredAccess,
            0,
            &Privileges,
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            1,
            &GrantedAccess,
            &AccessStatus);
    v7 = 0;
  }
  if ( Privileges )
    ExFreePoolWithTag(Privileges, 0);
  if ( PrimaryTokenInformation )
    CmSiFreeMemory((PPRIVILEGE_SET)PrimaryTokenInformation);
  return (unsigned int)v7;
}
