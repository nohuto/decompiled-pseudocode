/*
 * XREFs of RtlCreateServiceSid @ 0x18003FAC0
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CBDE0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x180015D20 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x1800400B0 (RtlInitializeSid.c)
 *     A_SHAFinal @ 0x180040280 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x1800410F0 (A_SHAUpdate.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateServiceSid(unsigned __int16 *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // r8
  int v7; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v9[64]; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+70h] [rbp+17h]
  int v11; // [rsp+74h] [rbp+1Bh]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  int v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+84h] [rbp+2Bh]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+94h] [rbp+3Bh]
  int v19; // [rsp+98h] [rbp+3Fh]
  int v20; // [rsp+9Ch] [rbp+43h]
  int v21; // [rsp+A0h] [rbp+47h]

  if ( !a1 || !a3 )
    return 3221225485LL;
  v4 = *a3;
  *a3 = 32;
  if ( v4 < 0x20 )
    return 3221225507LL;
  result = RtlUpcaseUnicodeString((__int64)&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
  {
    v15 = 0;
    v16 = 0;
    v10 = 1732584193;
    v11 = -271733879;
    v12 = -1732584194;
    v13 = 271733878;
    v14 = -1009589776;
    A_SHAUpdate(v9, UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v9);
    RtlFreeAnsiString(&UnicodeString);
    LOBYTE(v6) = 6;
    RtlInitializeSid(a2, &RtlpNtAuthority, v6);
    v7 = v17;
    a2[2] = 80;
    a2[3] = v7;
    a2[4] = v18;
    a2[5] = v19;
    a2[6] = v20;
    a2[7] = v21;
    return 0LL;
  }
  return result;
}
