/*
 * XREFs of ??_EPWSLayoutPolicyManager@@UEAAPEAXI@Z @ 0x180225BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x180225B28 (--1PWSLayoutPolicyManager@@UEAA@XZ.c)
 */

PWSLayoutPolicyManager *__fastcall PWSLayoutPolicyManager::`vector deleting destructor'(
        PWSLayoutPolicyManager *this,
        char a2)
{
  PWSLayoutPolicyManager::~PWSLayoutPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
