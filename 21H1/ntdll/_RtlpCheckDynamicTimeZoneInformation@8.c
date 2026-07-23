/*
 * XREFs of _RtlpCheckDynamicTimeZoneInformation@8 @ 0x4B2EAAF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpRegTziFormatToTzi@8 @ 0x4B2EABA6 (_RtlpRegTziFormatToTzi@8.c)
 *     _RtlpGetDynamicTimeZoneInfoHandle@8 @ 0x4B2EAC1B (_RtlpGetDynamicTimeZoneInfoHandle@8.c)
 *     _RtlpFindRegTziForCurrentYear@12 @ 0x4B2EAD32 (_RtlpFindRegTziForCurrentYear@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

char __userpurge RtlpCheckDynamicTimeZoneInformation@<al>(int a1@<edi>, int a2@<esi>, char *Buf2, __int16 a4)
{
  size_t v5; // [esp-4h] [ebp-ECh]
  HANDLE Handle; // [esp+4h] [ebp-E4h] BYREF
  char v7; // [esp+Bh] [ebp-DDh]
  _BYTE Buf1[172]; // [esp+Ch] [ebp-DCh] BYREF
  int Radix[11]; // [esp+B8h] [ebp-30h] BYREF

  v7 = 0;
  if ( RtlpGetDynamicTimeZoneInfoHandle(Buf2 + 172, &Handle) >= 0 )
  {
    if ( RtlpFindRegTziForCurrentYear((int)Radix, a4) >= 0 )
    {
      qmemcpy(Buf1, Buf2, sizeof(Buf1));
      RtlpRegTziFormatToTzi(a1, a2);
      LODWORD(v5) = 172;
      if ( memcmp(Buf1, Buf2, v5) )
      {
        v7 = 1;
        qmemcpy(Buf2, Buf1, 0xACu);
      }
    }
    NtClose(Handle);
  }
  return v7;
}
