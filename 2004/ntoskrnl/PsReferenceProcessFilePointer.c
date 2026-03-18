/*
 * XREFs of PsReferenceProcessFilePointer @ 0x1406B7770
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x140201394 (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x1402698EC (SepMandatorySubProcessToken.c)
 *     PspCallProcessNotifyRoutines @ 0x14060283C (PspCallProcessNotifyRoutines.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     DbgkCreateThread @ 0x1406B52F4 (DbgkCreateThread.c)
 *     CmpCheckExeOwnerForPca @ 0x14075D284 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140229C10 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
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
