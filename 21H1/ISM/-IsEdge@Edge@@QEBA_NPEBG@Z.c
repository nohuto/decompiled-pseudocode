/*
 * XREFs of ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x180179750
 * Callers:
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x18017907C (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1801790F0 (-FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179CC4 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180179DA4 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edge::IsEdge(Edge *this, const unsigned __int16 *a2)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)((char *)this + 8);
  if ( v2[3] >= 8uLL )
    v2 = (_QWORD *)*v2;
  return (unsigned int)_o__wcsicmp(v2, a2) == 0;
}
