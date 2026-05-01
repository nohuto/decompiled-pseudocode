/*
 * XREFs of _lambda_35ac019500c7294af3d8b8427d1bd067_::_lambda_35ac019500c7294af3d8b8427d1bd067_ @ 0x1800C6A54
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_InitCoro$1 @ 0x1800C85A8 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActivationTimestamp.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800D8810 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_35ac019500c7294af3d8b8427d1bd067_::_lambda_35ac019500c7294af3d8b8427d1bd067_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
