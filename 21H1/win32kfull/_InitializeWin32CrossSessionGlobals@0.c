/*
 * XREFs of _InitializeWin32CrossSessionGlobals@0 @ 0xEB56E
 * Callers:
 *     <none>
 * Callees:
 *     _ZwWin32CreateSectionRetainHandle@40 @ 0x8CB3C (_ZwWin32CreateSectionRetainHandle@40.c)
 */

NTSTATUS __stdcall InitializeWin32CrossSessionGlobals()
{
  NTSTATUS v0; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-30h] BYREF
  _WORD v3[2]; // [esp+24h] [ebp-18h] BYREF
  const wchar_t *v4; // [esp+28h] [ebp-14h]
  ULONG_PTR ViewSize; // [esp+2Ch] [ebp-10h] BYREF
  union _LARGE_INTEGER MaximumSize; // [esp+30h] [ebp-Ch] BYREF
  void *SectionHandle; // [esp+38h] [ebp-4h] BYREF

  v3[0] = 52;
  v3[1] = 54;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  v4 = L"\\Win32kCrossSessionGlobals";
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 66112;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( _gSessionId == _gServiceSessionId )
  {
    MaximumSize.QuadPart = 28LL;
    v0 = ZwWin32CreateSectionRetainHandle(
           &gxsSection,
           &ObjectAttributes,
           &MaximumSize,
           4u,
           _gSessionId,
           0,
           _gSessionId,
           _gSessionId,
           &gxsSectionHandle);
  }
  else
  {
    SectionHandle = 0;
    v0 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
    if ( v0 < 0 )
      return v0;
    MaximumSize.HighPart = 0;
    v0 = ObReferenceObjectByHandle(
           SectionHandle,
           (ACCESS_MASK)&loc_F001D + 2,
           _MmSectionObjectType,
           0,
           (PVOID *)&MaximumSize.HighPart,
           0);
    gxsSection = (PVOID)MaximumSize.HighPart;
    ZwClose(SectionHandle);
  }
  if ( v0 >= 0 )
  {
    ViewSize = 28;
    return MmMapViewInSessionSpace(gxsSection, &gpxsGlobals, &ViewSize);
  }
  return v0;
}
