/*
 * XREFs of PsReferenceProcessFilePointer @ 0x14068ECE0
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140201394 (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x1402E37EC (SepMandatorySubProcessToken.c)
 *     PspCallProcessNotifyRoutines @ 0x14062809C (PspCallProcessNotifyRoutines.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     CmpCheckExeOwnerForPca @ 0x14076B9E4 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
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
