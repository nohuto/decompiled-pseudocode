/*
 * XREFs of _RtlSidIsHigherLevel@12 @ 0x4B347530
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

NTSTATUS __cdecl RtlSidIsHigherLevel(PSID Sid1, PSID Sid2, PBOOLEAN HigherLevel)
{
  size_t v4; // [esp-4h] [ebp-1Ch]
  size_t v5; // [esp-4h] [ebp-1Ch]
  int Buf2; // [esp+Ch] [ebp-Ch] BYREF
  __int16 v7; // [esp+10h] [ebp-8h]

  Buf2 = 0;
  LODWORD(v4) = 6;
  v7 = 4096;
  if ( memcmp((char *)Sid1 + 2, &Buf2, v4) )
    return -1073741811;
  LODWORD(v5) = 6;
  if ( memcmp((char *)Sid2 + 2, &Buf2, v5) )
    return -1073741811;
  *HigherLevel = *((_DWORD *)Sid1 + 2) > *((_DWORD *)Sid2 + 2);
  return 0;
}
