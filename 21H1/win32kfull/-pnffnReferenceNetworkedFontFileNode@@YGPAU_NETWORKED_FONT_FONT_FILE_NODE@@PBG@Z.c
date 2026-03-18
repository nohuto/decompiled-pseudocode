/*
 * XREFs of ?pnffnReferenceNetworkedFontFileNode@@YGPAU_NETWORKED_FONT_FONT_FILE_NODE@@PBG@Z @ 0x1E8FA2
 * Callers:
 *     ?ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@PAT_LARGE_INTEGER@@_N@Z @ 0x1E89E2 (-ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

struct _NETWORKED_FONT_FONT_FILE_NODE *__thiscall pnffnReferenceNetworkedFontFileNode(const WCHAR *this)
{
  struct _NETWORKED_FONT_FONT_FILE_NODE *result; // eax
  struct _UNICODE_STRING Buffer[3]; // [esp+4h] [ebp-1Ch] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  RtlInitUnicodeStringEx(&Buffer[1], this);
  result = (struct _NETWORKED_FONT_FONT_FILE_NODE *)RtlLookupElementGenericTableAvl(
                                                      *((PRTL_AVL_TABLE *)gpxsGlobals + 1),
                                                      Buffer);
  if ( result )
    ++*((_DWORD *)result + 4);
  return result;
}
