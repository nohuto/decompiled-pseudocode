/*
 * XREFs of ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022A6C
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800228F0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_HAM_AC.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18003448C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180079A1C (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022B10 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memcmp_0 @ 0x1800464F6 (memcmp_0.c)
 */

__int64 __fastcall RmHamFindHostWithFullInfo(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_HAM_ACTIVITY_HOST **a3)
{
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v6; // rbx
  unsigned int v7; // edi
  __int64 v9; // rdx
  const wchar_t *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  Host = RmHamFindHost(a1, *((_QWORD *)a2 + 68), (struct _RM_HAM_ACTIVITY_HOST **)&v11);
  v6 = (struct _RM_HAM_ACTIVITY_HOST *)v11;
  v7 = Host;
  if ( Host >= 0 )
  {
    if ( _wcsicmp((const wchar_t *)a2, v11 + 12) || memcmp_0((char *)a2 + 464, (char *)v6 + 488, 0x58uLL) )
    {
      v7 = -1073741584;
    }
    else
    {
      *a3 = v6;
      v6 = 0LL;
      v7 = 0;
    }
  }
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v6 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v6 - 64), v9);
    RmpReleaseGlobalLock();
  }
  return v7;
}
