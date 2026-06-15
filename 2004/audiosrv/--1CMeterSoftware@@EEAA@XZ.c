/*
 * XREFs of ??1CMeterSoftware@@EEAA@XZ @ 0x1800C35F4
 * Callers:
 *     ??_GCMeterSoftware@@EEAAPEAXI@Z @ 0x1800C38F0 (--_GCMeterSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMeterSoftware::~CMeterSoftware(struct _RTL_CRITICAL_SECTION *this)
{
  ULONG_PTR SpinCount; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMeterSoftware::`vftable';
  DeleteCriticalSection(this + 1);
  SpinCount = this->SpinCount;
  if ( SpinCount )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  CMeterControlBase::~CMeterControlBase((CMeterControlBase *)this);
}
