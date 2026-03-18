/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x1406B3408
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x140630564 (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspThreadOpen @ 0x1406B3250 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1406B3310 (PspProcessOpen.c)
 *     DbgkOpenProcessDebugPort @ 0x140886E48 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x1408887E0 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140888BB0 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B345C (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // r10
  __int64 v5; // r11

  result = 0;
  if ( a2 != a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 2170);
    LOBYTE(a3) = *(_BYTE *)(a3 + 2170);
    if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) )
    {
      if ( !qword_140C1DA00 || !(unsigned __int8)qword_140C1DA00(v5, v4) )
        return 1;
    }
  }
  return result;
}
