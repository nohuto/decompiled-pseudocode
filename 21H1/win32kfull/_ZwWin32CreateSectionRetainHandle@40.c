/*
 * XREFs of _ZwWin32CreateSectionRetainHandle@40 @ 0x8CB3C
 * Callers:
 *     _ZwWin32CreateSection@36 @ 0x8CB02 (_ZwWin32CreateSection@36.c)
 *     _InitializeWin32CrossSessionGlobals@0 @ 0xEB56E (_InitializeWin32CrossSessionGlobals@0.c)
 *     ?ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@PAT_LARGE_INTEGER@@_N@Z @ 0x1E89E2 (-ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __thiscall ZwWin32CreateSectionRetainHandle(
        _DWORD *this,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        int a5,
        HANDLE FileHandle,
        int a7,
        int a8,
        PHANDLE SectionHandle)
{
  PHANDLE v9; // esi
  NTSTATUS result; // eax
  NTSTATUS v12; // edi
  HANDLE v13; // [esp-1Ch] [ebp-24h]

  v9 = SectionHandle;
  result = ZwCreateSection(
             SectionHandle,
             (ACCESS_MASK)&loc_F001D + 2,
             ObjectAttributes,
             MaximumSize,
             SectionPageProtection,
             0x8000000u,
             FileHandle);
  if ( result >= 0 )
  {
    v13 = *v9;
    FileHandle = 0;
    v12 = ObReferenceObjectByHandle(v13, (ACCESS_MASK)&loc_F001D + 2, _MmSectionObjectType, 0, &FileHandle, 0);
    *this = FileHandle;
    if ( v12 < 0 )
    {
      ZwClose(*v9);
      *v9 = 0;
    }
    return v12;
  }
  return result;
}
