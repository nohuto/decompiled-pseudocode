/*
 * XREFs of ?bOpenKey@@YGHPBGPAPAX@Z @ 0xDF378
 * Callers:
 *     ?FinishStockFontInitInternal@@YGXPBGH@Z @ 0xDBCEC (-FinishStockFontInitInternal@@YGXPBGH@Z.c)
 *     _bInitStockFontsInternal@4 @ 0x2922C4 (_bInitStockFontsInternal@4.c)
 *     _hfontInitDefaultGuiFont@4 @ 0x2927A4 (_hfontInitDefaultGuiFont@4.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall bOpenKey(const WCHAR *a1, void **a2)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+20h] [ebp-8h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, a1);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  return ZwOpenKey(a2, 0, &ObjectAttributes) >= 0;
}
