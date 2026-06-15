/*
 * XREFs of ??0?$CComQIPtr@UIMMDeviceEnumeratorInternal@@$1?_GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1800FFFF4
 * Callers:
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18010382C (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742>::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_5f9fa1a4_1a67_4d01_b5ab_539280e49742, a1);
  return a1;
}
