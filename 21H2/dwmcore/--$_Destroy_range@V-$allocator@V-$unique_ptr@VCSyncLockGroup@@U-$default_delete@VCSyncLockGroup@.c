/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@0@@Z @ 0x1801BF8E8
 * Callers:
 *     ?_Tidy@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180100524 (-_Tidy@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@V-.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@0@@Z @ 0x1801BFA88 (--$_Uninitialized_move@PEAV-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@2@_K1@Z @ 0x1801BFF64 (-_Change_array@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801941BC (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CSyncLockGroup>>>(void ***a1, void ***a2)
{
  void ***v3; // rbx
  void **v4; // rdi
  void **v5; // r14
  void **v6; // rcx
  __int64 v7; // r8

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = v4 + 2;
        *v4 = &CSyncLockGroup::`vftable';
        v6 = (void **)v4[2];
        v7 = ((_BYTE *)v4[3] - (_BYTE *)v6) >> 3;
        if ( v7 )
        {
          detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)v4 + 2,
            0LL,
            v7);
          v6 = (void **)*v5;
        }
        *v5 = 0LL;
        if ( v6 == v4 + 5 )
          v6 = 0LL;
        DefaultHeap::Free(v6);
        operator delete(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
