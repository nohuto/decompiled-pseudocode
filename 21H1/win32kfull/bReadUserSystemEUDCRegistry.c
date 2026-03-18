/*
 * XREFs of bReadUserSystemEUDCRegistry @ 0xDB9B6
 * Callers:
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 * Callees:
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     GetUserEUDCRegistryPath @ 0xEB4DE (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0xEBC78 (bNotIsKeySymbolicLink.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1F8DC4 (bWriteUserSystemEUDCRegistry.c)
 */

PCWSTR __thiscall bReadUserSystemEUDCRegistry(wchar_t *this)
{
  WCHAR *v1; // edi
  WCHAR *v2; // esi
  PCWSTR v3; // ecx
  USHORT Length; // ax
  wchar_t *v6; // eax
  HANDLE Handle; // [esp+10h] [ebp-20h] BYREF
  HANDLE v8; // [esp+14h] [ebp-1Ch] BYREF
  NTSTATUS UserEUDCRegistryPath; // [esp+18h] [ebp-18h]
  PCWSTR Path; // [esp+1Ch] [ebp-14h] BYREF
  int v11; // [esp+20h] [ebp-10h] BYREF
  wchar_t *Dst; // [esp+24h] [ebp-Ch]
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-8h] BYREF

  Dst = this;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v11, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  v1 = (WCHAR *)v11;
  v2 = (WCHAR *)Path;
  if ( !v11 || !Path )
  {
    Path = 0;
    goto LABEL_12;
  }
  Handle = 0;
  v3 = Path;
  v8 = 0;
  *(_WORD *)v11 = 0;
  *v2 = 0;
  Path = 0;
  v11 = 0;
  *(_DWORD *)&DestinationString.Length = 17039360;
  DestinationString.Buffer = v1;
  UserEUDCRegistryPath = GetUserEUDCRegistryPath(v3);
  if ( UserEUDCRegistryPath >= 0 )
  {
    if ( bNotIsKeySymbolicLink(v2, &Handle, &v8, (int)&v11) && v11 )
    {
      SharedQueryTable.QueryRoutine = 0;
      SharedQueryTable.Flags = 292;
      SharedQueryTable.Name = L"SystemDefaultEUDCFont";
      SharedQueryTable.EntryContext = &DestinationString;
      SharedQueryTable.DefaultType = 0x1000000;
      SharedQueryTable.DefaultData = 0;
      SharedQueryTable.DefaultLength = 0;
      dword_273FDC = 0;
      dword_273FE0 = 0;
      dword_273FE4 = 0;
      UserEUDCRegistryPath = RtlQueryRegistryValues(0, v2, &SharedQueryTable, 0, 0);
    }
    else
    {
      UserEUDCRegistryPath = -1073741824;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v8 )
    ZwClose(v8);
  if ( UserEUDCRegistryPath >= 0 && (Length = DestinationString.Length) != 0 )
  {
    if ( DestinationString.Length == DestinationString.MaximumLength )
      goto LABEL_12;
  }
  else
  {
    if ( UserEUDCRegistryPath != -1073741772 )
      goto LABEL_12;
    v6 = _wcsrchr(v2, 0x5Cu);
    v11 = (int)v6;
    if ( !v6 )
      goto LABEL_12;
    if ( __wcsicmp(v6 + 1, word_275548) )
      goto LABEL_12;
    *(_WORD *)v11 = 0;
    RtlCreateRegistryKey(0, v2);
    *(_WORD *)v11 = 92;
    RtlCreateRegistryKey(0, v2);
    if ( !bWriteUserSystemEUDCRegistry(L"EUDC.TTE", 9) )
      goto LABEL_12;
    RtlInitUnicodeString(&DestinationString, L"EUDC.TTE");
    Length = DestinationString.Length;
  }
  if ( !_wcsncpy_s(Dst, 0x104u, DestinationString.Buffer, Length) )
    Path = (PCWSTR)1;
LABEL_12:
  if ( v2 )
    Win32FreePool(v2);
  if ( v1 )
    Win32FreePool(v1);
  return Path;
}
