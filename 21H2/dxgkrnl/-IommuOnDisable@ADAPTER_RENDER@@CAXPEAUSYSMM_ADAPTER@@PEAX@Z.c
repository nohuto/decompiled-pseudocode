/*
 * XREFs of ?IommuOnDisable@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x1C02C4010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::IommuOnDisable(struct SYSMM_ADAPTER *a1, _QWORD *a2)
{
  if ( a2[82] )
    (*(void (**)(void))(*(_QWORD *)(a2[81] + 8LL) + 1232LL))();
}
