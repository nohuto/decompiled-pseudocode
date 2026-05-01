/*
 * XREFs of WindowsDeleteStringBuffer_0 @ 0x1800917BC
 * Callers:
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1801AD924 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??1hstring_builder@impl@winrt@@QEAA@XZ @ 0x1801AE514 (--1hstring_builder@impl@winrt@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsDeleteStringBuffer_0(HSTRING_BUFFER bufferHandle)
{
  return WindowsDeleteStringBuffer(bufferHandle);
}
