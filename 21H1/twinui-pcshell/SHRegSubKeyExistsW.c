/*
 * XREFs of SHRegSubKeyExistsW @ 0x18044913C
 * Callers:
 *     ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x1801F2FE0 (-ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHRegSubKeyExistsW(HKEY a1, const WCHAR *a2)
{
  unsigned int v2; // ebx
  HKEY hKey; // [rsp+40h] [rbp+8h] BYREF

  hKey = a1;
  v2 = 0;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, a2, 0, 1u, &hKey) )
  {
    RegCloseKey(hKey);
    return 1;
  }
  return v2;
}
