/*
 * XREFs of ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007E90
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000EF80 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18000335C (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800078A4 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     CempListEntryIsNull @ 0x180008768 (CempListEntryIsNull.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000FCB8 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026310 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18006B648 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x180073964 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall RmpActivityHostZeroProcessNotification(_QWORD *P)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  HANDLE *v5; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx

  v2 = (_QWORD *)(*(_QWORD *)(P[6] + 2720LL) + 88LL);
  v3 = (_QWORD *)*v2;
  while ( v3 != v2 )
  {
    v5 = (HANDLE *)v3[4];
    (*((void (__fastcall **)(HANDLE *))*v5 + 1))(v5);
    v6 = v5[167];
    v3 = (_QWORD *)*v3;
    if ( P == v6 )
    {
      if ( v6 )
      {
        RmpObjectRelease(v6);
        v5[167] = 0LL;
      }
      if ( (*((unsigned __int8 (__fastcall **)(HANDLE *))*v5 + 7))(v5) )
        ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v5);
      else
        ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v5, 1);
    }
    (*((void (__fastcall **)(HANDLE *))*v5 + 2))(v5);
  }
  P[170] = 0LL;
  P[171] = 0LL;
  *((_DWORD *)P + 344) = 0;
  RmpActivityHostResourceSetsChanged((struct _RM_ACTIVITY_HOST *)P, 2u);
  if ( (*((_BYTE *)P + 836) & 1) == 0 )
    RmpActivityHostComputeAndApplyEnforcementSettings((char *)P);
  if ( !(unsigned int)CempListEntryIsNull(P + 159) )
  {
    v7 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *(_OWORD *)v4 = 0LL;
    RmpObjectRelease(P);
  }
  if ( P[178] )
    RmpActivityHostRemoveFromRemediationGroup(P, 1u);
  else
    SetEvent(*(HANDLE *)(P[7] + 80LL));
  RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)P);
}
