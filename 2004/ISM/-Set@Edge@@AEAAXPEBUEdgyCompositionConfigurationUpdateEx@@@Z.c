/*
 * XREFs of ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801798E4
 * Callers:
 *     ??0Edge@@QEAA@PEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178760 (--0Edge@@QEAA@PEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178AA0 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18002B8A0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x180179290 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

void __fastcall Edge::Set(Edge *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
{
  __int64 v2; // rax
  const unsigned __int16 *v4; // rdx
  unsigned __int64 v6; // r8
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)a2;
  v4 = (const unsigned __int16 *)((char *)a2 + 24);
  *(_QWORD *)this = v2;
  if ( *((_QWORD *)this + 3) )
  {
    if ( !Edge::IsEdge(this, v4) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        42LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v7);
      JUMPOUT(0x180179958LL);
    }
  }
  else
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v4[v6] );
    std::wstring::assign((char *)this + 8, v4, v6);
  }
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 4);
}
