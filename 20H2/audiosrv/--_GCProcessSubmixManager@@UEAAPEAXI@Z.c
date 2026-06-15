/*
 * XREFs of ??_GCProcessSubmixManager@@UEAAPEAXI@Z @ 0x1800F0750
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800EFDB4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSu.c)
 */

CProcessSubmixManager *__fastcall CProcessSubmixManager::`scalar deleting destructor'(
        CProcessSubmixManager *this,
        char a2)
{
  CAppSubmixClientContext **v2; // rdi

  v2 = (CAppSubmixClientContext **)*((_QWORD *)this + 7);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
      v2,
      *((CAppSubmixClientContext ***)this + 8));
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 9) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
