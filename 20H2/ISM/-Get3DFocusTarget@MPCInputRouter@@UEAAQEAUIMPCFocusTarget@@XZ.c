/*
 * XREFs of ?Get3DFocusTarget@MPCInputRouter@@UEAAQEAUIMPCFocusTarget@@XZ @ 0x18001BE00
 * Callers:
 *     ?GetInputSite@MPCFocusTarget@@WEA@EAAPEAVInputSite@@XZ @ 0x18004AED0 (-GetInputSite@MPCFocusTarget@@WEA@EAAPEAVInputSite@@XZ.c)
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCInputRouter::Get3DFocusTarget(MPCInputRouter *this)
{
  return (struct IMPCFocusTarget *)*((_QWORD *)this + 3);
}
