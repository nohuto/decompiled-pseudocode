/*
 * XREFs of RtlLargeIntegerToChar @ 0x180001010
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800EDC90 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  int v6; // r9d
  int v7; // r10d
  char *v8; // r14
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rtt
  int v12; // esp
  __int64 v13; // rsi
  bool v14; // cc
  int v16; // r8d
  size_t v17; // rbx
  char v18; // [rsp+61h] [rbp-37h] BYREF

  switch ( Base )
  {
    case 0u:
      Base = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v6 = 0;
      v7 = 0;
      goto LABEL_4;
    case 2u:
      v6 = 1;
      break;
    case 8u:
      v6 = 3;
      break;
    case 0x10u:
      v6 = 4;
      break;
    default:
      return -1073741811;
  }
  v7 = (1 << v6) - 1;
LABEL_4:
  v8 = &v18;
  QuadPart = Value->QuadPart;
  if ( v6 )
  {
    do
    {
      v16 = QuadPart;
      QuadPart >>= v6;
      *--v8 = RtlpIntegerChars[v7 & v16];
    }
    while ( QuadPart );
  }
  else
  {
    v10 = Base;
    do
    {
      v11 = QuadPart;
      QuadPart /= v10;
      *(_QWORD *)&Base = v11 % v10;
      *--v8 = RtlpIntegerChars[(unsigned int)(v11 % v10)];
    }
    while ( QuadPart );
  }
  v13 = (unsigned int)(v12 + 97 - (_DWORD)v8);
  if ( OutputLength >= 0 )
    goto LABEL_8;
  OutputLength = -OutputLength;
  v14 = (int)v13 <= OutputLength;
  if ( (int)v13 < OutputLength )
  {
    v17 = (unsigned int)(OutputLength - v13);
    LOBYTE(Base) = 48;
    memset(String, Base, v17);
    OutputLength = v13;
    String += v17;
LABEL_8:
    v14 = (int)v13 <= OutputLength;
  }
  if ( !v14 )
    return -2147483643;
  memmove(String, v8, (unsigned int)v13);
  if ( (int)v13 < OutputLength )
    String[v13] = 0;
  return 0;
}
