/*
 * XREFs of WindowsPreallocateStringBuffer_0 @ 0x18003CEF7
 * Callers:
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800BD804 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsPreallocateStringBuffer_0(UINT32 length, WCHAR **charBuffer, HSTRING_BUFFER *bufferHandle)
{
  return WindowsPreallocateStringBuffer(length, charBuffer, bufferHandle);
}
