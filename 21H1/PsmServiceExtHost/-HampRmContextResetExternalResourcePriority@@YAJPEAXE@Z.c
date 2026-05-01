/*
 * XREFs of ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x18007FA28
 * Callers:
 *     ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x1800811D8 (-HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z.c)
 * Callees:
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180011B54 (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180011C70 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180069BA4 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 */

__int64 __fastcall HampRmContextResetExternalResourcePriority(_QWORD *a1)
{
  unsigned __int8 v2; // dl
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  int v6; // eax
  __int128 v7; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-1A8h]
  _BYTE v9[384]; // [rsp+40h] [rbp-198h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v9);
  v3 = v2;
  result = HampSystemQueryPolicyInfo(
             (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(a1[1] + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) - 216),
             (const unsigned __int16 *)(a1[1] + 252LL),
             (struct ExecutionModel::_ResourceSetInfo *)v9);
  if ( (int)result >= 0 )
  {
    v5 = a1[2];
    v8 = *(unsigned int *)&v9[4 * v3 + 152];
    v7 = 0LL;
    LODWORD(v7) = v3;
    v6 = RmSrvResourceSetExternalResourcePriorities(RmSvcGlobals, v5, 1u, (struct ExecutionModel::_ResourceInfo *)&v7);
    if ( v6 >= 0 )
      return 0LL;
    else
      return v6 | 0xC0000000;
  }
  return result;
}
