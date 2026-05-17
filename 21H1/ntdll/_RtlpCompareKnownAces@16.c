/*
 * XREFs of _RtlpCompareKnownAces@16 @ 0x4B2D8537
 * Callers:
 *     _RtlpCompareAces@16 @ 0x4B2D8505 (_RtlpCompareAces@16.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlEqualPrefixSid@8 @ 0x4B2D8300 (_RtlEqualPrefixSid@8.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

char __fastcall RtlpCompareKnownAces(unsigned __int8 *a1, unsigned __int8 *a2, void *Buf2, void *a4)
{
  int v6; // ecx
  int v8; // eax
  char v9; // al
  void *Buf1; // [esp+Ch] [ebp-40h]
  int v11; // [esp+10h] [ebp-3Ch] BYREF
  __int16 v12; // [esp+14h] [ebp-38h]
  _DWORD v13[12]; // [esp+18h] [ebp-34h] BYREF

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  Buf1 = a2 + 8;
  if ( !(unsigned __int8)RtlEqualSid(a2 + 8, a1 + 8) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !Buf2 && !a4 )
      return 0;
    v12 = 768;
    v11 = 0;
    memset(v13, 0, sizeof(v13));
    if ( RtlInitializeSid((int)v13, (int)&v11, 1u) < 0 )
      return 0;
    v13[2] = 0;
    if ( !RtlEqualPrefixSid(a1 + 8, v13) )
      return 0;
    v8 = *((_DWORD *)a1 + 4);
    if ( v8 )
    {
      if ( v8 != 1 || !a4 )
        return 0;
      v9 = RtlEqualSid(Buf1, a4);
    }
    else
    {
      if ( !Buf2 )
        return 0;
      v9 = RtlEqualSid(Buf1, Buf2);
    }
    if ( !v9 )
      return 0;
  }
  return 1;
}
