/*
 * XREFs of ?IsTrustedFontFilePath@@YG_NPBG@Z @ 0xDE1EE
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

bool __thiscall IsTrustedFontFilePath(const WCHAR *this)
{
  bool v2; // bl
  struct _UNICODE_STRING DestinationString; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+10h] [ebp-4h] BYREF

  v5 = *((_DWORD *)gpxsGlobals + 2);
  GreAcquireSemaphore(v5);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeStringEx(&DestinationString, this);
  v2 = RtlLookupElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 3), &DestinationString) != 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  return v2;
}
