/*
 * XREFs of ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0064FA8
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C005FB00 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C00629E8 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0063334 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019DD00 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C005FECC (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00658A4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C01CDE74 (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

bool __fastcall CInputDest::DoesBelongToForeground(__int64 a1, int a2)
{
  char v3; // bl
  __int64 v5; // rcx
  __int64 CompositionInputWindowUIOwner; // rax

  if ( !gpqForeground )
    return 0;
  v3 = 1;
  if ( a2 != 1 || !CInputDest::IsIndependentInputWindow((CInputDest *)a1) )
    return CInputDest::GetQueue(a1, 2LL) == gpqForeground;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v5 = *(_QWORD *)(a1 + 80);
  else
    v5 = 0LL;
  CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(v5);
  if ( !CompositionInputWindowUIOwner
    || gpqForeground != *(_QWORD *)(*(_QWORD *)(CompositionInputWindowUIOwner + 16) + 424LL) )
  {
    return 0;
  }
  return v3;
}
