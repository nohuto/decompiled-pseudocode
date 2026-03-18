/*
 * XREFs of ?ProcessSetIsCursorEnabled@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED@@@Z @ 0x18018BF6C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetIsCursorEnabled(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED *a3)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 442) = 2 - (*((_BYTE *)a3 + 8) != 0);
  return result;
}
