/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x14064CEC8
 * Callers:
 *     PspThreadOpen @ 0x14064CD10 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x14064CDD0 (PspProcessOpen.c)
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14066FA68 (DbgkCopyProcessDebugPort.c)
 *     DbgkOpenProcessDebugPort @ 0x14087FFD8 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140881970 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140881D40 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14064CF1C (PspCheckForInvalidAccessByProtection.c)
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
      if ( !qword_140C1DB20 || !(unsigned __int8)qword_140C1DB20(v5, v4) )
        return 1;
    }
  }
  return result;
}
