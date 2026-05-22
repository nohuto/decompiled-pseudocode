/*
 * XREFs of ?UpdateContactState@MagnifierRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18017E36C
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D6B0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18017DE50 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_18017DE50.c)
 *     ?TimeFromPerfCount@MagnifierRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18017E318 (-TimeFromPerfCount@MagnifierRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$duratio.c)
 */

void __fastcall MagnifierRecognizer::UpdateContactState(
        MagnifierRecognizer *this,
        const struct PointerInputInfo *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v7; // r12d
  __int64 **v8; // r13
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rax
  unsigned __int64 v12; // r8
  __int64 *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // rcx
  __int128 v18; // xmm1
  __int64 *v19; // rbx
  unsigned int v20; // ecx
  __int64 *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h] BYREF
  __int128 v25; // [rsp+40h] [rbp-28h]
  __int128 v26; // [rsp+50h] [rbp-18h]
  unsigned int v27; // [rsp+B0h] [rbp+48h] BYREF
  int *v28; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+60h] BYREF

  v4 = 0;
  *((_DWORD *)this + 1) = 0;
  v7 = 0;
  if ( *((_DWORD *)a2 + 53) )
  {
    do
    {
      if ( (*((_BYTE *)a2 + 144 * v7 + 228) & 4) != 0 )
      {
        ++*((_DWORD *)this + 1);
        v8 = (__int64 **)((char *)this + 16);
        v9 = (__int64 *)*((_QWORD *)this + 2);
        v10 = *((_DWORD *)a2 + 36 * v7 + 55);
        v11 = (__int64 *)v9[1];
        if ( *((_BYTE *)v11 + 25) )
          goto LABEL_10;
        do
        {
          if ( *((_DWORD *)v11 + 8) >= v10 )
          {
            v9 = v11;
            v11 = (__int64 *)*v11;
          }
          else
          {
            v11 = (__int64 *)v11[2];
          }
        }
        while ( !*((_BYTE *)v11 + 25) );
        if ( v9 == *v8 || v10 < *((_DWORD *)v9 + 8) )
LABEL_10:
          v9 = *v8;
        if ( v9 == *v8 )
        {
          v12 = *((_QWORD *)a2 + 2);
          *((_QWORD *)&v26 + 1) = 0LL;
          *((_QWORD *)&v25 + 1) = 0LL;
          *(_QWORD *)&v25 = *((_QWORD *)a2 + 18 * v7 + 34);
          v13 = MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v29, v12);
          v14 = *((_DWORD *)a2 + 36 * v7 + 55);
          v27 = v14;
          v15 = *v13;
          v16 = *v8;
          *(_QWORD *)&v26 = v15;
          v17 = (__int64 *)v16[1];
          if ( *((_BYTE *)v17 + 25) )
            goto LABEL_19;
          do
          {
            if ( *((_DWORD *)v17 + 8) >= v14 )
            {
              v16 = v17;
              v17 = (__int64 *)*v17;
            }
            else
            {
              v17 = (__int64 *)v17[2];
            }
          }
          while ( !*((_BYTE *)v17 + 25) );
          if ( v16 == *v8 || v14 < *((_DWORD *)v16 + 8) )
          {
LABEL_19:
            v28 = (int *)&v27;
            v16 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                                (__int64 *)this + 2,
                                &v30,
                                v16,
                                a4,
                                &v28);
          }
          v18 = v26;
          *(_OWORD *)(v16 + 5) = v25;
          *(_OWORD *)(v16 + 7) = v18;
        }
        v19 = *v8;
        v20 = *((_DWORD *)a2 + 36 * v7 + 55);
        v27 = v20;
        v21 = (__int64 *)v19[1];
        if ( *((_BYTE *)v21 + 25) )
          goto LABEL_28;
        do
        {
          if ( *((_DWORD *)v21 + 8) >= v20 )
          {
            v19 = v21;
            v21 = (__int64 *)*v21;
          }
          else
          {
            v21 = (__int64 *)v21[2];
          }
        }
        while ( !*((_BYTE *)v21 + 25) );
        if ( v19 == *v8 || v20 < *((_DWORD *)v19 + 8) )
        {
LABEL_28:
          v28 = (int *)&v27;
          v19 = (__int64 *)*std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                              (__int64 *)this + 2,
                              &v23,
                              v19,
                              a4,
                              &v28);
        }
        *((_DWORD *)v19 + 12) = *((_DWORD *)a2 + 36 * v7 + 68);
        *((_DWORD *)v19 + 13) = *((_DWORD *)a2 + 36 * v7 + 69);
        v19[8] = *MagnifierRecognizer::TimeFromPerfCount((__int64)this, &v24, *((_QWORD *)a2 + 2));
      }
      ++v7;
    }
    while ( v7 < *((_DWORD *)a2 + 53) );
    v4 = *((_DWORD *)this + 1);
  }
  v22 = *((_DWORD *)this + 2);
  if ( v22 <= v4 )
    v22 = v4;
  *((_DWORD *)this + 2) = v22;
}
