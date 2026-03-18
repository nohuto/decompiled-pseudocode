/*
 * XREFs of ?FrameDirtiedByKeyframeAnimation@CTelemetryFrames@@SAX_KIPEBG@Z @ 0x18005270C
 * Callers:
 *     ?LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z @ 0x1800525F8 (-LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Emplace_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ @ 0x180052820 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_unsigned_short.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Emplace_std::pair__anonymous_namespace_::AnimationId_unsigned_int___ @ 0x18005292C (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18005E9A8 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180061B50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CTelemetryFrames::FrameDirtiedByKeyframeAnimation(__int64 a1, int a2, const unsigned __int16 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]

  *(_QWORD *)&v10 = a1;
  DWORD2(v10) = a2;
  v4 = *((_QWORD *)qword_1803D33C8 + 5) + 136LL;
  v12 = 0LL;
  v11 = v10;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Emplace_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____(
    v4,
    &v10,
    &v11);
  v5 = v10;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    if ( v6 && !*(_QWORD *)(v10 + 48) )
    {
      v8 = *((_QWORD *)qword_1803D33C8 + 5);
      std::wstring::wstring(&v11, a3);
      v9 = *(_QWORD *)std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::insert<0,0>(
                        v8 + 160,
                        &v10,
                        &v11)
         + 32LL;
      std::wstring::_Tidy_deallocate(&v11);
      *(_QWORD *)(v5 + 48) = v9;
    }
  }
  v7 = *(_OWORD *)(v5 + 32);
  LODWORD(v12) = 0;
  v11 = v7;
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Emplace_std::pair__anonymous_namespace_::AnimationId_unsigned_int___(
    &unk_1803D3298,
    &v10,
    &v11);
  ++*(_DWORD *)(v10 + 48);
}
