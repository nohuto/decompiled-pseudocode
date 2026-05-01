/*
 * XREFs of ??_GCGlobals@ApplicationViewManagement@@UEAAPEAXI@Z @ 0x18018E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CGlobals@ApplicationViewManagement@@UEAA@XZ @ 0x18018DE5C (--1CGlobals@ApplicationViewManagement@@UEAA@XZ.c)
 */

ApplicationViewManagement::CGlobals *__fastcall ApplicationViewManagement::CGlobals::`scalar deleting destructor'(
        ApplicationViewManagement::CGlobals *this,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  ApplicationViewManagement::CGlobals::~CGlobals(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
