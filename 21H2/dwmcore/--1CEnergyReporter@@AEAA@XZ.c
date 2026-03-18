/*
 * XREFs of ??1CEnergyReporter@@AEAA@XZ @ 0x1801AEAA4
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DD5DC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CEnergyReporter::~CEnergyReporter(CEnergyReporter *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)this + 9), 1);
  CloseThreadpoolWork(*((PTP_WORK *)this + 9));
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 6);
  if ( v2 )
    (**v2)(v2, 1LL);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2);
}
