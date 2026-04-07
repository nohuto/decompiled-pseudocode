/*
 * XREFs of ??_GCCompoundBitmapLock@@UEAAPEAXI@Z @ 0x1800506B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompoundBitmapLock@@UEAA@XZ @ 0x1800506F8 (--1CCompoundBitmapLock@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CCompoundBitmapLock *__fastcall CCompoundBitmapLock::`scalar deleting destructor'(CCompoundBitmapLock *this, char a2)
{
  CCompoundBitmapLock::~CCompoundBitmapLock(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CCompoundBitmapLock *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
