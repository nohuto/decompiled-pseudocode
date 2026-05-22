/*
 * XREFs of ??$_Uninitialized_move@PEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@0@@Z @ 0x180155F8C
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180151A08 (--$_Emplace_reallocate@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@0@@Z @ 0x18015186C (--$_Destroy_range@V-$allocator@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest> *,std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rcx

  v4 = 0LL;
  v5 = (a2 - a1 + 7) >> 3;
  if ( a1 > a2 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = a1 - (_QWORD)a3;
    do
    {
      v7 = *(_QWORD *)((char *)a3 + v6);
      ++v4;
      *(_QWORD *)((char *)a3 + v6) = 0LL;
      *a3++ = v7;
    }
    while ( v4 != v5 );
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>(a3, a3);
  return a3;
}
