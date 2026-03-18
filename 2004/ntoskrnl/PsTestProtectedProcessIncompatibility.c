/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x1406B5EA8
 * Callers:
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x140618348 (DbgkCopyProcessDebugPort.c)
 *     PspThreadOpen @ 0x1406B5CF0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1406B5DB0 (PspProcessOpen.c)
 *     DbgkOpenProcessDebugPort @ 0x1408812F8 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140882C90 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140883060 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B5EFC (PspCheckForInvalidAccessByProtection.c)
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
      if ( !qword_140C1D960 || !(unsigned __int8)qword_140C1D960(v5, v4) )
        return 1;
    }
  }
  return result;
}
