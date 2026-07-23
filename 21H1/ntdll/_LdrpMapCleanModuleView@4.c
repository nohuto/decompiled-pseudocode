/*
 * XREFs of _LdrpMapCleanModuleView@4 @ 0x4B334528
 * Callers:
 *     _LdrpGetImportDescriptorForSnap@4 @ 0x4B2E5CCD (_LdrpGetImportDescriptorForSnap@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 */

int __thiscall LdrpMapCleanModuleView(_DWORD *this)
{
  NTSTATUS v2; // esi
  SIZE_T v4; // [esp-14h] [ebp-2Ch]
  ULONG v5; // [esp+0h] [ebp-18h]
  ULONG v6; // [esp+4h] [ebp-14h]
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+10h] [ebp-8h] BYREF
  HANDLE ProcessInformation; // [esp+14h] [ebp-4h] BYREF

  ProcessInformation = 0;
  BaseAddress = 0;
  v7 = 0;
  if ( this[8] != LdrpImageEntry )
    return -1073741637;
  v2 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessImageSection, &ProcessInformation, 4u, 0);
  if ( v2 >= 0 )
  {
    HIDWORD(v4) = &v7;
    LODWORD(v4) = 0;
    v2 = ZwMapViewOfSection(
           ProcessInformation,
           (HANDLE)0xFFFFFFFF,
           &BaseAddress,
           0LL,
           v4,
           (PLARGE_INTEGER)1,
           (PSIZE_T)0x40000,
           ViewUnmap,
           v5,
           v6);
    if ( v2 >= 0 )
      this[26] = BaseAddress;
    NtClose(ProcessInformation);
  }
  return v2;
}
