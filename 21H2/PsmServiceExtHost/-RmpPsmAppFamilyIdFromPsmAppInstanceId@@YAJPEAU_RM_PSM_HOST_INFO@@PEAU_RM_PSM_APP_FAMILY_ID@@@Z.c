/*
 * XREFs of ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180009DFC
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000475C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000694C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007DF0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempPackageFamilyNameFromPsmKey @ 0x180010130 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180010270 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyIdFromPsmAppInstanceId(
        struct _RM_PSM_HOST_INFO *a1,
        struct _RM_PSM_APP_FAMILY_ID *a2)
{
  int v4; // edi
  unsigned __int16 v6[232]; // [rsp+20h] [rbp-1E8h] BYREF

  v4 = CempPackageFamilyNameFromPsmKey(a1, v6);
  if ( v4 >= 0 )
    RmpPsmAppFamilyIdInitialize(v6, (struct _RM_PSM_HOST_INFO *)((char *)a1 + 464), *((_DWORD *)a1 + 133), a2);
  return (unsigned int)v4;
}
