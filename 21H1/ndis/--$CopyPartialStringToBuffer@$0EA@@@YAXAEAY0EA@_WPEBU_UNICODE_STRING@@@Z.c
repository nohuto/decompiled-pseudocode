/*
 * XREFs of ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x1C00FD424
 * Callers:
 *     ndisMiniportDeviceReadyNotification @ 0x1C00FB4B0 (ndisMiniportDeviceReadyNotification.c)
 * Callees:
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int128 *__fastcall CopyPartialStringToBuffer<64>(__int64 a1, const void **a2)
{
  __int128 *result; // rax

  if ( *(_WORD *)a2 < 0x80u )
  {
    memset(&xmmword_1C00E5F20, 0, 0x80uLL);
    return (__int128 *)memmove(&xmmword_1C00E5F20, a2[1], *(unsigned __int16 *)a2);
  }
  else
  {
    result = (__int128 *)a2[1];
    xmmword_1C00E5F20 = *result;
    xmmword_1C00E5F30 = result[1];
    xmmword_1C00E5F40 = result[2];
    xmmword_1C00E5F50 = result[3];
    xmmword_1C00E5F60 = result[4];
    xmmword_1C00E5F70 = result[5];
    xmmword_1C00E5F80 = result[6];
    xmmword_1C00E5F90 = result[7];
  }
  return result;
}
