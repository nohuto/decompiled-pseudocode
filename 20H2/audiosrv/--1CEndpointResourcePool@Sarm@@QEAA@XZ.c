/*
 * XREFs of ??1CEndpointResourcePool@Sarm@@QEAA@XZ @ 0x1801058A0
 * Callers:
 *     _util::InterfaceMap_ISaDeviceProxy_Sarm::CEndpointResourcePool_::Add_::_1_::dtor$1 @ 0x180105F63 (_util--InterfaceMap_ISaDeviceProxy_Sarm--CEndpointResourcePool_--Add_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052730 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Sarm::CEndpointResourcePool::~CEndpointResourcePool(Sarm::CEndpointResourcePool *this)
{
  std::_Ref_count_base *v1; // rcx

  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
