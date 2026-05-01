/*
 * XREFs of ??_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z @ 0x180229B20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$PrivilegedOperationsBase@UIPrivilegedWindowGroupingOperations@@@@UEAA@XZ @ 0x180229920 (--1-$PrivilegedOperationsBase@UIPrivilegedWindowGroupingOperations@@@@UEAA@XZ.c)
 */

CPrivilegedTabletModeOperations *__fastcall CPrivilegedTabletModeOperations::`scalar deleting destructor'(
        CPrivilegedTabletModeOperations *this,
        char a2)
{
  PrivilegedOperationsBase<IPrivilegedWindowGroupingOperations>::~PrivilegedOperationsBase<IPrivilegedWindowGroupingOperations>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
