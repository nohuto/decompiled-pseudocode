/*
 * XREFs of PsReferenceProcessFilePointer @ 0x14064E790
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140201394 (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x1403395EC (SepMandatorySubProcessToken.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     PspCallProcessNotifyRoutines @ 0x14063787C (PspCallProcessNotifyRoutines.c)
 *     DbgkCreateThread @ 0x14064C314 (DbgkCreateThread.c)
 *     CmpCheckExeOwnerForPca @ 0x14075AD9C (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     MiReferenceControlAreaFile @ 0x140282C60 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, ULONG_PTR *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 result; // rax

  v2 = a1 + 139;
  if ( ExAcquireRundownProtection_0(a1 + 139) )
  {
    Count = a1[163].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFile(v6);
      ExReleaseRundownProtection_0(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection_0(v2);
  }
  return 3221225473LL;
}
