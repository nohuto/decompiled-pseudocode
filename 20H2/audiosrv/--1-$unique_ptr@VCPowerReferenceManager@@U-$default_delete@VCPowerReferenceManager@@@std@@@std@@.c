/*
 * XREFs of ??1?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAA@XZ @ 0x18006930C
 * Callers:
 *     _dynamic_atexit_destructor_for__g_powerReferenceManager__ @ 0x18007CDD0 (_dynamic_atexit_destructor_for__g_powerReferenceManager__.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800B7C08 (--1CPowerReferenceManager@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CPowerReferenceManager>::~unique_ptr<CPowerReferenceManager>(
        CPowerReferenceManager **a1)
{
  CPowerReferenceManager *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CPowerReferenceManager::~CPowerReferenceManager(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x198);
  }
}
