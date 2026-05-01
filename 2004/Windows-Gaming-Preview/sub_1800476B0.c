/*
 * XREFs of sub_1800476B0 @ 0x1800476B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 */

void __fastcall sub_1800476B0()
{
  signed int LastError; // eax
  DWORD v1; // ecx

  off_18005A170 = off_18004DA88;
  if ( hEvent )
  {
    if ( !CloseHandle(hEvent) )
    {
      LastError = GetLastError();
      v1 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v1 = LastError;
      sub_180011F90(v1);
      __debugbreak();
    }
    hEvent = 0LL;
  }
}
