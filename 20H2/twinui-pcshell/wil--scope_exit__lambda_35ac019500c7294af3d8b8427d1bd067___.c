/*
 * XREFs of wil::scope_exit__lambda_35ac019500c7294af3d8b8427d1bd067___ @ 0x1800D4A5C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800DA080 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__lambda_35ac019500c7294af3d8b8427d1bd067___(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 result; // rax

  v2 = *a2;
  *(_BYTE *)(a1 + 16) = 1;
  result = a1;
  *(_OWORD *)a1 = v2;
  return result;
}
