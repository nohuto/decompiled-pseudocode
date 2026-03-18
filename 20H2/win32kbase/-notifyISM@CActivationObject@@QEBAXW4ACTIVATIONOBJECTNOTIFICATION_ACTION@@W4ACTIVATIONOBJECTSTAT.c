/*
 * XREFs of ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0091B9C
 * Callers:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0091868 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C00919C8 (-NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C0091A34 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 *     ?EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ @ 0x1C00B6C34 (-EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C012AA2C (-SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActiv.c)
 *     ?SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C012ABA8 (-SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_RE.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C002DB04 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ApiSetEditionConvertUserToPseudoWindow @ 0x1C0091C5C (ApiSetEditionConvertUserToPseudoWindow.c)
 */

__int64 __fastcall CActivationObject::notifyISM(__int64 a1, int a2)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+80h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( !a2 )
    ApiSetEditionConvertUserToPseudoWindow(*(_QWORD *)(a1 + 88), &v5);
  PsGetProcessId(*(PEPROCESS *)(a1 + 48));
  PsGetThreadId(*(PETHREAD *)(a1 + 56));
  return InputExtensibilityCallout::CoreMsgSendMessage(v3, 11);
}
