/*
 * XREFs of ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180011850
 * Callers:
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000AE10 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x18000F830 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180027B40 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18003448C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180034C3C (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 * Callees:
 *     ?HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY@@@Z @ 0x180011370 (-HampActInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_RM_HAM_ACT.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180011560 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180011A30 (-RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPER.c)
 *     ?HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180011B54 (-HampSystemQueryPolicyInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAU_ResourceSetInfo@ExecutionMod.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180011C70 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180046068 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall HampActCreate(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HOST_ACTIVITY_MANAGER *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4,
        char a5,
        struct _HAM_ACTIVITY **a6)
{
  struct _HAM_ACTIVITY *Heap; // rax
  struct _HAM_ACTIVITY *v11; // rsi
  __int64 v12; // r9
  int PolicyInfo; // ebx
  struct ExecutionModel::_ResourceSetInfo *v14; // r8
  __int64 v15; // rcx
  ULONG v16; // ebx
  int *v17; // rdi
  _QWORD *v18; // rax
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-1C8h] BYREF
  _BYTE v21[164]; // [rsp+30h] [rbp-1B8h] BYREF
  char v22; // [rsp+D4h] [rbp-114h] BYREF

  Heap = (struct _HAM_ACTIVITY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x228uLL);
  v11 = Heap;
  if ( Heap )
  {
    HampActInitialize(a2, a4, a3, Heap);
    *((_QWORD *)v11 + 8) = a1;
    ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v21);
    PolicyInfo = HampSystemQueryPolicyInfo(
                   (struct _HOST_ACTIVITY_MANAGER *)(v12 - 216),
                   (const unsigned __int16 *)v11 + 126,
                   (struct ExecutionModel::_ResourceSetInfo *)v21);
    if ( PolicyInfo >= 0 )
    {
      ExecutionModel::RmpResourceSetPropertiesFromDefaultsAndOverrides(
        (struct _HAM_ACTIVITY *)((char *)v11 + 392),
        (struct _RM_RESOURCE_SET_PROPERTIES *)v21,
        v14);
      if ( (*(_BYTE *)(v15 + 40) & 0x10) != 0 && *(_QWORD *)(v15 + 80) < *(_QWORD *)(v15 + 64) )
      {
        PolicyInfo = -1073741811;
        goto LABEL_17;
      }
      RtlInitializeBitMap(&BitMapHeader, (PULONG)v11 + 124, 0x2Fu);
      v16 = 0;
      v17 = (int *)&v22;
      do
      {
        if ( *v17 < 101 )
          RtlSetBit(&BitMapHeader, v16);
        ++v16;
        ++v17;
      }
      while ( v16 < 0x2F );
      if ( (v21[42] & 7) == 4 )
        *((_DWORD *)v11 + 28) |= 0x80000u;
      if ( (a5 & 1) == 0 )
        *((_DWORD *)v11 + 28) &= ~0x80000u;
      PolicyInfo = 0;
    }
    if ( PolicyInfo < 0 )
    {
LABEL_20:
      CemRcObjectDereference(v11);
      return (unsigned int)PolicyInfo;
    }
    v18 = operator new(0x20uLL);
    if ( v18 )
    {
      v18[1] = v11;
      *v18 = &HAM_ACTIVITY_RM_CONTEXT::`vftable';
      PolicyInfo = 0;
      *((_DWORD *)v18 + 6) = 1;
      v18[2] = -1LL;
      *((_QWORD *)v11 + 11) = v18;
    }
    else
    {
      PolicyInfo = -1073741801;
    }
LABEL_17:
    if ( PolicyInfo >= 0 )
    {
      PolicyInfo = HampActInsert(v11);
      if ( PolicyInfo >= 0 )
      {
        *a6 = v11;
        return 0LL;
      }
    }
    goto LABEL_20;
  }
  return 3221225495LL;
}
