/*
 * XREFs of CarpSaveViolationSnapshot @ 0x140605280
 * Callers:
 *     CarReportRuleViolationForTriage @ 0x140604030 (CarReportRuleViolationForTriage.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 */

NTSTATUS __fastcall CarpSaveViolationSnapshot(int a1, int a2, __int64 *a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v5; // rax

  result = _InterlockedCompareExchange(&CarIsViolationSnapshotTaken, 1, 0);
  if ( result != 1 )
  {
    v5 = 0LL;
    dword_140C18F28 = a1;
    dword_140C18F2C = a2;
    if ( a3 )
    {
      qword_140C18F30 = *a3;
      qword_140C18F38 = a3[1];
      v5 = a3[2];
    }
    else
    {
      qword_140C18F30 = 0LL;
      qword_140C18F38 = 0LL;
    }
    qword_140C18F40 = v5;
    return RtlStringCchCopyW(&pszDest, 0x20uLL, (NTSTRSAFE_PCWSTR)(a4 + 4));
  }
  return result;
}
