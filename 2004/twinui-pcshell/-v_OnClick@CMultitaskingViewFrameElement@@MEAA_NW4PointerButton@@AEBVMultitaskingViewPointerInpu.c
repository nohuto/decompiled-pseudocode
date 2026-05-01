/*
 * XREFs of ?v_OnClick@CMultitaskingViewFrameElement@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803AC850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?v_OnClick@CMultitaskingViewElementBase@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803A5110 (-v_OnClick@CMultitaskingViewElementBase@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInput.c)
 */

char __fastcall CMultitaskingViewFrameElement::v_OnClick(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = *a3;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 240) + 24LL))(a1 + 240, &v6) )
    return CMultitaskingViewElementBase::v_OnClick(a1, a2);
  else
    return 1;
}
