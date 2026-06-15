/*
 * XREFs of ??1?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAA@XZ @ 0x1800F0590
 * Callers:
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$1 @ 0x1800F0F23 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x1800F05FC (--1CAppSubmixClientContext@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CAppSubmixClientContext>::~unique_ptr<CAppSubmixClientContext>(
        CAppSubmixClientContext **a1)
{
  CAppSubmixClientContext *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CAppSubmixClientContext::~CAppSubmixClientContext(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x48);
  }
}
