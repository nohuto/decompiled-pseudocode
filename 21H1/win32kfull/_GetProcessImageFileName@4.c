/*
 * XREFs of _GetProcessImageFileName@4 @ 0x1D1030
 * Callers:
 *     _GetProcessImageFilename@8 @ 0x15121A (_GetProcessImageFilename@8.c)
 *     ?LogFontLoadAttempt@@YGXPAXW4_W32KFontSourceType@@PBGH@Z @ 0x1D0476 (-LogFontLoadAttempt@@YGXPAXW4_W32KFontSourceType@@PBGH@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

void *__thiscall GetProcessImageFileName(HANDLE ProcessHandle)
{
  void *v2; // esi
  void *v3; // eax
  ULONG ReturnLength; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  ReturnLength = 0;
  if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0, 0, &ReturnLength) == -1073741820
    && ReturnLength >= 8 )
  {
    v3 = (void *)AllocFreeTmpBuffer(ReturnLength + 2);
    v2 = v3;
    if ( v3 )
    {
      memset(v3, 0, ReturnLength + 2);
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, v2, ReturnLength, 0) < 0 )
      {
        FreeTmpBuffer(v2);
        return 0;
      }
    }
  }
  return v2;
}
