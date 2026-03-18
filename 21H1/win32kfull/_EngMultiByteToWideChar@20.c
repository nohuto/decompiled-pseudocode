/*
 * XREFs of _EngMultiByteToWideChar@20 @ 0x1DA264
 * Callers:
 *     <none>
 * Callees:
 *     _ConvertToAndFromWideChar@24 @ 0xDFDA8 (_ConvertToAndFromWideChar@24.c)
 */

INT __stdcall EngMultiByteToWideChar(
        UINT CodePage,
        LPWSTR WideCharString,
        INT cjWideCharString,
        LPSTR MultiByteString,
        INT cjMultiByteString)
{
  return ConvertToAndFromWideChar(CodePage, WideCharString, cjWideCharString, MultiByteString, cjMultiByteString, 1);
}
