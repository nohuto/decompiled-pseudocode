/*
 * XREFs of __Platform_WindowsPromoteStringBuffer @ 0x180091274
 * Callers:
 *     ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x18018EEA8 (-to_hstring@hstring_builder@impl@winrt@@QEAA-AUhstring@3@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall _Platform_WindowsPromoteStringBuffer(HSTRING_BUFFER bufferHandle, HSTRING *string)
{
  return WindowsPromoteStringBuffer(bufferHandle, string);
}
