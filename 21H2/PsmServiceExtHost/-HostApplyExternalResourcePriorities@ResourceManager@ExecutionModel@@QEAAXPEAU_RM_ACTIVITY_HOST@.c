/*
 * XREFs of ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012CC4
 * Callers:
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007DF0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x1800108A0 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180015250 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002772C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000475C (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000A0D0 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001E700 (CempLockTrackerMarkReleased.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z @ 0x180074334 (-Revoke@ExternalResourceSet@ExecutionModel@@QEAAX_N@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostApplyExternalResourcePriorities(
        unsigned __int64 this,
        struct _RM_ACTIVITY_HOST *a2)
{
  _QWORD *v3; // r12
  unsigned __int64 v4; // r15
  _QWORD *i; // rbx
  struct _RM_ACTIVITY_HOST **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  struct _RM_ACTIVITY_HOST **v11; // rax
  __int64 v12; // rax

  v3 = (_QWORD *)(*(_QWORD *)(this + 24) + 40LL);
  v4 = this;
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v6 = (struct _RM_ACTIVITY_HOST **)i[2];
    if ( a2 == v6[167] )
    {
      if ( (*((_BYTE *)a2 + 836) & 1) != 0 )
      {
        HampHostAcquireLockSharedEx((struct _RM_ACTIVITY_HOST *)((char *)a2 + 64), 0LL);
        v9 = (*((_QWORD *)a2 + 89) & 0x2000000000LL) == 0 && (*((char *)a2 + 1244) < 0 || *((_DWORD *)a2 + 156) != 2);
        CempLockTrackerMarkReleased(v8, v7, 1LL);
        RtlReleaseSRWLockShared((char *)a2 + 64);
      }
      else
      {
        v9 = (*((unsigned __int16 *)a2 + 581) >> 2) & 1;
      }
      if ( v9 && (*((unsigned __int8 (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 7))(v6) )
      {
        LODWORD(this) = 3;
        while ( 1 )
        {
          v12 = (unsigned int)this + 3LL;
          if ( LODWORD(v6[3 * v12]) == (_DWORD)this && !BYTE5(v6[3 * v12 + 2]) )
            break;
          this = (unsigned int)(this + 1);
          if ( (unsigned int)this > 0x31 )
          {
            if ( *((_DWORD *)v6 + 320) == 1 )
              goto LABEL_7;
            break;
          }
        }
        (*((void (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 8))(v6);
      }
      else
      {
        ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriorities(
          (struct ExecutionModel::ResourceManager *)this,
          2u,
          0x32u,
          (struct ExecutionModel::_ResourceInfo *)(v6 + 9),
          a2);
        v10 = 3LL;
        v11 = v6 + 20;
        while ( 1 )
        {
          if ( *((_BYTE *)v11 + 5) && *(_DWORD *)v11 == 101 )
          {
            this = *((unsigned int *)v6 + 320);
            if ( (_DWORD)this == 2 && *(v11 - 1) )
            {
              ExecutionModel::ExternalResourceSet::Revoke((ExecutionModel::ExternalResourceSet *)v6, 0);
              goto LABEL_7;
            }
            if ( (_DWORD)this == 1 )
              break;
          }
          ++v10;
          v11 += 3;
          if ( v10 >= 50 )
            goto LABEL_7;
        }
        (*((void (__fastcall **)(struct _RM_ACTIVITY_HOST **))*v6 + 6))(v6);
      }
    }
LABEL_7:
    ;
  }
  if ( (*(_BYTE *)(v4 + 160) & 2) == 0 )
    TpPostWork(*(_QWORD *)(v4 + 152));
}
