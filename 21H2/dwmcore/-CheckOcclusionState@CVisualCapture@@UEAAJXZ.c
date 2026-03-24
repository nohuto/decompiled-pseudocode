/*
 * XREFs of ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x1801F1C54
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F6B50 (-CheckOcclusionState@CVisualCapture@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801F1C0C (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::CheckOcclusionState(CVisualCapture *this)
{
  __int64 result; // rax

  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 1984));
  result = 0LL;
  if ( !*((_BYTE *)this - 212) )
  {
    if ( *((_BYTE *)this - 55) )
      return 142213121LL;
  }
  return result;
}
