/*
 * XREFs of WindowsDuplicateString_0 @ 0x18008E13A
 * Callers:
 *     ?duplicate_string@impl@winrt@@YAPEAXPEAX@Z @ 0x1801C834C (-duplicate_string@impl@winrt@@YAPEAXPEAX@Z.c)
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x1802CA200 (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WindowsDuplicateString_0(HSTRING string, HSTRING *newString)
{
  return WindowsDuplicateString(string, newString);
}
