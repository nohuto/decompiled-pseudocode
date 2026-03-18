/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x1409ADA94
 * Callers:
 *     PopWriteHiberPages @ 0x14098D6B4 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14098FFF4 (PopRequestWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopRecordHibernateDiagnosticInfo(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = 0;
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140C24016;
  v3 = 0;
  qword_140C242A8 = qword_140C23AF0;
  v4 = 0;
  qword_140C242B0 = qword_140C23AF8;
  qword_140C242B8 = qword_140C23B18;
  qword_140C242C0 = qword_140C23B08;
  qword_140C242C8 = qword_140C23B00;
  qword_140C242D0 = qword_140C23B20;
  qword_140C242D8 = qword_140C23B10;
  qword_140C242E0 = qword_140C23B28;
  dword_140C242E8 = dword_140C23B30;
  result = (unsigned int)dword_140C23624;
  dword_140C242F4 = dword_140C23624;
  for ( qword_140C242EC = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C242EC) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C242EC) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
