/*
 * XREFs of ?notifyISM@CActivationObject@@QEBAXW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@AEBU_LUID@@2AEBUACTIVATION_GROUP_ID@@@Z @ 0x1C0027EFC
 * Callers:
 *     ?DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0027BC8 (-DestroyActivationObjectInternal@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1C0027D28 (-NotifyActivationObjectStateOnCleanup@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z.c)
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUID@@@Z @ 0x1C0027D94 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAX_KAEAU_LUI.c)
 *     ?EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ @ 0x1C0057220 (-EnumerateAllGroups@CActivationObjectManager@@QEAAXXZ.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C012CD7C (-SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActiv.c)
 *     ?SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_STATE@@2@Z @ 0x1C012CEF8 (-SetState@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_RE.c)
 * Callees:
 *     ApiSetEditionConvertUserToPseudoWindow @ 0x1C0027FBC (ApiSetEditionConvertUserToPseudoWindow.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall CActivationObject::notifyISM(__int64 a1, int a2, int a3, __int64 *a4, __int64 *a5, int *a6)
{
  __int64 v6; // rax
  unsigned int ProcessId; // eax
  struct _KTHREAD *v12; // rcx
  __int64 v13; // rcx
  _DWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int64 v18; // [rsp+38h] [rbp-28h]
  __int64 v19; // [rsp+40h] [rbp-20h]
  int v20; // [rsp+48h] [rbp-18h]
  unsigned int v21; // [rsp+4Ch] [rbp-14h]
  unsigned int ThreadId; // [rsp+50h] [rbp-10h]
  int v23; // [rsp+54h] [rbp-Ch]
  __int64 v24; // [rsp+80h] [rbp+20h] BYREF

  v6 = 0LL;
  v24 = 0LL;
  if ( !a2 )
  {
    ApiSetEditionConvertUserToPseudoWindow(*(_QWORD *)(a1 + 88), &v24);
    v6 = v24;
  }
  v16 = v6;
  v17 = *(_QWORD *)(a1 + 72);
  v18 = *a4;
  v15[0] = a2;
  v15[1] = a3;
  v19 = *a5;
  v20 = *a6;
  ProcessId = (unsigned int)PsGetProcessId(*(PEPROCESS *)(a1 + 48));
  v12 = *(struct _KTHREAD **)(a1 + 56);
  v21 = ProcessId;
  ThreadId = (unsigned int)PsGetThreadId(v12);
  v23 = 0;
  return ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
           v13,
           11LL,
           v15,
           56LL);
}
