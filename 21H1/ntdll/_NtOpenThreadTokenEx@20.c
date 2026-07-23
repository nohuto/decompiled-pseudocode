/*
 * XREFs of _NtOpenThreadTokenEx@20 @ 0x4B2F2C70
 * Callers:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _RtlpIsAppContainer@8 @ 0x4B3490A6 (_RtlpIsAppContainer@8.c)
 *     _RtlpOpenThreadToken@8 @ 0x4B349188 (_RtlpOpenThreadToken@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  return Wow64SystemServiceCall();
}
