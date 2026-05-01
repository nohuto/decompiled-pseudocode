/*
 * XREFs of ?GetHeight@CRect@Geometry@@QEBAJXZ @ 0x18008A2A0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800C6310 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Geometry::CRect::GetHeight(Geometry::CRect *this)
{
  return (unsigned int)(*((_DWORD *)this + 3) - *((_DWORD *)this + 1));
}
