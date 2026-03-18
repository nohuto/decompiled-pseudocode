/*
 * XREFs of ?bQueryValueKey@@YGHPBGPAXPAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0xDF440
 * Callers:
 *     _bInitStockFontsInternal@4 @ 0x2922C4 (_bInitStockFontsInternal@4.c)
 *     _InitializeDefaultFamilyFonts@0 @ 0x2926EC (_InitializeDefaultFamilyFonts@0.c)
 *     _hfontInitDefaultGuiFont@4 @ 0x2927A4 (_hfontInitDefaultGuiFont@4.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge bQueryValueKey@<eax>(
        void *a1@<edx>,
        const WCHAR *a2@<ecx>,
        PVOID KeyValueInformation,
        ULONG Length,
        struct _KEY_VALUE_PARTIAL_INFORMATION *a5,
        unsigned int a6)
{
  struct _UNICODE_STRING DestinationString; // [esp+4h] [ebp-Ch] BYREF
  ULONG ResultLength; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  return ZwQueryValueKey(a1, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &ResultLength) >= 0;
}
