/*
 * XREFs of ?QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInformation@@@Z @ 0x1C001880C
 * Callers:
 *     NtUserQueryActivationObject @ 0x1C0040320 (NtUserQueryActivationObject.c)
 * Callees:
 *     ?GetContainingGroupIdFromActivationObject@CActivationObjectManager@@AEBA?AUACTIVATION_GROUP_ID@@AEBVCActivationObject@@@Z @ 0x1C00188CC (-GetContainingGroupIdFromActivationObject@CActivationObjectManager@@AEBA-AUACTIVATION_GROUP_ID@@.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C00188F4 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 */

__int64 __fastcall CActivationObjectManager::QueryActivationObject(
        CActivationObjectManager *this,
        const struct _LUID *a2,
        struct _tagActivationObjectInformation *a3)
{
  CActivationObjectManager *v3; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rcx
  struct CActivationObject *ActivationObjectFromLuid; // r8
  __int64 v9; // r8
  CActivationObjectManager *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = this;
  v3 = qword_1C0252740;
  v6 = -1073741275;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&qword_1C0256460, 0LL);
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(v3, a2);
  if ( ActivationObjectFromLuid )
  {
    CActivationObjectManager::GetContainingGroupIdFromActivationObject(v7, &v11, ActivationObjectFromLuid);
    v6 = 0;
    *(_QWORD *)a3 = *(_QWORD *)(v9 + 72);
    *((_DWORD *)a3 + 2) = *(_DWORD *)(v9 + 80);
    *((_DWORD *)a3 + 3) = (_DWORD)v11;
  }
  ExReleasePushLockSharedEx(&qword_1C0256460, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
