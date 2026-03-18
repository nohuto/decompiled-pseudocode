/*
 * XREFs of ?OccludeRegions@CMegaRectCollection@@AEAAXXZ @ 0x180046FC4
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x180071D8C (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800473E8 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??C?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAVCMegaRect@@XZ @ 0x1800EA7D4 (--C-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAV.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CMegaRectCollection::OccludeRegions(CMegaRectCollection *this)
{
  __int64 v1; // rdx
  unsigned int v2; // r15d
  __int64 *****v3; // rsi
  __int64 v4; // rbx
  __int64 ****v6; // rax
  unsigned int v7; // r12d
  __int64 ***v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbp
  int v11; // r15d
  bool v12; // al
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  _QWORD v17[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v3 = *(__int64 ******)this;
  v4 = v1;
  v17[1] = 0LL;
  v18 = v1;
  v17[0] = v3;
  while ( v4 != v1 + *((_QWORD *)this + 4) )
  {
    if ( v3 )
      v6 = *v3;
    else
      v6 = 0LL;
    if ( v6[1][v4 & ((unsigned __int64)v6[2] - 1)][1] )
    {
      v7 = 0;
      v8 = 0LL;
      if ( v3 && *v3 )
        v8 = **v3;
      v9 = 0LL;
      v10 = v4 + 1;
      if ( v8 && *v8 )
        v9 = **v8;
      while ( 1 )
      {
        v1 = *((_QWORD *)this + 3);
        v11 = v2 | 1;
        v12 = v10 != v1 + *((_QWORD *)this + 4) && v7 < CCommonRegistryData::MegaRectSearchCount;
        v2 = v11 & 0xFFFFFFFE;
        if ( !v12 )
          break;
        if ( v9 )
          v13 = *v9;
        else
          v13 = 0LL;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * (v10 & (*(_QWORD *)(v13 + 16) - 1LL))) + 8LL) )
        {
          v14 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<CMegaRect>>>::operator->(v17);
          if ( v9 )
            v15 = *v9;
          else
            v15 = 0LL;
          v16 = FastRegion::CRegion::Subtract(
                  *(FastRegion::CRegion **)(v14 + 8),
                  *(const struct CRegion **)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8
                                                                              * (v10 & (*(_QWORD *)(v15 + 16) - 1LL)))
                                           + 8LL));
          if ( v16 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v16, retaddr);
        }
        ++v10;
        ++v7;
      }
    }
    v18 = ++v4;
  }
}
