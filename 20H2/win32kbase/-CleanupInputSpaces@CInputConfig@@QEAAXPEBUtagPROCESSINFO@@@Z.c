/*
 * XREFs of ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01AD970
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C000AC64 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000AC9C (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C000AE90 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C000B140 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::CleanupInputSpaces(CInputConfig *this, const struct tagPROCESSINFO *a2)
{
  CInputConfig *v2; // rdi
  CInputConfig *v4; // rax
  _QWORD *i; // rbx
  _QWORD **v6; // rax
  struct _LIST_ENTRY *v7; // rax
  CInputConfig *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  CInputConfig *v12; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  CInputConfig *v14; // [rsp+30h] [rbp-18h]
  _QWORD *v15; // [rsp+38h] [rbp-10h]

  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  v13[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v4 = *(CInputConfig **)v2;
  v13[1] = v2;
  v14 = v4;
  for ( i = *(_QWORD **)v4; ; i = (_QWORD *)*i )
  {
    v15 = i;
    if ( v4 == v2 )
      break;
    v6 = (_QWORD **)((char *)v4 + 16);
    if ( !v6 )
      break;
    if ( v6[2] == (_QWORD *)a2 )
    {
      v7 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v13);
      CInputConfig::_FreeInputSpace(v8, v7);
    }
    v4 = (CInputConfig *)i;
    v14 = (CInputConfig *)i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_EnsureInputSpace(v2, v9, v10, v11);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_NotifyExternalComponents(v12);
}
