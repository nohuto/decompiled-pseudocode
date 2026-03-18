/*
 * XREFs of ??1CBitmapLock@@UEAA@XZ @ 0x18009290C
 * Callers:
 *     ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x1800928D0 (--_GCBitmapLock@@UEAAPEAXI@Z.c)
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x180217A5C (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapLock::~CBitmapLock(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rdx
  HANDLE LockSemaphore; // rcx
  HANDLE v4; // rcx
  __int64 v5; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CBitmapLock::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CBitmapLock::`vftable'{for `IPixelFormat'};
  this->SpinCount = (ULONG_PTR)&CBitmapLock::`vftable'{for `IWICBitmapLock'};
  *(HANDLE *)((char *)&this->LockSemaphore + *((int *)this->LockSemaphore + 1)) = &CBitmapLock::`vftable'{for `IUnknown'};
  v2 = *((int *)this->LockSemaphore + 1);
  *(_DWORD *)((char *)&this->OwningThread + v2 + 4) = v2 - 136;
  LockSemaphore = this[3].LockSemaphore;
  if ( LockSemaphore )
  {
    (*(void (__fastcall **)(HANDLE, _QWORD))(*(_QWORD *)LockSemaphore + 24LL))(
      LockSemaphore,
      LODWORD(this[3].OwningThread));
    v4 = this[3].LockSemaphore;
    if ( v4 )
    {
      (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v4 + 16LL))(v4);
      this[3].LockSemaphore = 0LL;
    }
    v5 = *(_QWORD *)&this[2].LockCount;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *(_QWORD *)&this[2].LockCount = 0LL;
    }
    if ( BYTE1(this[2].DebugInfo) )
    {
      operator delete(this[3].DebugInfo);
      this[3].DebugInfo = 0LL;
      this[3].LockCount = 0;
    }
  }
  LOBYTE(this[2].DebugInfo) = 0;
  DeleteCriticalSection(this + 1);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMILCOMBase::`vftable';
}
