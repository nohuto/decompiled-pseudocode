/*
 * XREFs of PfLogFileDataAccess @ 0x140564E48
 * Callers:
 *     MiLogRelocationRva @ 0x1407138D4 (MiLogRelocationRva.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402427D0 (PsGetPagePriorityThread.c)
 *     PfLogEvent @ 0x1402D4DFC (PfLogEvent.c)
 */

__int64 __fastcall PfLogFileDataAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  if ( (unsigned int)PsGetPagePriorityThread(a2) < dword_140C4E82C )
    return 0LL;
  v10 = *(_QWORD *)(v5 + 544);
  v11 = *(_QWORD *)(v10 + 1088) ^ *(_QWORD *)(v10 + 1128);
  v12[2] = v7 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
  v12[1] = v6 >> 12;
  v13 = dword_140CEC350;
  v14 = *(_DWORD *)(v10 + 1088);
  v12[3] = v11 & 0x1FFFFFFFFFFFFFFFLL;
  v12[0] = v8;
  return PfLogEvent(
           10,
           dword_140C502DC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           v12,
           0x28u);
}
