/*
 * XREFs of _RtlSidDominates@12 @ 0x4B2D9420
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpValidLabelSubjectContext@16 @ 0x4B34A22A (_RtlpValidLabelSubjectContext@16.c)
 * Callees:
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

NTSTATUS __cdecl RtlSidDominates(PSID Sid1, PSID Sid2, PBOOLEAN Dominates)
{
  BOOLEAN v3; // bl
  unsigned __int8 v5; // al
  unsigned int v6; // ecx
  unsigned __int8 v7; // al
  size_t v8; // [esp-4h] [ebp-20h]
  size_t v9; // [esp-4h] [ebp-20h]
  int Buf2; // [esp+10h] [ebp-Ch] BYREF
  __int16 v11; // [esp+14h] [ebp-8h]

  v3 = 0;
  *Dominates = 0;
  LODWORD(v8) = 6;
  Buf2 = 0;
  v11 = 4096;
  if ( memcmp((char *)Sid1 + 2, &Buf2, v8) )
    return -1073741811;
  LODWORD(v9) = 6;
  if ( memcmp((char *)Sid2 + 2, &Buf2, v9) )
    return -1073741811;
  if ( RtlEqualSid(Sid1, Sid2)
    || ((v5 = *((_BYTE *)Sid1 + 1)) == 0 ? (v6 = 0) : (v6 = *((_DWORD *)Sid1 + v5 + 1)),
        (v7 = *((_BYTE *)Sid2 + 1)) == 0 || v6 >= *((_DWORD *)Sid2 + v7 + 1)) )
  {
    v3 = 1;
  }
  *Dominates = v3;
  return 0;
}
