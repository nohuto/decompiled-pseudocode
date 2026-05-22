/*
 * XREFs of ?Get3DFocusTarget@MPCInputRouter@@UEAAQEAUIMPCFocusTarget@@XZ @ 0x18001BAA0
 * Callers:
 *     ?GetInputSite@MPCFocusTarget@@WEA@EAAPEAVInputSite@@XZ @ 0x18004BAF0 (-GetInputSite@MPCFocusTarget@@WEA@EAAPEAVInputSite@@XZ.c)
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCInputRouter::Get3DFocusTarget(MPCInputRouter *this)
{
  return (struct IMPCFocusTarget *)*((_QWORD *)this + 3);
}
