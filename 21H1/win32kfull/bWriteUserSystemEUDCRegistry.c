/*
 * XREFs of bWriteUserSystemEUDCRegistry @ 0x1F8DC4
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0xDB9B6 (bReadUserSystemEUDCRegistry.c)
 *     GreEudcLoadLinkW @ 0x1F7AA9 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1F7CCC (GreEudcUnloadLinkW.c)
 * Callees:
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     GetUserEUDCRegistryPath @ 0xEB4DE (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0xEBC78 (bNotIsKeySymbolicLink.c)
 */

int __fastcall bWriteUserSystemEUDCRegistry(void *a1, unsigned __int16 a2)
{
  WCHAR *v2; // esi
  WCHAR *v3; // ecx
  int UserEUDCRegistryPath; // edi
  int v5; // ebx
  PCWSTR Path; // [esp+10h] [ebp-10h] BYREF
  HANDLE v9; // [esp+14h] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+18h] [ebp-8h] BYREF
  unsigned __int16 v11; // [esp+1Eh] [ebp-2h]

  v11 = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  v2 = (WCHAR *)Path;
  if ( !Path )
    goto LABEL_12;
  Handle = 0;
  v3 = (WCHAR *)Path;
  v9 = 0;
  Path = 0;
  UserEUDCRegistryPath = GetUserEUDCRegistryPath(v3);
  v5 = 1;
  if ( UserEUDCRegistryPath >= 0 )
  {
    if ( bNotIsKeySymbolicLink(v2, &Handle, &v9, (int)&Path) && Path )
      UserEUDCRegistryPath = RtlWriteRegistryValue(0, v2, L"SystemDefaultEUDCFont", 1u, a1, 2 * v11);
    else
      UserEUDCRegistryPath = -1073741824;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ZwClose(v9);
  if ( UserEUDCRegistryPath < 0 )
LABEL_12:
    v5 = 0;
  if ( v2 )
    Win32FreePool((PATHOBJ *)v2);
  return v5;
}
