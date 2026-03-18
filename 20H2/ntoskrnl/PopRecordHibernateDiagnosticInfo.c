/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x1409B4864
 * Callers:
 *     PopWriteHiberPages @ 0x140993EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140996DB4 (PopRequestWrite.c)
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
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140C23EF6;
  v3 = 0;
  qword_140C24168 = qword_140C239F0;
  v4 = 0;
  qword_140C24170 = qword_140C239F8;
  qword_140C24178 = qword_140C23A18;
  qword_140C24180 = qword_140C23A08;
  qword_140C24188 = qword_140C23A00;
  qword_140C24190 = qword_140C23A20;
  qword_140C24198 = qword_140C23A10;
  qword_140C241A0 = qword_140C23A28;
  dword_140C241A8 = dword_140C23A30;
  result = (unsigned int)dword_140C23524;
  dword_140C241B4 = dword_140C23524;
  for ( qword_140C241AC = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C241AC) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C241AC) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
