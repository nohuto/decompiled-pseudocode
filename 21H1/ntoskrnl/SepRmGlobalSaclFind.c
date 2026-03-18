/*
 * XREFs of SepRmGlobalSaclFind @ 0x140920350
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x140591368 (SepExamineGlobalSaclEx.c)
 *     NtSetSecurityObject @ 0x1406C5ED0 (NtSetSecurityObject.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1407AF8C0 (SepRmGlobalSaclSetWrkr.c)
 *     SeAuditingFileOrGlobalEvents @ 0x14091C130 (SeAuditingFileOrGlobalEvents.c)
 *     SeExamineGlobalSacl @ 0x140920178 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140920298 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     RtlCompareUnicodeString @ 0x14061BCF0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall SepRmGlobalSaclFind(__int64 *a1, __int64 **a2, const UNICODE_STRING *a3, char a4)
{
  char v4; // bp
  unsigned int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 *v11; // rax

  v4 = 0;
  v8 = -1073741772;
  if ( SepRmGlobalSaclHead )
  {
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v4 = 1;
      ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    }
    v10 = SepRmGlobalSaclHead;
    *a1 = SepRmGlobalSaclHead;
    if ( a2 )
      *a2 = 0LL;
    while ( v10 )
    {
      if ( !RtlCompareUnicodeString(a3, (PCUNICODE_STRING)(v10 + 8), 0) )
      {
        v8 = 0;
        goto LABEL_13;
      }
      v11 = (__int64 *)*a1;
      if ( a2 )
        *a2 = v11;
      v10 = *v11;
      *a1 = v10;
    }
    if ( a2 )
      *a2 = 0LL;
LABEL_13:
    if ( v4 )
    {
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegion();
    }
  }
  return v8;
}
