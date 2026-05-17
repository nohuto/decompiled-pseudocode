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
  int InformationProcess; // esi
  int v4; // [esp+Ch] [ebp-Ch] BYREF
  int v5; // [esp+10h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-4h] BYREF

  Handle = 0;
  v5 = 0;
  v4 = 0;
  if ( this[8] != LdrpImageEntry )
    return -1073741637;
  InformationProcess = ZwQueryInformationProcess(-1, 89, (int)&Handle, 4, 0);
  if ( InformationProcess >= 0 )
  {
    InformationProcess = ZwMapViewOfSection((int)Handle, -1, (int)&v5, 0, 0, 0, (int)&v4, 1, 0x40000, 2);
    if ( InformationProcess >= 0 )
      this[26] = v5;
    NtClose(Handle);
  }
  return InformationProcess;
}
