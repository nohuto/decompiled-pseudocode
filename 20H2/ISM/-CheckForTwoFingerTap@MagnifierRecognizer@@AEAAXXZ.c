/*
 * XREFs of ?CheckForTwoFingerTap@MagnifierRecognizer@@AEAAXXZ @ 0x18017DB60
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D160 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800C8D28 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUContactStat.c)
 */

void __fastcall MagnifierRecognizer::CheckForTwoFingerTap(MagnifierRecognizer *this)
{
  MagnifierRecognizer *v1; // r11
  int v2; // ecx
  int v3; // ecx
  __int64 *v4; // r10
  __int64 *v5; // rcx
  _QWORD *v6; // rcx
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  if ( !*(_BYTE *)this || *((_BYTE *)this + 1) )
    return;
  v2 = *((_DWORD *)this + 1);
  if ( !v2 )
  {
    if ( *((_DWORD *)v1 + 2) == 2 )
      *((_BYTE *)v1 + 1) = 1;
    goto LABEL_17;
  }
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( *((_DWORD *)v1 + 2) != 1 )
      return;
    v6 = (_QWORD *)**((_QWORD **)v1 + 2);
    if ( 1000000LL * *((_QWORD *)v1 + 5) < v6[8] - v6[7] )
      *(_BYTE *)v1 = 0;
    if ( (int)((v6[6] - v6[5]) * (v6[6] - v6[5]) + (HIDWORD(v6[6]) - HIDWORD(v6[5])) * (HIDWORD(v6[6]) - HIDWORD(v6[5]))) < (unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 12) * *((_DWORD *)v1 + 12)) )
      return;
LABEL_17:
    *(_BYTE *)v1 = 0;
    return;
  }
  if ( v3 != 1 )
    goto LABEL_17;
  v4 = (__int64 *)*((_QWORD *)v1 + 2);
  v5 = (__int64 *)*v4;
  v7 = (__int64 *)*v4;
  while ( v5 != v4 )
  {
    if ( (int)((v5[6] - v5[5]) * (v5[6] - v5[5]) + (HIDWORD(v5[6]) - HIDWORD(v5[5])) * (HIDWORD(v5[6]) - HIDWORD(v5[5]))) >= (unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 13) * *((_DWORD *)v1 + 13)) )
      goto LABEL_17;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++(&v7);
    v5 = v7;
  }
}
