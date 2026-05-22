/*
 * XREFs of ??0SystemCursorService@@QEAA@PEAVSystemCursorController@@K@Z @ 0x18013E2A4
 * Callers:
 *     ??$make_shared@VSystemCursorService@@PEAVSystemCursorController@@AEAK@std@@YA?AV?$shared_ptr@VSystemCursorService@@@0@$$QEAPEAVSystemCursorController@@AEAK@Z @ 0x18013B034 (--$make_shared@VSystemCursorService@@PEAVSystemCursorController@@AEAK@std@@YA-AV-$shared_ptr@VSy.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@1@@Z @ 0x18013E128 (--0-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor@@@std@@V-$_Uhash_compare@_KU-$hash@_K@s.c)
 */

// Hidden C++ exception states: #wind=6
SystemCursorService *__fastcall SystemCursorService::SystemCursorService(
        SystemCursorService *this,
        struct SystemCursorController *a2,
        int a3)
{
  _QWORD *v5; // rax
  int v7; // [rsp+50h] [rbp+18h] BYREF

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SystemCursorService::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = a2;
  v7 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>(
    (__int64)this + 40,
    &v7);
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = a3;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 19) = v5;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 100;
  return this;
}
