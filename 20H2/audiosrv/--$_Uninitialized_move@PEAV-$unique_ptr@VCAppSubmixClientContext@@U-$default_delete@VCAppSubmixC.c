/*
 * XREFs of ??$_Uninitialized_move@PEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800F0274
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800EFF68 (--$_Emplace_reallocate@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClie.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800EFDB4 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSu.c)
 */

CAppSubmixClientContext **__fastcall std::_Uninitialized_move<std::unique_ptr<CAppSubmixClientContext> *,std::unique_ptr<CAppSubmixClientContext> *,std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
        unsigned __int64 a1,
        unsigned __int64 a2,
        CAppSubmixClientContext **a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  CAppSubmixClientContext *v7; // rcx

  v4 = 0LL;
  v5 = (a2 - a1 + 7) >> 3;
  if ( a1 > a2 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = a1 - (_QWORD)a3;
    do
    {
      v7 = *(CAppSubmixClientContext **)((char *)a3 + v6);
      ++v4;
      *(CAppSubmixClientContext **)((char *)a3 + v6) = 0LL;
      *a3++ = v7;
    }
    while ( v4 != v5 );
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(a3, a3);
  return a3;
}
