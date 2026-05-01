/*
 * XREFs of ?IsPlaceModeEnabled@@YA_NXZ @ 0x18025F844
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18025DB70 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 */

bool IsPlaceModeEnabled(void)
{
  int v0; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+58h] [rbp+10h] BYREF

  if ( dword_1805CE76C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CE76C);
    if ( dword_1805CE76C == -1 )
    {
      dword_1805CE770 = IsPPIEdition() + 1;
      Init_thread_footer(&dword_1805CE76C);
    }
  }
  v0 = dword_1805CE064;
  if ( !dword_1805CE064 )
  {
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\WindowArrangement\\PlaceMode",
           L"Enabled",
           0x10u,
           0LL,
           &pvData,
           &pcbData) )
    {
      v0 = dword_1805CE770;
    }
    else
    {
      v0 = 2 - (pvData != 0);
    }
    dword_1805CE064 = v0;
  }
  return v0 == 1;
}
