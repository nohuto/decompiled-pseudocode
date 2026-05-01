/*
 * XREFs of ??1CCrashDetector@@QEAA@XZ @ 0x1801748D4
 * Callers:
 *     ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x180174BA0 (--_ECApplicationFrameService@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x1802CA444 (--1-$unique_ptr@VCCrashDetector@@U-$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ.c)
 *     _lambda_1cf7f7afac08fe2873a8a6306d8dbd84_::operator() @ 0x1802CA4E8 (_lambda_1cf7f7afac08fe2873a8a6306d8dbd84_--operator().c)
 *     _lambda_1c848fc40f8d66460ef5049a4e343f17_::operator() @ 0x1802DB294 (_lambda_1c848fc40f8d66460ef5049a4e343f17_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x1801773F4 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 */

void __fastcall CCrashDetector::~CCrashDetector(CCrashDetector *this)
{
  char *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  if ( *((_QWORD *)this + 2) )
    CCrashDetector::StopMonitoring(this);
  v2 = (char *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = *(void (__fastcall ****)(_QWORD, __int64))this;
  *(_QWORD *)this = 0LL;
  if ( v3 )
    (**v3)(v3, 1LL);
}
