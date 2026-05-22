/*
 * XREFs of ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1801790F0
 * Callers:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x18017904C (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x18017970C (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x180179750 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

__int64 __fastcall Edges::FindEdgeWithInteraction(Edges *this, const unsigned __int16 *a2, int a3)
{
  int i; // ebx
  __int64 v7; // rcx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 && a2 && *a2 )
  {
    for ( i = 0; i < (int)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 7); ++i )
    {
      if ( Edge::IsEdge((Edge *)(*(_QWORD *)this + ((__int64)i << 7)), a2) )
      {
        v7 = ((__int64)i << 7) + *(_QWORD *)this;
        if ( (!*(_DWORD *)(v7 + 64) || *(_DWORD *)(v7 + 64) != a3) && !(unsigned __int8)Edge::IsClientPresent(v7, 1LL) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            641LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
            v8);
          __debugbreak();
        }
        return (unsigned int)i;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
