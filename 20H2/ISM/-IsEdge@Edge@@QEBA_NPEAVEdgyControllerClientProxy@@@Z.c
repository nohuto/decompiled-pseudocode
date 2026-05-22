/*
 * XREFs of ?IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z @ 0x1801791E8
 * Callers:
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179560 (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edge::IsEdge(struct EdgyControllerClientProxy **this, struct EdgyControllerClientProxy *a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
    return a2 == this[5];
  return result;
}
