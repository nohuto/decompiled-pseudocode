/*
 * XREFs of PopPluginAcpiNotificationStrict @ 0x14057E18C
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x14057C258 (PopFxAcpiDispatchNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x14057C550 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x14057C668 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14057C778 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14056791C (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginAcpiNotificationStrict(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4)
{
  unsigned int v4; // edi
  __int64 result; // rax

  v4 = BugCheckParameter2;
  result = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(BugCheckParameter3 + 112))(
             (unsigned int)BugCheckParameter2,
             BugCheckParameter4);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x668uLL, v4, BugCheckParameter3, BugCheckParameter4);
  return result;
}
