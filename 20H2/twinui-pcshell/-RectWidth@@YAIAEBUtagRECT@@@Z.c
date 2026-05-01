/*
 * XREFs of ?RectWidth@@YAIAEBUtagRECT@@@Z @ 0x18008A520
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800DA080 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RectWidth(const struct tagRECT *a1)
{
  return (unsigned int)(a1->right - a1->left);
}
