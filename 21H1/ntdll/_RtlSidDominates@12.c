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

int __stdcall RtlSidDominates(unsigned __int8 *Buf1, char *a2, char *a3)
{
  char v3; // bl
  unsigned __int8 v5; // al
  unsigned int v6; // ecx
  unsigned __int8 v7; // al
  int Buf2; // [esp+10h] [ebp-Ch] BYREF
  __int16 v9; // [esp+14h] [ebp-8h]

  v3 = 0;
  *a3 = 0;
  Buf2 = 0;
  v9 = 4096;
  if ( memcmp(Buf1 + 2, &Buf2, 6u) || memcmp(a2 + 2, &Buf2, 6u) )
    return -1073741811;
  if ( RtlEqualSid(Buf1, a2)
    || ((v5 = Buf1[1]) == 0 ? (v6 = 0) : (v6 = *(_DWORD *)&Buf1[4 * v5 + 4]),
        (v7 = a2[1]) == 0 || v6 >= *(_DWORD *)&a2[4 * v7 + 4]) )
  {
    v3 = 1;
  }
  *a3 = v3;
  return 0;
}
