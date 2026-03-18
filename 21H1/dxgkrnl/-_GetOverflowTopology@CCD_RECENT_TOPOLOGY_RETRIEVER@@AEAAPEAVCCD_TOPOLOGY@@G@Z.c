/*
 * XREFs of ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C00E2F04
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00E3080 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00E8F7C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

struct CCD_TOPOLOGY *__fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_GetOverflowTopology(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        unsigned __int16 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int16 v4; // ax
  char *v6; // rbx

  v2 = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v3 )
    v4 = *(_WORD *)(v3 + 22);
  else
    v4 = 0;
  if ( a2 <= v4 )
    return *(struct CCD_TOPOLOGY **)this;
  v6 = (char *)this + 80;
  if ( (unsigned __int16)(a2 + 16) <= CCD_TOPOLOGY::Reserve(
                                        (CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)this + 80),
                                        a2 + 16) )
    return (struct CCD_TOPOLOGY *)v6;
  return (struct CCD_TOPOLOGY *)v2;
}
