/*
 * XREFs of ?GetContainingGroupIdFromActivationObject@CActivationObjectManager@@AEBA?AUACTIVATION_GROUP_ID@@AEBVCActivationObject@@@Z @ 0x1C00188CC
 * Callers:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0017E48 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0017FA8 (-NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInformation@@@Z @ 0x1C001880C (-QueryActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@AEAU_tagActivationObjectInforma.c)
 *     ?SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C0132EE8 (-SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_RE.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CActivationObjectManager::GetContainingGroupIdFromActivationObject(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v4; // rax

  v3 = *(_QWORD *)(a3 + 24);
  if ( v3 )
    v4 = (_DWORD *)(v3 + 16);
  else
    v4 = &unk_1C0225CF0;
  *a2 = *v4;
  return a2;
}
