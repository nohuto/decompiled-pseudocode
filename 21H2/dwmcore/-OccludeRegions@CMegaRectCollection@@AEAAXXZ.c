/*
 * XREFs of ?OccludeRegions@CMegaRectCollection@@AEAAXXZ @ 0x180082128
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800B57A0 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ??C?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAVCMegaRect@@XZ @ 0x180103CF4 (--C-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@VCMegaRect@@@std@@@std@@@std@@QEBAPEAV.c)
 */

void __fastcall CMegaRectCollection::OccludeRegions(CMegaRectCollection *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 *****v3; // r14
  __int64 v4; // rdi
  __int64 ****v6; // rax
  unsigned int v7; // r12d
  __int64 ***v8; // rax
  __int64 *v9; // rsi
  __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v3 = *(__int64 ******)this;
  v4 = v1;
  v15[1] = 0LL;
  v16 = v1;
  v15[0] = v3;
  while ( v4 != v1 + *((_QWORD *)this + 4) )
  {
    if ( v3 )
      v6 = *v3;
    else
      v6 = 0LL;
    if ( !v6[1][v4 & ((unsigned __int64)v6[2] - 1)][1] )
      goto LABEL_14;
    v7 = 0;
    v8 = 0LL;
    if ( v3 )
    {
      if ( !*v3 )
      {
        v10 = v4 + 1;
        goto LABEL_28;
      }
      v8 = **v3;
    }
    v9 = 0LL;
    v10 = v4 + 1;
    if ( !v8 )
      goto LABEL_12;
    if ( *v8 )
    {
      v9 = **v8;
      goto LABEL_12;
    }
LABEL_28:
    v9 = 0LL;
LABEL_12:
    while ( 1 )
    {
      v1 = *((_QWORD *)this + 3);
      v11 = v2 | 1;
      if ( v10 == v1 + *((_QWORD *)this + 4) || v7 >= CCommonRegistryData::MegaRectSearchCount )
        break;
      v2 = v11 & 0xFFFFFFFE;
      if ( v9 )
        v12 = *v9;
      else
        v12 = 0LL;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8 * (v10 & (*(_QWORD *)(v12 + 16) - 1LL))) + 8LL) )
      {
        v13 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<CMegaRect>>>::operator->(v15);
        if ( v9 )
          v14 = *v9;
        else
          v14 = 0LL;
        CRegion::Subtract(
          *(CRegion **)(v13 + 8),
          *(const struct CRegion **)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * (v10 & (*(_QWORD *)(v14 + 16) - 1LL))) + 8LL));
      }
      ++v10;
      ++v7;
    }
    v2 = v11 & 0xFFFFFFFE;
LABEL_14:
    v16 = ++v4;
  }
}
