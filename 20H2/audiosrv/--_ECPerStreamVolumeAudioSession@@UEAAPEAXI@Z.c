/*
 * XREFs of ??_ECPerStreamVolumeAudioSession@@UEAAPEAXI@Z @ 0x1800054C0
 * Callers:
 *     ??_ECPerStreamVolumeAudioSession@@WCA@EAAPEAXI@Z @ 0x180074450 (--_ECPerStreamVolumeAudioSession@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioSession@@MEAA@XZ @ 0x1800064F4 (--1CAudioSession@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CPerStreamVolumeAudioSession::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  ULONG_PTR SpinCount; // rcx

  DeleteCriticalSection(this + 25);
  SpinCount = this[24].SpinCount;
  if ( SpinCount )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  CAudioSession::~CAudioSession((CAudioSession *)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x420);
  return this;
}
