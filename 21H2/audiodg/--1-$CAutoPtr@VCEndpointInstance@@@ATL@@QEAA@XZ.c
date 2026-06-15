/*
 * XREFs of ??1?$CAutoPtr@VCEndpointInstance@@@ATL@@QEAA@XZ @ 0x14004A440
 * Callers:
 *     _CEndpointInstance::CreateApoEndpointInstance_::_1_::dtor$0 @ 0x14004A6B4 (_CEndpointInstance--CreateApoEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140047FCC (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 */

CEndpointInstance *__fastcall ATL::CAutoPtr<CEndpointInstance>::~CAutoPtr<CEndpointInstance>(CEndpointInstance **a1)
{
  CEndpointInstance *v2; // rcx
  CEndpointInstance *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CEndpointInstance::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
