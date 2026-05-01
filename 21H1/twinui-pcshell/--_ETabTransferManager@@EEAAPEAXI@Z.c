/*
 * XREFs of ??_ETabTransferManager@@EEAAPEAXI@Z @ 0x18026CD40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabTransferManager@@EEAA@XZ @ 0x18026BD8C (--1TabTransferManager@@EEAA@XZ.c)
 */

TabTransferManager *__fastcall TabTransferManager::`vector deleting destructor'(TabTransferManager *this, char a2)
{
  TabTransferManager::~TabTransferManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
