/*
 * XREFs of bWriteUserSystemEUDCRegistry @ 0x1C029906C
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x1C0125544 (bReadUserSystemEUDCRegistry.c)
 *     GreEudcLoadLinkW @ 0x1C02985A0 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02988B0 (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00D8F4C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     bNotIsKeySymbolicLink @ 0x1C0125670 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C012571C (GetUserEUDCRegistryPath.c)
 */

__int64 __fastcall bWriteUserSystemEUDCRegistry(PVOID ValueData, unsigned __int16 a2)
{
  int v2; // ebp
  const WCHAR *v4; // rbx
  WCHAR *v5; // rcx
  int UserEUDCRegistryPath; // edi
  unsigned int v7; // esi
  HANDLE v9; // [rsp+30h] [rbp-28h] BYREF
  PCWSTR Path; // [rsp+70h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  v4 = Path;
  if ( !Path )
    goto LABEL_12;
  Handle = 0LL;
  v5 = (WCHAR *)Path;
  v9 = 0LL;
  LODWORD(Path) = 0;
  UserEUDCRegistryPath = GetUserEUDCRegistryPath(v5);
  v7 = 1;
  if ( UserEUDCRegistryPath >= 0 )
  {
    if ( bNotIsKeySymbolicLink(v4, &Handle, &v9) && (_DWORD)Path )
      UserEUDCRegistryPath = RtlWriteRegistryValue(0, v4, L"SystemDefaultEUDCFont", 1u, ValueData, 2 * v2);
    else
      UserEUDCRegistryPath = -1073741824;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ZwClose(v9);
  if ( UserEUDCRegistryPath < 0 )
LABEL_12:
    v7 = 0;
  if ( v4 )
    Win32FreePool(v4);
  return v7;
}
