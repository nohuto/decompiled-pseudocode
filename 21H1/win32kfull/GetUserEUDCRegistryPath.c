/*
 * XREFs of GetUserEUDCRegistryPath @ 0xEB4DE
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0xDB9B6 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1F8DC4 (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     <none>
 */

int __thiscall GetUserEUDCRegistryPath(WCHAR *this)
{
  NTSTATUS appended; // esi
  struct _UNICODE_STRING KeyPath; // [esp+8h] [ebp-10h] BYREF
  struct _UNICODE_STRING Destination; // [esp+10h] [ebp-8h] BYREF

  *(_DWORD *)&KeyPath.Length = 0;
  KeyPath.Buffer = 0;
  *(_DWORD *)&Destination.Length = 17039360;
  Destination.Buffer = this;
  if ( RtlFormatCurrentUserKeyPath(&KeyPath) < 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\.DEFAULT");
    if ( appended < 0 )
      return appended;
    appended = RtlAppendUnicodeToString(&Destination, L"\\EUDC\\");
    if ( appended < 0 )
      return appended;
    appended = RtlAppendUnicodeToString(&Destination, word_275548);
  }
  else
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &KeyPath);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\EUDC\\");
      if ( appended >= 0 )
        appended = RtlAppendUnicodeToString(&Destination, word_275548);
    }
    RtlFreeUnicodeString(&KeyPath);
  }
  if ( appended >= 0 && Destination.Length == Destination.MaximumLength )
    return -1073741789;
  return appended;
}
