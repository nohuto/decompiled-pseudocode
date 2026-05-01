/*
 * XREFs of ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800860C4
 * Callers:
 *     ?GetEventRegistration@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x18005A538 (-GetEventRegistration@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@P.c)
 *     ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x180295CD0 (-RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z @ 0x180298290 (-UnregisterForViewEvents@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<ViewEventRegistration>::operator=(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  std::_Ref_count_base *v4; // rcx

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  *a1 = *a2;
  v4 = (std::_Ref_count_base *)a1[1];
  a1[1] = v2;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a1;
}
