/*
 * XREFs of ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x180178B2C
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180178924 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178A10 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x180178AFC (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x180179230 (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z @ 0x180179320 (-OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x180179368 (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x1801793E0 (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x180179448 (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801794D4 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179560 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801796CC (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x180179200 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

__int64 __fastcall Edges::FindEdge(Edges *this, const unsigned __int16 *a2)
{
  int i; // ebx

  if ( a2 && *a2 )
  {
    for ( i = 0; i < (int)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 7); ++i )
    {
      if ( Edge::IsEdge((Edge *)(*(_QWORD *)this + ((__int64)i << 7)), a2) )
        return (unsigned int)i;
    }
  }
  return 0xFFFFFFFFLL;
}
