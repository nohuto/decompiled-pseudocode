/*
 * XREFs of _WerpCreateCompletionEvent@4 @ 0x4B33AF8E
 * Callers:
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 * Callees:
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 */

int __thiscall WerpCreateCompletionEvent(_DWORD *this)
{
  _DWORD v2[6]; // [esp+0h] [ebp-18h] BYREF

  if ( !this )
    return -1073741585;
  v2[0] = 24;
  *this = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v2[3] = 2;
  return NtCreateEvent((int)this, 2031619, (int)v2, 0, 0);
}
