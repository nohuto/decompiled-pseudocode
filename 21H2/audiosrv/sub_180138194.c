/*
 * XREFs of sub_180138194 @ 0x180138194
 * Callers:
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_180074010 @ 0x180074010 (sub_180074010.c)
 * Callees:
 *     sub_180137F48 @ 0x180137F48 (sub_180137F48.c)
 */

void __fastcall sub_180138194(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_180137F48(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
