/*
 * XREFs of _EditionInitSystemCharsetInfoForLayout@8 @ 0xE8EB0
 * Callers:
 *     <none>
 * Callees:
 *     _xxxClientGetCharsetInfo@8 @ 0xE8F48 (_xxxClientGetCharsetInfo@8.c)
 */

int __stdcall EditionInitSystemCharsetInfoForLayout(int a1, int a2)
{
  DWORD DefaultLocaleId; // [esp+8h] [ebp-10h] BYREF
  ULONG Value; // [esp+Ch] [ebp-Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+10h] [ebp-8h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  Value = 0;
  if ( !gSystemFS )
  {
    DefaultLocaleId = 0;
    if ( ZwQueryDefaultLocale(0, &DefaultLocaleId) >= 0 && xxxClientGetCharsetInfo(DefaultLocaleId, a2) )
    {
      gSystemFS = *(_DWORD *)(a2 + 24);
      gSystemCPCharSet = *(_BYTE *)a2;
    }
    else
    {
      gSystemFS = 0xFFFF;
      gSystemCPCharSet = 0;
    }
  }
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 8));
  RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
  return xxxClientGetCharsetInfo(Value, a2);
}
