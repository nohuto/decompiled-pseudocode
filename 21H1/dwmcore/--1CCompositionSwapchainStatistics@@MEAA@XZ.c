/*
 * XREFs of ??1CCompositionSwapchainStatistics@@MEAA@XZ @ 0x18020EFC8
 * Callers:
 *     ??_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z @ 0x18020F020 (--_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSwapchainStatistics::~CCompositionSwapchainStatistics(
        CCompositionSwapchainStatistics *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CCompositionSwapchainStatistics::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompositionSwapchainStatistics::`vftable'{for `ICompositionSurfaceStatistics'};
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
