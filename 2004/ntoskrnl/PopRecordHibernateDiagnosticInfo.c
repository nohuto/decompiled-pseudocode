/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x1409AE8F4
 * Callers:
 *     PopWriteHiberPages @ 0x14098DECC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140990D44 (PopRequestWrite.c)
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
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140C23A76;
  v3 = 0;
  qword_140C24068 = qword_140C23530;
  v4 = 0;
  qword_140C24070 = qword_140C23538;
  qword_140C24078 = qword_140C23558;
  qword_140C24080 = qword_140C23548;
  qword_140C24088 = qword_140C23540;
  qword_140C24090 = qword_140C23560;
  qword_140C24098 = qword_140C23550;
  qword_140C240A0 = qword_140C23568;
  dword_140C240A8 = dword_140C23570;
  result = (unsigned int)dword_140C23064;
  dword_140C240B4 = dword_140C23064;
  for ( qword_140C240AC = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C240AC) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C240AC) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
