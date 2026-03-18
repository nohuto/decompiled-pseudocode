/*
 * XREFs of ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C012A7E0
 * Callers:
 *     NtUserConfigureActivationObject @ 0x1C012FB20 (NtUserConfigureActivationObject.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1C0092314 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C012ABA8 (-SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_RE.c)
 */

__int64 __fastcall CActivationObjectManager::ConfigureActivationObject(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  CActivationObjectManager *v5; // rdi
  struct CActivationObject *ActivationObjectFromLuid; // rax
  unsigned int v10; // ebx

  v5 = qword_1C024A720;
  RIMLockExclusive((__int64)&qword_1C024E4D0);
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(v5, a2);
  if ( ActivationObjectFromLuid )
    v10 = CActivationObjectManager::SetState(v5, ActivationObjectFromLuid, a3, a4, a5);
  else
    v10 = -1073741275;
  qword_1C024E4D8 = 0LL;
  ExReleasePushLockExclusiveEx(&qword_1C024E4D0, 0LL);
  KeLeaveCriticalRegion();
  return v10;
}
