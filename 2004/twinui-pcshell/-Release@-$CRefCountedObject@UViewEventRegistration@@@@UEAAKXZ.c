/*
 * XREFs of ?Release@?$CRefCountedObject@UViewEventRegistration@@@@UEAAKXZ @ 0x1802A5BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewEventRegistration@@QEAA@XZ @ 0x1802A0F60 (--1ViewEventRegistration@@QEAA@XZ.c)
 */

__int64 __fastcall CRefCountedObject<ViewEventRegistration>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 12);
  if ( !v2 && a1 )
  {
    ViewEventRegistration::~ViewEventRegistration((ViewEventRegistration *)(a1 + 2));
    operator delete((void *)a1, (const struct std::nothrow_t *)0x38);
  }
  return v2;
}
