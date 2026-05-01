/*
 * XREFs of ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18015AE04
 * Callers:
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x18015ACFC (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x18008E588 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E5F0 (_Init_thread_header.c)
 */

bool __fastcall CApplicationManagerUtility::IsGhostWindow(HWND hWnd, HWND a2)
{
  if ( dword_1805CDAC0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805CDAC0);
    if ( dword_1805CDAC0 == -1 )
    {
      word_1805CCEB8 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_1805CDAC0);
    }
  }
  return (unsigned __int16)GetClassLongW(hWnd, -32) == (unsigned __int16)word_1805CCEB8;
}
