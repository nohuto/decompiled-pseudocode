/*
 * XREFs of _WerpCreateCrashDataSection@8 @ 0x4B33AFD2
 * Callers:
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall WerpCreateCrashDataSection(HANDLE *a1, PVOID *a2)
{
  NTSTATUS v4; // esi
  HANDLE v5; // ecx
  PVOID v6; // eax
  SIZE_T v8; // [esp-14h] [ebp-54h]
  size_t v9; // [esp-4h] [ebp-44h]
  ULONG v10; // [esp+0h] [ebp-40h]
  ULONG v11; // [esp+4h] [ebp-3Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-30h] BYREF
  LARGE_INTEGER MaximumSize; // [esp+28h] [ebp-18h] BYREF
  int v14; // [esp+34h] [ebp-Ch] BYREF
  HANDLE SectionHandle; // [esp+38h] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+3Ch] [ebp-4h] BYREF

  SectionHandle = 0;
  BaseAddress = 0;
  v14 = 0;
  if ( a1 )
    *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( !a1 )
    return -1073741585;
  if ( !a2 )
    return -1073741584;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.ObjectName = 0;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 2;
  MaximumSize.QuadPart = 1052LL;
  v4 = NtCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0);
  if ( v4 < 0
    || (HIDWORD(v8) = &v14,
        LODWORD(v8) = 0,
        v4 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFF,
               &BaseAddress,
               0LL,
               v8,
               (PLARGE_INTEGER)1,
               0,
               (SECTION_INHERIT)4,
               v10,
               v11),
        v4 < 0) )
  {
    v5 = SectionHandle;
    v6 = BaseAddress;
  }
  else
  {
    LODWORD(v9) = 248;
    memset(BaseAddress, 0, v9);
    v5 = 0;
    *a1 = SectionHandle;
    v4 = 0;
    *a2 = BaseAddress;
    v6 = 0;
    SectionHandle = 0;
    BaseAddress = 0;
  }
  if ( v6 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, v6);
    BaseAddress = 0;
    v5 = SectionHandle;
  }
  if ( v5 )
    NtClose(v5);
  return v4;
}
