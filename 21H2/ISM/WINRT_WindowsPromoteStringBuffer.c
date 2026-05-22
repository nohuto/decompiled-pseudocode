/*
 * XREFs of WINRT_WindowsPromoteStringBuffer @ 0x18003CCA3
 * Callers:
 *     ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x1800BEAC8 (-to_hstring@hstring_builder@impl@winrt@@QEAA-AUhstring@3@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_WindowsPromoteStringBuffer(HSTRING_BUFFER bufferHandle, HSTRING *string)
{
  return WindowsPromoteStringBuffer(bufferHandle, string);
}
