/*
 * XREFs of ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022C80
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18000F9B0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022BD4 (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180026158 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180028B1C (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180034E3C (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x18006A38C (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x18007BAC8 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007EB50 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x18007F45C (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 */

__int64 __fastcall RmHamFindHost(struct _HOST_ACTIVITY_MANAGER *a1, __int64 a2, struct _RM_HAM_ACTIVITY_HOST **a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r10
  int v10; // esi
  int v11; // edi
  DWORD v12; // esi
  _QWORD *Value; // rdi
  _QWORD *v14; // rax

  RtlAcquireSRWLockShared((char *)a1 - 1736);
  v6 = *((_DWORD *)a1 - 437);
  v7 = 0LL;
  v8 = -1LL << (*((_BYTE *)a1 - 1748) & 0x1F);
  v9 = v8 & (HIBYTE(a2)
           + 37
           * (BYTE6(a2)
            + 37
            * (BYTE5(a2)
             + 37
             * (BYTE4(a2)
              + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  if ( v6 >> 5 )
  {
    v7 = *((_QWORD *)a1 - 218)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v9)) & ((v6 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
      {
        if ( a2 != *(_QWORD *)(v7 + 32) )
          goto LABEL_2;
        v10 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_9;
      }
    }
  }
  v7 = v9;
  v10 = -1073741275;
LABEL_9:
  RtlReleaseSRWLockShared((char *)a1 - 1736);
  v11 = 0;
  if ( v10 < 0 )
  {
    v11 = v10;
    v7 = 0LL;
  }
  if ( v11 >= 0 )
  {
    if ( (*(_BYTE *)(v7 + 836) & 1) != 0 )
    {
      v12 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v12) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      dword_1800B4118 = GetCurrentThreadId();
      if ( *(int *)(v7 + 24) < 0 )
      {
        v11 = -1073741275;
      }
      else
      {
        ++*(_QWORD *)(v7 + 656);
        v11 = 0;
        *a3 = (struct _RM_HAM_ACTIVITY_HOST *)(v7 + 64);
      }
      dword_1800B4118 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v14 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v14 & 1) == 0 )
          __int2c();
        if ( v14[1]-- == 1LL )
          *v14 &= ~1uLL;
      }
    }
    else
    {
      v11 = -1073741776;
    }
  }
  if ( v7 )
    RmpObjectRelease((PVOID)v7);
  return (unsigned int)v11;
}
