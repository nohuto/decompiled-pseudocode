/*
 * XREFs of ?LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x18000889C
 * Callers:
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180008994 (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180008A74 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall LsaCollisionResult(int a1)
{
  return (unsigned int)(a1 - 2) <= 1;
}
