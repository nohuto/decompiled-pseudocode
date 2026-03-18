/*
 * XREFs of ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x1800D009C
 * Callers:
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800B4BB0 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ??1?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAA@XZ @ 0x1800FE50C (--1-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ?pop_back@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXXZ @ 0x1800D012C (-pop_back@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@QEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<CMegaRect>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  while ( a1[4] )
    std::deque<CMegaRect>::pop_back(a1);
  v2 = a1[2];
  while ( v2 )
  {
    --v2;
    v3 = *(void **)(a1[1] + 8 * v2);
    if ( v3 )
      operator delete(v3, 0x20uLL);
  }
  v4 = (void *)a1[1];
  if ( v4 )
  {
    v5 = 8LL * a1[2];
    v6 = v5;
    v7 = v4;
    if ( v5 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v7, &v6);
      v5 = v6;
      v4 = v7;
    }
    operator delete(v4, v5);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
}
