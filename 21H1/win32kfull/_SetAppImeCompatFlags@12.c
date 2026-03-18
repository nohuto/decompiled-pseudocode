/*
 * XREFs of _SetAppImeCompatFlags@12 @ 0x7C7C6
 * Callers:
 *     _SetAppCompatFlags@4 @ 0x7C302 (_SetAppCompatFlags@4.c)
 *     _zzzInitTask@48 @ 0x142324 (_zzzInitTask@48.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall SetAppImeCompatFlags(int a1, const UNICODE_STRING *a2, int a3)
{
  int v5; // esi
  int result; // eax
  int v7; // edi
  const UNICODE_STRING *v8; // ecx
  PWSTR Buffer; // [esp-14h] [ebp-E4h]
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-C4h] BYREF
  const UNICODE_STRING *v11; // [esp+14h] [ebp-BCh]
  PCUNICODE_STRING String1; // [esp+18h] [ebp-B8h]
  int v13; // [esp+1Ch] [ebp-B4h]
  DWORD DefaultLocaleId; // [esp+20h] [ebp-B0h] BYREF
  int v15; // [esp+24h] [ebp-ACh]
  ULONG Value; // [esp+28h] [ebp-A8h] BYREF
  WCHAR SourceString[80]; // [esp+2Ch] [ebp-A4h] BYREF

  Buffer = a2->Buffer;
  Value = 0;
  DefaultLocaleId = 0;
  v15 = 0;
  String1 = 0;
  v13 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  if ( FastGetProfileStringW(0, 30, Buffer, 0, SourceString, 80, 0) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( ((DefaultLocaleId & 0x3FF) == 0x12 || (DefaultLocaleId & 0x3FF) == 0x11) && *(_WORD *)(a1 + 340) <= 0x30Au )
    *(_DWORD *)(*(_DWORD *)(a1 + 232) + 420) = Value;
  else
    *(_DWORD *)(*(_DWORD *)(a1 + 232) + 420) = Value & 0xC00000;
  if ( !WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey )
    return 0;
  String1 = a2;
  if ( a3 )
    v13 = a3;
  v5 = 0;
  result = 0;
  do
  {
    if ( result )
      break;
    v7 = 0;
    if ( (int)WPP_MAIN_CB.Queue.ListEntry.Blink > 0 )
    {
      v8 = *(&String1 + v5);
      v11 = v8;
      while ( RtlCompareUnicodeString(v8, (PCUNICODE_STRING)(WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey + 8 * v7), 1u) )
      {
        v8 = v11;
        if ( ++v7 >= (int)WPP_MAIN_CB.Queue.ListEntry.Blink )
        {
          result = v15;
          goto LABEL_16;
        }
      }
      result = 1;
      v15 = 1;
    }
LABEL_16:
    ++v5;
  }
  while ( v5 < (a3 != 0) + 1 );
  return result;
}
